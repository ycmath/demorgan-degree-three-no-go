# No Genuine Degree-Three De Morgan Cohomology of the Dual-Rail Carrier

**Won Chul Yang** — public edition v1.0 (2026)

Part of the [Dual-Rail Carrier Program](https://github.com/ycmath/dual-rail-carrier-program) — the series hub (map, citation DAG, DOIs, release standards).

The four-valued dual-rail carrier D4 (states UNK, FAL, TRU, CON; De Morgan
involution τ) has **no genuine essential degree-three De Morgan
obstruction, in either characteristic**. The natural cubic candidate — the
τ-anti second lattice difference c_R^W, which is raw-nonzero (sup-norm 2)
— is in every home a degenerate arity-3 padding S₁₂(ρ) of the degree-one
carry parity ρ:

- **Characteristic 0** is a structural vacuum: the carrier's building
  blocks are separable algebras (the semilattice part integrally, via
  Möbius/zeta unitriangularity; the group part iff char ≠ 2), so H³ = 0
  in the semilattice/Hochschild, group-cohomology, order-complex,
  deformation-core, and τ-equivariant families. The scope is pinned
  **sharply**: an explicit natural functorial counter-family (normalized
  multi-term distributive homology, operations (p₁, ∨, ∧, p₂) with
  coefficients (1,−1,−1,0)) has dim_ℚ H₃(D4; ℚ) = 4, so the *unrestricted*
  universality claim is refuted and the honest statement is universality
  over the separable/dual-admissible class.
- **Characteristic 2** — the only place the ambient H³(V₄;𝔽₂) ≠ 0 — the
  exact four-corner lattice identity forces the collapse
  **c_R^W mod 2 = (r+s)·(ρ(x)+ρ(y))**: z-independent, not a V₄ 3-cocycle
  (explicit witness (δη)(TRU,TRU,CON,TRU) = 1), no class in H³(V₄;𝔽₂),
  vanishing full-module integral Bockstein class, zero in the essential
  (nondegenerate-arity) quotient.

Conclusion: the carrier's obstruction is **rigid at degree one**.

## Contents

```
paper/            the paper (md + LaTeX + PDF, 13 pp, complete proofs)
lean/demorgan3/   Lean 4 development (core only; no mathlib):
    Basic.lean        D4, tau, rho, the weight space (W_A, W_B), c_R^W
    Collapse.lean     four-corner identity, Boolean + integer collapse,
                      z-independence
    NotCocycle.lean   the delta-eta witness, eta not a 3-cocycle,
                      free diagonal tau-action on L^3
    OrderComplex.lean f-vector (4,5,2,0), no 3-chains, Euler char, cone
    HomV4.lean        Hom(V4, F2) = F2^2 (the carry's home)
    axcheck.log       frozen per-theorem #print axioms audit
verification/     independent replays (Python, stdlib only) + frozen outputs:
    replay_char2_collapse.py       char-2 layer: raw facts, four-corner,
                                   collapse, delta-eta table, free orbits
    replay_char0_certificates.py   char-0 certificates: order-complex
                                   Q-cohomology; distributive-homology
                                   ranks 108/25/79, dim H_3 = 4,
                                   tau-split (2,2) — exact Fractions
```

## Verification status

- **Lean**: core Lean 4 only (toolchain pinned v4.31.0), no
  `native_decide`, no `sorry`, no `axiom` declarations. 24 theorems:
  22 axiom-free, 2 with kernel axiom profile exactly
  `[propext, Quot.sound]`; no classical choice anywhere. See
  `lean/demorgan3/axcheck.log`.
- **Replays**: both scripts ALL PASS (frozen `*_RESULTS.out`). The
  distributive-homology certificate is recomputed here over
  `fractions.Fraction` — independent of the programme-internal
  computation it reproduces.
- Exactly one statement in the paper rests on a certificate-level
  computational premise (the characteristic-0 rank table, Fact 4.10);
  everything else is proved in the text, with the finite identities
  additionally kernel-checked.

To rebuild the Lean layer:

```
cd lean/demorgan3
lake build
```

## Scope

D4 only; only the cubic candidate c_R^W. Larger De Morgan lattices
(n ≥ 3) are open. The characteristic-0 universality is exactly over the
separable/dual-admissible class (the unrestricted claim is refuted by the
shipped counter-family). The bidegree separation of the associator and
the quantum-error-correction comparison are subjects of forthcoming
companion releases, not claimed here.

## Companion releases

- *The Price of NOT on D4*:
  https://github.com/ycmath/price-of-not-on-d4
  (DOI: 10.5281/zenodo.21800033) — the exact negation-cost law ν = dec.
- *The Cohomological Price of NOT*:
  https://github.com/ycmath/cohomological-price-of-not
  (DOI: 10.5281/zenodo.21775055) — dec as χ_σ-tower length.
- *The Resolved-Face Crown of the Dual-Rail Carrier*:
  https://github.com/ycmath/dual-rail-crown
  (DOI: 10.5281/zenodo.21866741).
- *Exact Selector Counting on the Odd Flat Carrier*:
  https://github.com/ycmath/odd-flat-selector-count
  (DOI: 10.5281/zenodo.21868044).

## Authorship & provenance

Won Chul Yang, independent researcher. The mathematics is the author's,
developed inside the author's carrier programme. AI assistance (Anthropic
Claude family) was used for the machine-verification layer — the Lean 4
development, the replay scripts, and manuscript preparation — with the
Lean 4 kernel as the acceptance gate for that layer. Corrections are
invited.

## License

- Lean artifacts and scripts: Apache-2.0 (`LICENSE`)
- Text (paper, README): CC BY 4.0 (`LICENSE-text`)
