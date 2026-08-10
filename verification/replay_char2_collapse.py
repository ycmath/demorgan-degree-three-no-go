#!/usr/bin/env python3
"""
Replay: characteristic-2 facts of the paper
"No Genuine Degree-Three De Morgan Cohomology of the Dual-Rail Carrier".

Checks (exact integer / F2 arithmetic; ASCII output; stdlib only):
  [1] raw facts: value distribution {-2:4,-1:16,0:24,1:16,2:4}, sup-norm 2,
      mod-2 support 32, tau-antisymmetry, sum zero      (Proposition 2.5)
  [2] four-corner identity railwise over F2             (Lemma 5.3)
  [3] collapse c_R^W mod 2 = (r+s)(rho x + rho y),
      for 7 integer weight coordinate pairs (r,s)       (Theorem 5.4)
  [4] z-independence of c_R^W mod 2                     (Corollary 5.5)
  [5] delta(eta) table: witness (TRU,TRU,CON,TRU) = 1,
      36 nonzero identity-free 4-tuples, so eta is not
      a 3-cocycle of the state group                    (Theorem 5.6)
  [6] the diagonal tau-action on L^3 is free (32 orbits) (Theorem 5.7 premise)

Run:  python -X utf8 replay_char2_collapse.py
"""
from itertools import product
from collections import Counter

L = [(0, 0), (1, 0), (0, 1), (1, 1)]
name = {(0, 0): 'UNK', (1, 0): 'TRU', (0, 1): 'FAL', (1, 1): 'CON'}
UNK, TRU, FAL, CON = (0, 0), (1, 0), (0, 1), (1, 1)


def meet(x, y): return (x[0] & y[0], x[1] & y[1])
def join(x, y): return (x[0] | y[0], x[1] | y[1])
def tau(x):     return (1 - x[0], 1 - x[1])
def add(x, y):  return (x[0] ^ y[0], x[1] ^ y[1])
def rho(x):     return x[0] ^ x[1]


def W_A(x): return 1 if x == UNK else (-1 if x == CON else 0)
def W_B(x): return 1 if x == TRU else (-1 if x == FAL else 0)


def cW(W, x, y, z):
    J, M = join(x, y), meet(x, y)
    return W(join(J, z)) - W(meet(J, z)) - W(join(M, z)) + W(meet(M, z))


failures = []


def check(label, ok):
    print("  [%s] %s" % ("PASS" if ok else "FAIL", label))
    if not ok:
        failures.append(label)


print("== [1] raw facts (Proposition 2.5)")
for tag, W in (("W_A", W_A), ("W_B", W_B)):
    dist = Counter(cW(W, x, y, z) for x, y, z in product(L, repeat=3))
    check("value distribution %s = {-2:4,-1:16,0:24,1:16,2:4}" % tag,
          dict(sorted(dist.items())) == {-2: 4, -1: 16, 0: 24, 1: 16, 2: 4})
    check("sup-norm %s = 2" % tag,
          max(abs(cW(W, x, y, z)) for x, y, z in product(L, repeat=3)) == 2)
    check("mod-2 support %s = 32" % tag,
          sum(1 for x, y, z in product(L, repeat=3) if cW(W, x, y, z) % 2) == 32)
    check("tau-antisymmetry %s" % tag,
          all(cW(W, tau(x), tau(y), tau(z)) == -cW(W, x, y, z)
              for x, y, z in product(L, repeat=3)))
    check("sum over L^3 %s = 0" % tag,
          sum(cW(W, x, y, z) for x, y, z in product(L, repeat=3)) == 0)

print("== [2] four-corner identity (Lemma 5.3)")
ok = True
for x, y, z in product(L, repeat=3):
    J, M = join(x, y), meet(x, y)
    corners = [join(J, z), meet(J, z), join(M, z), meet(M, z)]
    s = (0, 0)
    for c in corners:
        s = add(s, c)
    if s != add(x, y):
        ok = False
check("(JVz)+(J^z)+(MVz)+(M^z) = x+y on all 64 triples", ok)

print("== [3] collapse identity (Theorem 5.4)")
ok = True
for r, s in [(0, 0), (1, 0), (0, 1), (1, 1), (2, 3), (5, -1), (-2, 2)]:
    for x, y, z in product(L, repeat=3):
        v = r * cW(W_A, x, y, z) + s * cW(W_B, x, y, z)
        if v % 2 != (((r + s) % 2) * ((rho(x) ^ rho(y)))) % 2:
            ok = False
check("c_R^(r W_A + s W_B) mod 2 = (r+s)(rho x + rho y), 7 pairs (r,s)", ok)

print("== [4] z-independence (Corollary 5.5)")
eta = {}
for x, y, z in product(L, repeat=3):
    eta[(x, y, z)] = cW(W_A, x, y, z) % 2
check("eta independent of z",
      all(eta[(x, y, z)] == eta[(x, y, L[0])] for x, y, z in product(L, repeat=3)))
check("eta = rho x + rho y",
      all(eta[(x, y, z)] == (rho(x) ^ rho(y)) for x, y, z in product(L, repeat=3)))

print("== [5] eta is not a 3-cocycle (Theorem 5.6)")


def eta_fun(x, y, z): return rho(x) ^ rho(y)


def delta(f, g1, g2, g3, g4):
    return (f(g2, g3, g4) ^ f(add(g1, g2), g3, g4) ^ f(g1, add(g2, g3), g4)
            ^ f(g1, g2, add(g3, g4)) ^ f(g1, g2, g3))


check("witness (TRU,TRU,CON,TRU): delta eta = 1",
      delta(eta_fun, TRU, TRU, CON, TRU) == 1)
nz_free = [g for g in product(L, repeat=4)
           if delta(eta_fun, *g) and UNK not in g]
check("36 nonzero identity-free 4-tuples", len(nz_free) == 36)
nz_all = sum(1 for g in product(L, repeat=4) if delta(eta_fun, *g))
check("delta eta nonzero somewhere (total %d entries)" % nz_all, nz_all > 0)

print("== [6] free diagonal tau-action on L^3 (Theorem 5.7 premise)")
pts = list(product(L, repeat=3))
check("no fixed points",
      all((tau(x), tau(y), tau(z)) != (x, y, z) for x, y, z in pts))
orbits = set()
for p in pts:
    q = tuple(tau(c) for c in p)
    orbits.add(frozenset([p, q]))
check("exactly 32 free orbits", len(orbits) == 32
      and all(len(o) == 2 for o in orbits))

print()
if failures:
    print("VERDICT: FAIL (%d)" % len(failures))
    raise SystemExit(1)
print("VERDICT: ALL PASS")
