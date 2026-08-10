#!/usr/bin/env python3
"""
Replay: the two characteristic-0 certificate facts of the paper
"No Genuine Degree-Three De Morgan Cohomology of the Dual-Rail Carrier".

  [A] The order complex of D4: f-vector (4,5,2,0), Euler characteristic 1,
      exact rational cohomology H^0, H^1, H^2 = 1, 0, 0 (contractible cone),
      and C^3 = 0.                                       (Theorem 4.5 (O))
  [B] Normalized multi-term distributive homology of D4 over Q with
      operations (p1, join, meet, p2) and coefficients (1,-1,-1,0):
      mutual right-distributivity, d^2 = 0 matrix-wise, and
      dim H_3 = 108 - 25 - 79 = 4 with tau-eigenspace split (2, 2).
                                                          (Fact 4.10)

Exact rational arithmetic (fractions.Fraction); stdlib only; ASCII output.
Run:  python -X utf8 replay_char0_certificates.py
"""
from itertools import product, combinations
from fractions import Fraction

failures = []


def check(label, ok):
    print("  [%s] %s" % ("PASS" if ok else "FAIL", label))
    if not ok:
        failures.append(label)


# ---------- exact linear algebra over Q ----------
def rref(rows):
    """Return (rref matrix, pivot columns). rows: list of lists of Fraction."""
    M = [list(r) for r in rows]
    if not M:
        return M, []
    nr, nc = len(M), len(M[0])
    pivots = []
    r = 0
    for c in range(nc):
        piv = None
        for i in range(r, nr):
            if M[i][c] != 0:
                piv = i
                break
        if piv is None:
            continue
        M[r], M[piv] = M[piv], M[r]
        pv = M[r][c]
        M[r] = [x / pv for x in M[r]]
        for i in range(nr):
            if i != r and M[i][c] != 0:
                f = M[i][c]
                M[i] = [a - f * b for a, b in zip(M[i], M[r])]
        pivots.append(c)
        r += 1
        if r == nr:
            break
    return M, pivots


def rank(rows):
    return len(rref(rows)[1])


def nullspace(rows, ncols):
    """Basis (list of column vectors) of the nullspace of the matrix."""
    if not rows:
        return [[Fraction(1) if i == j else Fraction(0) for i in range(ncols)]
                for j in range(ncols)]
    R, pivots = rref(rows)
    free = [c for c in range(ncols) if c not in pivots]
    basis = []
    for fc in free:
        v = [Fraction(0)] * ncols
        v[fc] = Fraction(1)
        for r_i, pc in enumerate(pivots):
            v[pc] = -R[r_i][fc]
        basis.append(v)
    return basis


def solve(A_cols, b):
    """Solve sum_j x_j * A_cols[j] = b exactly; return x or None."""
    n = len(b)
    m = len(A_cols)
    aug = [[A_cols[j][i] for j in range(m)] + [b[i]] for i in range(n)]
    R, pivots = rref(aug)
    if m in pivots:
        return None
    x = [Fraction(0)] * m
    for r_i, pc in enumerate(pivots):
        x[pc] = R[r_i][m]
    return x


# ============================================================
print("== [A] order complex of D4 over Q")
elts = [(0, 0), (1, 0), (0, 1), (1, 1)]


def leq(a, b): return a[0] <= b[0] and a[1] <= b[1]
def lt(a, b): return leq(a, b) and a != b


def rank_key(x): return (x[0] + x[1], x)


def simplices(dim):
    out = []
    for S in combinations(elts, dim + 1):
        s = sorted(S, key=rank_key)
        if all(lt(s[i], s[i + 1]) for i in range(len(s) - 1)):
            out.append(tuple(s))
    return out


S0, S1, S2, S3 = simplices(0), simplices(1), simplices(2), simplices(3)
check("f-vector (4,5,2,0)", (len(S0), len(S1), len(S2), len(S3)) == (4, 5, 2, 0))
check("Euler characteristic 1", len(S0) - len(S1) + len(S2) - len(S3) == 1)


def coboundary(Sk, Sk1):
    idx = {s: j for j, s in enumerate(Sk)}
    rows = []
    for t in Sk1:
        row = [Fraction(0)] * len(Sk)
        for i in range(len(t)):
            face = t[:i] + t[i + 1:]
            if face in idx:
                row[idx[face]] += Fraction((-1) ** i)
        rows.append(row)
    return rows


d0 = coboundary(S0, S1)
d1 = coboundary(S1, S2)
r0, r1 = rank(d0), rank(d1)
h0 = len(S0) - r0
h1 = (len(S1) - r1) - r0
h2 = len(S2) - r1
check("H^0,H^1,H^2 = 1,0,0", (h0, h1, h2) == (1, 0, 0))
check("C^3 = 0 (no 3-simplices)", len(S3) == 0)

# ============================================================
print("== [B] normalized multi-term distributive homology of D4 over Q")
B2 = list(range(4))


def join_(x, y): return x | y
def meet_(x, y): return x & y
def tau_(x):     return x ^ 3
def p1(x, y):    return x
def p2(x, y):    return y


OPS = [p1, join_, meet_, p2]
COEFFS = [Fraction(1), Fraction(-1), Fraction(-1), Fraction(0)]

ok = True
for oi in OPS:
    for oj in OPS:
        for a in B2:
            for b in B2:
                for c in B2:
                    if oj(oi(a, b), c) != oi(oj(a, c), oj(b, c)):
                        ok = False
check("mutual right-distributivity of (p1, join, meet, p2)", ok)


def basis(n):
    return [t for t in product(B2, repeat=n + 1)
            if all(t[i] != t[i + 1] for i in range(n))]


def face(t, i, op):
    if i == 0:
        return t[1:]
    y = t[i]
    return tuple([op(t[j], y) for j in range(i)] + list(t[i + 1:]))


def boundary_matrix(n):
    dom = basis(n)
    cod = basis(n - 1)
    if n == 0:
        return [], dom, cod
    idx = {t: i for i, t in enumerate(cod)}
    mat = [[Fraction(0)] * len(dom) for _ in range(len(cod))]
    for col, t in enumerate(dom):
        for coeff, op in zip(COEFFS, OPS):
            if coeff == 0:
                continue
            for i in range(n + 1):
                ft = face(t, i, op)
                if any(ft[j] == ft[j + 1] for j in range(len(ft) - 1)):
                    continue
                mat[idx[ft]][col] += coeff * ((-1) ** i)
    return mat, dom, cod


def matmul(A, B):
    if not A or not B:
        return []
    n, k, m = len(A), len(B), len(B[0])
    C = [[Fraction(0)] * m for _ in range(n)]
    for i in range(n):
        Ai = A[i]
        for t in range(k):
            a = Ai[t]
            if a == 0:
                continue
            Bt = B[t]
            Ci = C[i]
            for j in range(m):
                if Bt[j] != 0:
                    Ci[j] += a * Bt[j]
    return C


mats = {}
bases = {}
for n in range(0, 5):
    m, dom, cod = boundary_matrix(n)
    mats[n] = m
    bases[n] = dom

ok = True
for n in range(1, 4):
    if mats[n] and mats[n + 1]:
        P = matmul(mats[n], mats[n + 1])
        if any(x != 0 for row in P for x in row):
            ok = False
check("d^2 = 0 (matrix-wise, n = 1..3)", ok)

C3 = bases[3]
r3 = rank(mats[3])
r4 = rank(mats[4])
h3 = len(C3) - r3 - r4
check("dim C_3 = 108", len(C3) == 108)
check("rank d_3 = 25", r3 == 25)
check("rank d_4 = 79", r4 == 79)
check("dim H_3 = 108 - 25 - 79 = 4", h3 == 4)

# tau-eigenspace split on H_3
ker = nullspace(mats[3], len(C3))            # columns: basis of ker d_3
kdim = len(ker)
# columns of im d_4 inside C_3, expressed in ker-coordinates
im_cols = []
if mats[4]:
    ncols4 = len(bases[4])
    for j in range(ncols4):
        col = [mats[4][i][j] for i in range(len(C3))]
        if any(x != 0 for x in col):
            im_cols.append(col)
# select an independent set of im-columns via incremental rank
im_basis = []
cur = []
for col in im_cols:
    if rank(cur + [col]) > len(im_basis):
        im_basis.append(col)
        cur.append(col)
    if len(im_basis) == r4:
        break
check("selected %d independent im-columns" % r4, len(im_basis) == r4)

kerT = [list(col) for col in ker]            # each a vector in C_3


def in_ker_coords(v):
    x = solve(kerT, v)
    return x


im_in_ker = [in_ker_coords(c) for c in im_basis]
check("im d_4 lies in ker d_3", all(x is not None for x in im_in_ker))

idxC3 = {t: i for i, t in enumerate(C3)}


def tau_chain(v):
    w = [Fraction(0)] * len(C3)
    for i, t in enumerate(C3):
        if v[i] != 0:
            tt = tuple(tau_(x) for x in t)
            w[idxC3[tt]] += v[i]
    return w


tau_on_ker = [in_ker_coords(tau_chain(kerT[j])) for j in range(kdim)]
check("tau preserves ker d_3", all(x is not None for x in tau_on_ker))

splits = []
for sign in (1, -1):
    # nullspace dim of [tau_on_ker - sign*I | -im_in_ker]
    cols = []
    for j in range(kdim):
        col = list(tau_on_ker[j])
        col[j] -= sign
        cols.append(col)
    for c in im_in_ker:
        cols.append([-x for x in c])
    rows = [[cols[j][i] for j in range(len(cols))] for i in range(kdim)]
    null_dim = (kdim + len(im_in_ker)) - rank(rows)
    splits.append(null_dim - len(im_in_ker))
check("tau-eigenspace split on H_3 = (2, 2)", tuple(splits) == (2, 2))

print()
if failures:
    print("VERDICT: FAIL (%d)" % len(failures))
    raise SystemExit(1)
print("VERDICT: ALL PASS")
