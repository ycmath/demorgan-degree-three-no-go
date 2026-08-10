# No Genuine Degree-Three De Morgan Cohomology of the Dual-Rail Carrier, in Either Characteristic

**Won Chul Yang** (independent researcher) — wcy0969@gmail.com

**Public edition v1.0 (2026).**

---

## Abstract

The four-valued Belnap carrier D4 — the dual-rail lattice with states UNK, FAL, TRU, CON and order-reversing De Morgan involution τ — supports a single genuine essential cohomological obstruction: a degree-one, 2-primary class living in H¹(V₄; 𝔽₂) = 𝔽₂², the *carry*. A persistent question is whether the carrier also supports a *genuine degree-three* De Morgan obstruction. The natural candidate is the τ-antisymmetric 3-cochain c_R^W(x,y,z), a second lattice difference of a τ-anti weight W, which is raw-nonzero (sup-norm 2). We answer the question in the negative, **in both characteristics**, and identify the mechanism. In characteristic 0 we prove a vanishing theorem: H³ = 0 in each of the natural functorial carrier cochain theories — semilattice/Hochschild, group cohomology of ⟨τ⟩ and V₄, the order complex, the deformation core, and their τ-equivariant refinements — and we upgrade the list to a structural statement: the carrier's building blocks are separable algebras (the semilattice part integrally, hence in every characteristic; the group part exactly when the characteristic is not 2), so every theory assembled from them vanishes above degree 0 in characteristic 0. We then pin the exact scope of this universality with an explicit counter-family: a normalized multi-term distributive homology theory, natural and functorial on the carrier, has dim_ℚ H₃(D4; ℚ) = 4 — so the *unrestricted* universality claim is false, and the honest statement is universality over the separable/dual-admissible class. In characteristic 2 — the one place the ambient cohomology is genuinely nonzero (H³(V₄;𝔽₂) is 4-dimensional) — we prove the collapse theorem: an exact four-corner lattice identity forces c_R^W mod 2 = (r+s)·(ρ(x)+ρ(y)), where ρ is the rail parity and (r,s) are the weight coordinates. The cochain is z-independent, is not a V₄ 3-cocycle (explicit witness), defines no class in H³(V₄;𝔽₂), has vanishing full-module integral Bockstein class, and dies in the essential (nondegenerate-arity) quotient. The mechanism is uniform in both characteristics: the apparent cubic is the image of the degree-one carry parity under an arity-padding operator S₁₂, not a degree shift. Hence the carrier's degree-three De Morgan arc is closed: the obstruction is rigid at degree one. All finite identities are machine-verified in Lean 4 (core only) and independently replayed; the two characteristic-0 rank computations are shipped as replayable exact-arithmetic certificates.

---

## 1. Introduction

The four-valued De Morgan carrier D4 is the bounded distributive lattice on the states {UNK, FAL, TRU, CON}, with the order-reversing involution τ (De Morgan complement). It is the semantic substrate of Belnap's four-valued logic [1], and, in this series, of a dual-rail calculus tracking how information is *resolved* (the face R = {TRU, FAL}) versus *unresolved* ({UNK, CON}). Two companion releases of this series establish the carrier's complexity landscape: the exact negation-cost law ν = dec on the resolved face [12], and a cohomological reading of the negation-cost invariant as a character-tower length [13].

The carrier's one genuine essential cohomological obstruction sits in degree **one**: the *carry*, a 2-primary class in

> Ext¹\_{𝔽₂[V₄]}(triv, triv) = H¹(V₄; 𝔽₂) = 𝔽₂²,

where V₄ is the Klein four-group of dual-rail symmetries (§3). A recurring question one degree up is whether the carrier supports a *genuine degree-three* De Morgan obstruction. The natural candidate is the **τ-anti De Morgan 3-cochain**

> c_R^W(x, y, z) = W((x∨y)∨z) − W((x∨y)∧z) − W((x∧y)∨z) + W((x∧y)∧z),

a second lattice difference of a weight W : D4 → ℤ with W(τt) = −W(t). The candidate is **raw-nonzero**: its sup-norm on D4 is 2 (Proposition 2.4). Does it represent a nonzero degree-3 class — a genuine "cubic carrier obstruction" one level above the carry?

**This paper proves it does not — in either characteristic — and identifies the precise mechanism.** The cubic is, uniformly, a *degenerate arity-3 padding* of the degree-1 carry parity: it equals the image S₁₂(ρ) of the rail parity ρ = a + b under the padding operator S₁₂(u)(x,y,z) = u(x) + u(y). "Degree-3-looking" = padded degree-1.

The argument has two halves and a bridge.

- **Characteristic 0 (the vacuum, §4).** H³ vanishes in every natural functorial carrier theory we name, so [c_R^W] = 0 there. We strengthen the named-family check to a *structural separability* statement, and — crucially — we **pin its exact scope** with an explicit counter-family, so the universality claim is honest: it holds over the separable/dual-admissible class, and provably not unrestrictedly.
- **Characteristic 2 (where it could survive, §5).** This is the only place Maschke's theorem fails for V₄, so H³(V₄;𝔽₂) is genuinely nonzero — yet we prove c_R^W *still* collapses, by an exact four-corner lattice identity, to padded degree-1.

The two halves combine into the main theorem (§7): no genuine essential degree-three carrier De Morgan cohomology in any characteristic. This supplies the *degree-axis rigidity* input for the series' program of consolidating the carrier's obstruction theory into a single degree-one class; the separations along other axes (the associator's bidegree, the quantum-error-correction comparison) are treated in forthcoming companion releases and are not claimed here (§8).

**Verification discipline.** Every finite identity on D4 is proved in full in the text, machine-verified in Lean 4 (core only, no `sorry`, no `native_decide`; §9), and independently replayed by standalone scripts. Exactly two facts in the paper are *certificate-level computational premises* — the two characteristic-0 rank computations (Facts 4.10 and 4.13) — and they are stated as such, with exact-rational replay scripts shipped alongside (§9).

---

## 2. The carrier, the involution, and the cubic candidate

### 2.1 Dual-rail coordinates

**Definition 2.1.** The carrier D4 is the set L = (𝔽₂)² in *dual-rail coordinates* u = (u₊, u₋):

> UNK = (0,0), TRU = (1,0), FAL = (0,1), CON = (1,1),

ordered componentwise, with meet ∧ and join ∨ computed railwise (Boolean AND/OR per coordinate). This is the four-element Boolean lattice; UNK is the bottom, CON the top. The **De Morgan involution** is

> τ(u) = u + (1,1)   (bitwise NOT),

which is order-reversing with τ² = id, and swaps UNK ↔ CON and TRU ↔ FAL. The **resolved face** is R = {TRU, FAL}; the **rail parity** is the 𝔽₂-linear functional

> ρ(u) = u₊ + u₋,

which equals 1 exactly on R.

Note that over 𝔽₂ the involution τ is a *translation* of the group (L, +), not a group automorphism; this is why the τ-anti objects below are not automatically objects of ordinary group cohomology, and why the failure in Theorem 5.6 has to be checked rather than defined away.

Throughout, V₄ denotes the Klein four-group. Two distinct roles of V₄ occur and must not be conflated: (i) the *state group* (L, +) ≅ V₄ (used in §5.4, where D4's states are added railwise), and (ii) the *symmetry group* V₄ = ⟨σ, P⟩ of dual-rail symmetries generated by the De Morgan involution σ = τ and the monotone rail swap P(u₊, u₋) = (u₋, u₊) (used in §3). Both are elementary abelian of order 4, which is exactly why the same cohomology H*(V₄; 𝔽₂) appears in both roles.

### 2.2 τ-anti weights

**Definition 2.2.** A **τ-anti weight** is a function W : L → ℤ with W(τt) = −W(t) for all t. Define the two basic weights

> W_A(UNK) = 1, W_A(CON) = −1, W_A(TRU) = W_A(FAL) = 0;
> W_B(TRU) = 1, W_B(FAL) = −1, W_B(UNK) = W_B(CON) = 0.

**Lemma 2.3 (the weight space).** The τ-anti weights form a free ℤ-module of rank 2 with basis {W_A, W_B}: every τ-anti weight is W = r·W_A + s·W_B with r = W(UNK), s = W(TRU), uniquely.

*Proof.* τ pairs the states as {UNK, CON} and {TRU, FAL}. The anti-symmetry W(τt) = −W(t) determines W on each pair by its value on one member: W(CON) = −W(UNK) and W(FAL) = −W(TRU). Hence W is freely determined by (W(UNK), W(TRU)) = (r, s), and this W equals r·W_A + s·W_B by inspection on all four states. ∎

### 2.3 The cubic candidate

**Definition 2.4.** For a τ-anti weight W, the **De Morgan 3-cochain** is

> c_R^W(x, y, z) = W(J ∨ z) − W(J ∧ z) − W(M ∨ z) + W(M ∧ z),   where J = x ∨ y, M = x ∧ y.

This is the alternating four-corner sum of W over the square {J, M} × {∨z, ∧z} — a second lattice (Newton) difference of W, first in the pair (x,y), then in z.

**Proposition 2.5 (raw facts).** On D4:

1. ‖c_R^{W_A}‖\_sup = ‖c_R^{W_B}‖\_sup = 2; the exact value distribution of c_R^{W_A} over the 64 triples is {−2: 4, −1: 16, 0: 24, 1: 16, 2: 4}, and likewise for W_B.
2. c_R^W is τ-antisymmetric: c_R^W(τx, τy, τz) = −c_R^W(x, y, z).
3. c_R^W vanishes on Fix(τ)³ (vacuously: Fix(τ) = ∅ on D4) and sums to zero over L³.
4. The mod-2 support of c_R^{W_A} has exactly 32 of the 64 triples.

*Proof.* (2): τ is order-reversing, so it swaps ∨ ↔ ∧; hence τ maps the four corners {J∨z, J∧z, M∨z, M∧z} of the defining sum for (x,y,z) to the four corners for (τx,τy,τz) with the roles of the outer/inner corners exchanged, i.e. exchanging the two +-signed corners with the two −-signed corners; combined with W(τt) = −W(t) each of the four terms is preserved with a global sign −1. (1), (3), (4) are finite evaluations over the 64 triples; they are corroborated by the shipped replay (§9) and none of them is load-bearing for the sequel — the collapse theorem (Theorem 5.4) re-derives everything that matters. ∎

The candidate is thus **raw-nonzero**. The entire content of the paper is that *raw-nonzero ≠ essential*: in every natural cohomological home, its class is zero or it fails to be a class at all.

---

## 3. The degree-one carry

This section fixes, self-containedly, the degree-one object that the cubic collapses onto.

**Proposition 3.1.** Let V₄ = ⟨σ, P⟩ be the symmetry Klein four-group acting on the carrier, and let 𝔽₂ carry the trivial action. Then

> H¹(V₄; 𝔽₂) = Hom(V₄, 𝔽₂) = 𝔽₂²,

with basis the two characters χ_σ, χ_P dual to the generators (χ_σ(σ) = 1, χ_σ(P) = 0; χ_P(P) = 1, χ_P(σ) = 0).

*Proof.* For a group G acting trivially on 𝔽₂, a 1-cocycle is a map f : G → 𝔽₂ with f(gh) = f(g) + f(h) — a homomorphism — and the coboundaries are zero. So H¹(G;𝔽₂) = Hom(G, 𝔽₂). For G = V₄ = C₂ × C₂, a homomorphism to 𝔽₂ is freely determined by its values on the two generators, giving 𝔽₂². ∎

**Definition 3.2.** The **carry** is the class χ_σ + χ_P ∈ H¹(V₄;𝔽₂): the character which is 1 exactly on the symmetries acting nontrivially on the resolved face R. Its state-level shadow is the rail parity ρ = a + b of Definition 2.1 (the indicator of R). We refer to the pair (carry, ρ) as the carrier's degree-one, 2-primary obstruction datum.

Two independent published anchors of the series meet this object from the complexity side: on the resolved face, the minimal number of NOT-type generators needed by a monotone-decomposition of f equals the decrease complexity, ν(f) = dec(f) [12], and dec itself is the length of a minimal nested χ_σ-character tower [13]. The dec = 0 → 1 boundary is the complexity shadow of the χ_σ-component of the carry. Nothing in this paper depends on more than Proposition 3.1; the anchors are context.

**Remark 3.3 (why degree one matters here).** H¹(V₄;𝔽₂) = 𝔽₂² is nonzero in *every* characteristic-2 setting, while all the characteristic-0 homes of §4 vanish. The question "is there a genuine degree-3 obstruction?" is therefore only interesting in characteristic 2 — which is exactly where §5 works, *against* a nonzero ambient H³.

---

## 4. Characteristic zero: the vacuum, and its exact scope

Fix a field k of characteristic 0 (the reader may take k = ℚ throughout).

### 4.1 The Möbius algebra: the semilattice part is split integrally

**Lemma 4.1 (Möbius algebra; cf. Solomon [4], Greene [5]).** Let (L, ∧) be a finite meet-semilattice and k any commutative ring. The semilattice algebra k[L, ∧] (free k-module on basis {δ_x}\_{x∈L}, product δ_x δ_y = δ\_{x∧y}) is isomorphic, as a k-algebra, to the product ring k^L. The isomorphism is defined over ℤ.

*Proof.* Define φ : k[L, ∧] → k^L on the basis by φ(δ_y) = (𝟙[x ≤ y])\_{x∈L}, extended k-linearly. Then φ(δ_y)·φ(δ_{y′}) = (𝟙[x ≤ y]·𝟙[x ≤ y′])\_x = (𝟙[x ≤ y ∧ y′])\_x = φ(δ_{y∧y′}) (using that x ≤ y and x ≤ y′ iff x ≤ y ∧ y′, the defining property of the meet), so φ is a ring homomorphism. Its matrix in the bases {δ_y} and the coordinate idempotents of k^L is the incidence zeta matrix ζ(x, y) = 𝟙[x ≤ y]; ordering L by any linear extension of ≤, ζ is upper unitriangular, hence invertible over ℤ (with inverse the Möbius matrix μ). So φ is a k-algebra isomorphism for every k, defined over ℤ. ∎

Dually the same holds for (L, ∨). Note the lemma is characteristic-*independent*: the semilattice building block splits over 𝔽₂ as well. The characteristic-sensitivity of the carrier lives entirely in the group part (Lemma 4.4(2)).

### 4.2 Separability and the transfer lemma

**Definition 4.2.** A k-algebra A is **separable** if A is projective as a module over its enveloping algebra A^e = A ⊗_k A^op; equivalently, if there is a *separability idempotent* e = Σ aᵢ ⊗ bᵢ ∈ A^e with Σ aᵢbᵢ = 1 and (a ⊗ 1)e = (1 ⊗ a)e for all a ∈ A [6].

**Lemma 4.3 (separability kills Hochschild cohomology).** If A is separable then HH^n(A, M) = 0 for every A-bimodule M and every n > 0; the same conclusion holds for every cohomology theory of A computed as Ext^n_{A^e}(A, −).

*Proof.* HH^n(A, M) = Ext^n_{A^e}(A, M) [7, IX]. If A is A^e-projective, the functor Ext^{>0}\_{A^e}(A, −) vanishes identically. ∎

**Lemma 4.4 (the carrier's building blocks).**

1. k[L, ∧] and k[L, ∨] are separable for every field k (indeed, k^L is separable with idempotent e = Σ_x δ_x ⊗ δ_x, and Lemma 4.1 transports it).
2. k[G] for G ∈ {⟨τ⟩ ≅ C₂, V₄} is separable **iff** char k ∤ |G|, i.e. iff char k ≠ 2; the idempotent is e = |G|⁻¹ Σ_g g ⊗ g⁻¹ (Maschke).
3. Separability is preserved by finite tensor products: e_{A⊗B} = e_A ⊗ e_B.

*Proof.* (1) For A = k^L with coordinate idempotents {δ_x}: Σ δ_x δ_x = Σ δ_x = 1, and (δ_y ⊗ 1)e = δ_y ⊗ δ_y = (1 ⊗ δ_y)e. Transport along the ℤ-defined isomorphism of Lemma 4.1. (2) If |G| is invertible, e as displayed satisfies the two conditions by direct computation. Conversely if char k = 2 then k[C₂] ≅ k[t]/(t²) is a local non-semisimple algebra, which is not separable (a separable algebra over a field is semisimple [6]). V₄ contains C₂ as a retract, and separability passes to retracts. (3) Direct check. ∎

### 4.3 Theorem NG: the named-family vanishing

**Theorem 4.5 (NG).** Let k have characteristic 0. Then H³ = 0 — and in particular the class of c_R^W is zero or undefined-as-a-class-of-nothing — in each of the following natural functorial carrier cochain theories on D4:

- **(B) semilattice / Hochschild.** HH^n(k[L,∧], M) = 0 for all n > 0 and all bimodules M; likewise for (L,∨).
- **(G) group cohomology.** H^n(⟨τ⟩; k) = H^n(V₄; k) = 0 for all n > 0.
- **(O) order complex.** The order complex Δ(D4) is contractible; H̃^n(Δ(D4); k) = 0 for all n. Moreover Δ(D4) has f-vector (4, 5, 2, 0) — there are no 3-simplices at all.
- **(Op) deformation core.** HH²(A₀, A₀) = HH³(A₀, A₀) = 0 for the carrier's char-0 core algebra A₀ (any composite of the §4.2 blocks), so the Gerstenhaber deformation complex [8, 9] is rigid.
- **(τ) equivariant refinements.** The ⟨τ⟩-equivariant refinement of each theory above also has H³ = 0.

*Proof.* (B): Lemmas 4.4(1) + 4.3. (G): Lemma 4.4(2) + 4.3, noting H^n(G;k) = Ext^n_{k[G]}(k,k) and semisimplicity of k[G] in characteristic 0. (O): Δ(D4) is the simplicial complex of chains of the poset D4. Since D4 has a bottom element 0̂ = UNK comparable to everything, every chain extends by 0̂; hence Δ(D4) is a cone with apex 0̂, and cones are contractible, so all reduced cohomology vanishes. The f-vector is a direct count: 4 vertices; 5 comparable pairs (UNK<TRU, UNK<FAL, UNK<CON, TRU<CON, FAL<CON); 2 two-chains (UNK<TRU<CON, UNK<FAL<CON); no 3-chains (the longest chains have length 2). In particular C³ = 0, so H³ = 0 holds even before contractibility. (Op): Lemma 4.4(3) then 4.3. (τ): |⟨τ⟩| = 2 is invertible in k, so the averaging idempotent (1 + τ*)/2 splits each cochain complex into ±-isotypic summands and the equivariant (Borel) theory collapses onto the invariant summand of the underlying theory, with no higher group-cohomology contribution (H^{>0}(C₂;k) = 0 by (G)); a summand of zero is zero. ∎

**Remark 4.6 (the (Op) caveat: a trivial rigidity).** The vanishing at (Op) is characteristic-0 *semisimplicity* — a trivial rigidity. It is **not** evidence of "no obstruction": the genuine carry lives exactly where Maschke fails (characteristic 2, §3, §5). We cite (Op) only for the characteristic-0 vacuum.

**Remark 4.7 (scope of Theorem NG, verbatim).** NG is a no-go for the *named* natural functorial families (B), (G), (O), (Op) and their τ-equivariant refinements, proved on L = D4. It is not a no-go for artificial two-term complexes built to make c_R^W a coboundary by fiat, and the *exhaustivity* of the named list among "all natural functorial theories" is precisely the universality question addressed — and bounded — in §4.5.

### 4.4 The vanishing is structural

**Corollary 4.8 (coefficient-free closure).** In characteristic 0, every cohomology theory of every finite composite (tensor products, retracts) of the carrier's building blocks {semilattice algebras, k[⟨τ⟩], k[V₄]} that is computed as Ext over the enveloping algebra vanishes in all degrees > 0, for all coefficient bimodules. The sole characteristic-sensitive building block is the group algebra of the symmetry group — the home of the carry.

*Proof.* Lemma 4.4 gives separability of each block in characteristic 0 and closure under ⊗; retracts of separable algebras are separable [6]. Lemma 4.3 kills all positive-degree Ext. The characteristic-sensitivity statement is Lemma 4.4(1) (integral splitting of the semilattice part) versus 4.4(2) (k[V₄] separable iff char ≠ 2). ∎

### 4.5 The exact scope: an explicit counter-family

It is tempting to promote Theorem NG to: *"H³ = 0 in **every** natural functorial characteristic-0 carrier cochain theory."* One natural route is a factorization claim: every such theory factors through the carrier's Priestley/Birkhoff dual [10]. The dual side is favorable:

**Proposition 4.9 (dual reduction).** The Priestley/Birkhoff dual of D4 is the two-point antichain J(D4) = {TRU, FAL} of join-irreducibles, with τ acting as the swap. Any characteristic-0 theory that factors naturally through the dual groupoid [{TRU,FAL}/C₂] has H^{>0} = 0.

*Proof.* The join-irreducibles of D4 are TRU and FAL (CON = TRU ∨ FAL is not irreducible; UNK is the bottom), mutually incomparable, and τ swaps them. The category algebra of the action groupoid of C₂ on a free 2-point set is Morita-equivalent to k (the groupoid is connected with trivial automorphism groups — it is equivalent to a point), and Morita-invariant theories of k vanish above degree 0; alternatively, its algebra is M₂(k), which is separable, and Lemma 4.3 applies. ∎

**But the factorization premise is false without hypotheses — and hence the unrestricted universality claim is false.** The witness is a multi-term distributive homology in the sense of Przytycki [2, 3].

**Construction (normalized multi-term distributive homology of D4).** Encode D4 = {0,1,2,3} by bitmask (UNK=0, TRU=1, FAL=2, CON=3). Consider the four binary operations

> p₁(a,b) = a,  ∨,  ∧,  p₂(a,b) = b,

each of which is right-distributive over each of the others on a distributive lattice: for all ⋆, ∘ in the list, (a ⋆ b) ∘ c = (a ∘ c) ⋆ (b ∘ c). *Proof of this:* for ⋆ = p₁ (resp. p₂) both sides equal a ∘ c (resp. b ∘ c); for ∘ = p₁ both sides equal a ⋆ b; for ∘ = p₂ the left side is c and the right side is c ⋆ c = c, by idempotence of every operation in the list; and for ⋆, ∘ ∈ {∨, ∧} the four cases are (a∨b)∨c = (a∨c)∨(b∨c) and (a∧b)∧c = (a∧c)∧(b∧c) (associativity + commutativity + idempotence) together with (a∨b)∧c = (a∧c)∨(b∧c) and (a∧b)∨c = (a∨c)∧(b∨c) (distributivity). The **normalized chain group** C_n is the free ℚ-module on tuples (t₀, …, t_n) ∈ D4^{n+1} with tᵢ ≠ tᵢ₊₁ for all i. For an operation ⋆ define the i-th face (i ≥ 1)

> d_i^⋆(t₀, …, t_n) = (t₀ ⋆ tᵢ, …, tᵢ₋₁ ⋆ tᵢ, tᵢ₊₁, …, t_n),

and d_0(t₀, …, t_n) = (t₁, …, t_n); tuples that become degenerate (an adjacent equal pair) are set to 0. Fix the coefficient vector (1, −1, −1, 0) on (p₁, ∨, ∧, p₂) and set

> d = Σ_{i} (−1)^i ( d_i^{p₁} − d_i^{∨} − d_i^{∧} ).

Then d² = 0: this is the multi-term distributive-homology boundary of Przytycki [2] for a family of mutually right-distributive operations, whose squared-boundary cancellation uses exactly the mutual distributivity verified above; it is also re-verified exactly, matrix-by-matrix, in the shipped replay. Write H_n^N(D4; ℚ) for its homology and H^n_N for the dual cohomology.

**Fact 4.10 (certificate: the rank table).** Over exact rational arithmetic, the normalized chain groups have dimensions (dim C₀, …, dim C₄)-relevant ranks: dim C₃ = 108, rank d₃ = 25, rank d₄ = 79, so

> dim_ℚ H₃^N(D4; ℚ) = 108 − 25 − 79 = **4**,   with τ-eigenspace split (+, −) = (2, 2);

dually dim_ℚ H^3_N = 4 with τ-anti part of dimension 2. *(Certificate-level computational premise: exact sympy/ℚ rank computation, d² = 0 asserted matrix-wise, replayable by the shipped script; §9.)*

**Theorem 4.11 (the counter-family refutes unrestricted universality).** The theory H^•_N is natural and functorial on the carrier — a lattice homomorphism preserves ∨, ∧, p₁, p₂ and hence induces a chain map; τ induces a chain automorphism (it fixes the p₁-term and swaps the ∨- and ∧-terms, which carry equal coefficients) — and it is not an artificial two-term complex: its differential is the standard multi-term distributive boundary. Yet H^3_N(D4; ℚ) = 4 ≠ 0. Consequently:

1. H^•_N does not factor through the Priestley dual (else Proposition 4.9 would force H^{>0} = 0);
2. the unrestricted claim "every natural functorial characteristic-0 carrier theory has H³ = 0" is **false**;
3. Theorem NG's universality is exactly over the **separable/dual-admissible class**: the named families and all composites of separable building blocks (Corollary 4.8) lie in it; H^•_N does not.

*Proof.* Naturality: a lattice homomorphism f commutes with each of the four operations (with p₁, p₂ trivially), hence with each face map d_i^⋆, hence with d; degeneracy is preserved (f of an adjacent-equal pair is adjacent-equal); so f induces a chain map, and homology is functorial. τ-equivariance: τ is a lattice *anti*-homomorphism with τ∨ = ∧τ railwise; in d the ∨-face and ∧-face terms have the same coefficient (−1), so conjugation by τ permutes them and fixes d; the p₁-term is fixed since τ(a) ⋆ τ(b) at p₁ is τ(p₁(a,b)). Non-vanishing: Fact 4.10. Then (1) is Proposition 4.9 contrapositive, (2) is witnessed by H^•_N, and (3) restates Corollary 4.8 plus (2). ∎

**Remark 4.12 (honest scope, certificate-relative).** Theorem NG plus Corollary 4.8 delimit a *sufficient* admissible class (separable/dual-admissible); Theorem 4.11 shows the class cannot be enlarged to "all natural functorial theories". We flag, additionally, that the *maximal* admissible class is underdetermined by naturality and functoriality alone: whether certain degenerate decorations of an admissible theory (e.g. mapping-cone paddings of identity functors) are "admissible" is a convention, not a theorem, and our scope statements are relative to the stated class. A restricted universality theorem with a sharp admissibility hypothesis remains open (§8).

**Remark 4.13.** The counter-family exhibits a nonzero ambient H³ of a *different* cochain theory on the same lattice. It is **not** a claim that c_R^W itself is essential — c_R^W's class remains zero/absent in every home considered (and §5 kills it in characteristic 2 directly). "Some natural theory on D4 has nonzero H³" and "the carrier has a genuine degree-3 obstruction" are different statements; the counter-family establishes only the former.

---

## 5. Characteristic two: where it could survive — and the collapse

### 5.1 The ambient cohomology is genuinely nonzero

**Proposition 5.1.** H*(V₄; 𝔽₂) = 𝔽₂[a, b] with deg a = deg b = 1 (polynomial on two degree-one generators); in particular H³(V₄;𝔽₂) = ⟨a³, a²b, ab², b³⟩ is 4-dimensional, and H¹(V₄;𝔽₂) = 𝔽₂² houses the carry (Proposition 3.1).

*Proof.* Standard: for an elementary abelian 2-group of rank n, H*((C₂)ⁿ; 𝔽₂) is polynomial on n degree-1 generators [11, Ch. II–III]; take n = 2. ∎

**Corollary 5.2 (the question is forced into characteristic 2).** By §4, a genuine degree-3 carrier obstruction could only exist in characteristic 2 — the unique characteristic where the ambient H³ is nonzero. This is what makes the collapse below non-trivial: the cubic must be shown to die *despite* a nonzero ambient H³.

### 5.2 The four-corner identity

**Lemma 5.3 (four-corner identity).** In (L, +) = (𝔽₂)², for all x, y, z ∈ L, with J = x∨y and M = x∧y:

> (J∨z) + (J∧z) + (M∨z) + (M∧z) = x + y.

*Proof.* Railwise, for bits p, r ∈ 𝔽₂: p∨r = p + r + pr and p∧r = pr, so (p∨r) + (p∧r) = p + r. Applying this per rail to the pairs (J, z) and (M, z):

> (J∨z) + (J∧z) + (M∨z) + (M∧z) = (J + z) + (M + z) = J + M.

Again railwise, J + M = (x∨y) + (x∧y) = x + y. ∎

### 5.3 The collapse theorem

**Theorem 5.4 (collapse).** Let W = r·W_A + s·W_B be any τ-anti weight (Lemma 2.3). Then, identically on D4³,

> c_R^W mod 2 = (r + s) · (ρ(x) + ρ(y)).

In particular c_R^W mod 2 is **independent of z**, and it equals the arity-padding S₁₂(ρ̄) of the rail parity, scaled by (r+s) mod 2, where S₁₂(u)(x,y,z) := u(x) + u(y).

*Proof.* Write W̄ = W mod 2 : L → 𝔽₂. From the definitions, W̄_A = 1 + ρ (it is 1 exactly on {UNK, CON}, the complement of R) and W̄_B = ρ (it is 1 exactly on R = {TRU, FAL}). Hence

> W̄ = r̄(1 + ρ) + s̄ρ = r̄ + (r̄ + s̄)ρ,

an *affine* function of the 𝔽₂-**linear** functional ρ. Mod 2 the signs in Definition 2.4 disappear, so with a₁ = J∨z, a₂ = J∧z, a₃ = M∨z, a₄ = M∧z:

> c_R^W mod 2 = W̄(a₁) + W̄(a₂) + W̄(a₃) + W̄(a₄) = 4r̄ + (r̄+s̄)(ρ(a₁)+ρ(a₂)+ρ(a₃)+ρ(a₄)).

The constant term vanishes (4r̄ = 0 in 𝔽₂), and by linearity of ρ and the four-corner identity (Lemma 5.3),

> ρ(a₁)+ρ(a₂)+ρ(a₃)+ρ(a₄) = ρ(a₁+a₂+a₃+a₄) = ρ(x+y) = ρ(x) + ρ(y). ∎

**Corollary 5.5 (degenerate arity).** c_R^W mod 2 lies in the image of S₁₂ : Map(L, 𝔽₂) → Map(L³, 𝔽₂); it depends on (x, y) only, and only through the degree-one datum ρ.

### 5.4 It is not a cocycle, and defines no cubic class

Identify L with the state group V₄ = (𝔽₂)² under railwise addition (§2.1, role (i)), and let η := c_R^W mod 2 for any W with r + s odd — i.e. η(x,y,z) = ρ(x) + ρ(y) — regarded as an inhomogeneous 3-cochain on the group V₄ with trivial 𝔽₂-coefficients. The bar differential is

> (δη)(g₁,g₂,g₃,g₄) = η(g₂,g₃,g₄) + η(g₁+g₂,g₃,g₄) + η(g₁,g₂+g₃,g₄) + η(g₁,g₂,g₃+g₄) + η(g₁,g₂,g₃).

**Theorem 5.6 (not a 3-cocycle).** δη ≠ 0; an explicit witness is

> (δη)(TRU, TRU, CON, TRU) = 1.

Consequently η is not a 3-cocycle of the state group, and defines **no** class in H³(V₄;𝔽₂) — in particular it is none of the cubic classes a³, a²b, ab², b³ of Proposition 5.1.

*Proof.* Evaluate the five terms at (g₁,g₂,g₃,g₄) = (TRU, TRU, CON, TRU), using ρ(TRU) = ρ(FAL) = 1, ρ(UNK) = ρ(CON) = 0 and the sums TRU + TRU = UNK, TRU + CON = FAL, CON + TRU = FAL:

> η(TRU, CON, TRU) = ρ(TRU) + ρ(CON) = 1;
> η(UNK, CON, TRU) = 0 + 0 = 0;
> η(TRU, FAL, TRU) = 1 + 1 = 0;
> η(TRU, TRU, FAL) = 1 + 1 = 0;
> η(TRU, TRU, CON) = 1 + 1 = 0.

The sum is 1. (The full δη table has 36 nonzero entries on identity-free 4-tuples; the shipped replay enumerates them.) ∎

### 5.5 The integral Bockstein class vanishes

At the integral level c := c_R^W satisfies τc = −c (Proposition 2.5(2) at the cochain level), so relative to the coefficient sequence 0 → ℤ →×2→ ℤ → 𝔽₂ → 0 there is a visible cochain-level Bockstein representative (τc − c)/2 = −c. The correct home for the resulting *class* is the τ-equivariant cohomology of the full lattice module, and there it dies:

**Theorem 5.7 (no full-module Bockstein class).** The diagonal τ-action on L³ is free (τ is a fixed-point-free involution on L, hence on L³), so ℤ[L³] ≅ ℤ[C₂]³² as a C₂-module — free. Hence H^p(C₂; ℤ[L³]) = 0 for all p > 0, and the Bockstein image of [η] in the full-module theory is 0.

*Proof.* τu = u + (1,1) ≠ u for every u, so no point of L³ is fixed and the 64 points fall into 32 free orbits; choosing one point per orbit exhibits ℤ[L³] as free of rank 32 over ℤ[C₂]. Cohomology of a group with coefficients in a free (hence induced) module vanishes in positive degrees (Shapiro's lemma: H^p(C₂; ℤ[C₂] ⊗ M) = H^p(1; M) = 0 for p > 0 [7, Ch. XII]). Any Bockstein class of the full-module theory lives in such a group, hence is 0. ∎

### 5.6 The essential quotient kills it

**Definition 5.8.** Let C³\_set = Map(L³, 𝔽₂) and let the **degenerate submodule** D³ ⊂ C³\_set be the span of all cochains that factor through a proper coordinate projection L³ → L^S, S ⊊ {1,2,3}. The **essential quotient** is C³\_ess = C³\_set / D³: it retains exactly the genuinely 3-variable content of a cochain.

**Corollary 5.9.** η = c_R^W mod 2 factors through (x, y) (Theorem 5.4), so η ∈ D³ and [η] = 0 in C³\_ess. The candidate has no genuinely ternary content at all.

---

## 6. The mechanism: arity padding, not a degree shift

The operator realizing the cubic from the degree-one datum is

> S₁₂ : Map(L, 𝔽₂) → Map(L³, 𝔽₂),   S₁₂(u)(x, y, z) = u(x) + u(y),

and Theorem 5.4 says c_R^W mod 2 = (r+s)·S₁₂(ρ). Three standard degree-raising constructions are thereby *excluded* as explanations of the cubic, each for a proven reason:

1. **Not a cup product.** A cup product of the degree-1 classes of H¹(V₄;𝔽₂) is a 3-*cocycle* representing an element of ⟨a³, a²b, ab², b³⟩; η is not a cocycle at all (Theorem 5.6).
2. **Not Tate/periodicity.** Likewise any periodicity image of a class is a class; η defines no class.
3. **Not a Bockstein.** The full-module integral Bockstein class vanishes (Theorem 5.7).

What remains is exactly what S₁₂ is: a *degenerate arity-3 padding* of degree-one data (Corollary 5.9). "Degree-3-looking" = padded degree-1.

---

## 7. Main theorem

**Theorem 7.1 (no genuine degree-three De Morgan cohomology).** On the dual-rail carrier D4, there is no genuine essential degree-3 De Morgan obstruction, in any characteristic. Precisely: for every τ-anti weight W, the cubic candidate c_R^W

1. has zero class in every characteristic-0 theory of the separable/dual-admissible class — the named families (B), (G), (O), (Op) and their τ-equivariant refinements included (Theorem 4.5, Corollary 4.8) — with the admissible-class boundary exhibited sharply by the distributive-homology counter-family (Theorem 4.11);
2. in characteristic 2, where the ambient H³(V₄;𝔽₂) ≠ 0, collapses identically to (r+s)·S₁₂(ρ): z-independent, not a 3-cocycle (explicit witness), defining no class in H³(V₄;𝔽₂), with vanishing full-module Bockstein class, and vanishing in the essential quotient (Theorems 5.4–5.7, Corollary 5.9).

In both characteristics the realizing mechanism is the arity-padding S₁₂ of the degree-one carry parity ρ — not a cup product, not periodicity, not a Bockstein (§6). The carrier's degree-3 De Morgan arc is closed: **the obstruction is rigid at degree one.**

*Proof.* Part 1 is §4; part 2 is §5; the mechanism statements are §6, each reduced to a proved theorem. ∎

---

## 8. Scope, and what is not claimed

- **D4 only.** Every computation and theorem above is on the four-element carrier (or its two symmetry/state groups V₄). Nothing is claimed for larger De Morgan lattices; whether degree-one rigidity persists at Bₙ, n ≥ 3, is **open**, and a higher essential class there would be *consistent* with Theorem 7.1 (which closes D4's cubic candidate, not all cubics everywhere).
- **Only this cubic.** The theorem closes the carrier's δ²-type De Morgan candidate c_R^W. Other cubic functionals on other complexes are different objects and are not addressed.
- **The admissible-class boundary is part of the theorem.** The characteristic-0 universality is exactly over the separable/dual-admissible class (Theorem 4.11(3)); the unrestricted universality is *refuted*, not merely unproved (Theorem 4.11(2)); and the maximal admissible class is underdetermined by naturality alone (Remark 4.12). A restricted universality theorem with a sharp admissibility hypothesis is an open problem we consider worthwhile.
- **Degree versus level.** The negation-cost filtration dec(f) of the companion releases [12, 13] is a *level* (complexity) parameter, not a cohomological degree; nothing here shifts the carry out of degree 1. The separation of the carry from the associator (a bidegree statement) and its comparison with quantum-error-correction Bockstein towers are the subjects of forthcoming companion releases in this series and are **not claimed here**.
- **Size ≠ obstruction.** The exact clone counts of the series (e.g. the ternary selector count 103,275 on the odd flat carrier [14]) are cardinalities of a different V₄-governed object and play no role in the present cohomological statements.

---

## 9. Mechanization and verification

**Lean (structural spine).** All finite identities on D4 are machine-verified in the Lean 4 library `Demorgan3` (core only; no mathlib, no `native_decide`, no `sorry`, no `axiom` declarations; 24 theorems, 22 of them axiom-free and 2 with kernel axiom profile exactly `[propext, Quot.sound]`; no classical choice anywhere):

- `Basic.weight_space` — the τ-anti weight space is spanned by (W_A, W_B) (Lemma 2.3), plus τ-involutivity, fixed-point-freeness, ρ-additivity, and τ-antisymmetry of the basis weights;
- `HomV4.hom_classify` / `HomV4.linForm_isHom` — every additive map (L,+) → 𝔽₂ is the linear form of its values on the two rail generators: H¹(V₄;𝔽₂) = 𝔽₂² (Proposition 3.1);
- `Collapse.four_corner` — the four-corner identity, all 64 triples (Lemma 5.3);
- `Collapse.collapse`, `Collapse.Wbar_is_reduction`, `Collapse.z_independent` — the Boolean collapse cWbar = (r xor s) ∧ (ρx xor ρy) for all four parity pairs and all 64 triples, its agreement with the integer mod-2 reduction, and z-independence (Theorem 5.4, Corollary 5.5);
- `Collapse.collapse_parity` — the integer-level collapse for an *arbitrary* τ-anti weight: 2 ∣ (c_R^W(x,y,z) − (W(UNK)+W(TRU))·(ρx+ρy)) (Theorem 5.4);
- `NotCocycle.delta_eta_witness`, `NotCocycle.eta_not_cocycle` — the non-cocycle witness (δη)(TRU,TRU,CON,TRU) = 1 and δη ≠ 0 (Theorem 5.6);
- `NotCocycle.tau_diag_free` — freeness of the diagonal τ-action on L³ (Theorem 5.7's combinatorial premise);
- `OrderComplex.*` — the f-vector (4,5,2,0), the absence of 3-chains, the Euler characteristic, and the cone premise (UNK is comparable to everything) (Theorem 4.5(O)).

See `lean/demorgan3/` and the frozen per-theorem axiom audit `axcheck.log`.

**Replay (independent).** Two standalone exact-arithmetic scripts (Python, stdlib only) re-verify, with frozen outputs shipped alongside:

- `replay_char2_collapse.py` — the raw facts of Proposition 2.5 (value distribution, sup-norm, mod-2 support, τ-antisymmetry, zero sum), the four-corner identity, the collapse for seven integer coordinate pairs, z-independence, the full δη table (128 nonzero entries, 36 of them identity-free; witness re-derived), and the 32 free τ-orbits of L³. ALL PASS.
- `replay_char0_certificates.py` — the two certificate facts: the order-complex ℚ-cohomology (f-vector, χ = 1, H⁰,H¹,H² = 1,0,0, C³ = 0) and the distributive-homology certificate (mutual right-distributivity, d² = 0 matrix-wise, rank table 108/25/79, dim H₃ = 4, τ-split (2,2)) — computed here over `fractions.Fraction`, independently of the programme-internal computation it reproduces. ALL PASS.

The characteristic-0 rank computation is a *certificate-level premise* of Fact 4.10 only; every other statement in the paper is proved in the text, and the finite identities are additionally kernel-checked in Lean.

---

## 10. Authorship and provenance

The mathematics is the author's, developed inside the author's carrier programme. AI assistance (Anthropic Claude family) was used for the machine-verification layer — the Lean 4 development, the replay scripts, and manuscript preparation — with the Lean 4 kernel as the acceptance gate for that layer. This is distinct from the two earlier AI-collaborative releases of the series, which are labelled as such. Corrections are invited.

---

## References

[1] N. D. Belnap, *A useful four-valued logic*, in: J. M. Dunn, G. Epstein (eds.), Modern Uses of Multiple-Valued Logic, Reidel, 1977, pp. 5–37. doi:10.1007/978-94-010-1161-7_2

[2] J. H. Przytycki, *Distributivity versus associativity in the homology theory of algebraic structures*, Demonstratio Math. 44 (2011), no. 4, 823–869. doi:10.1515/dema-2013-0337, arXiv:1109.4850

[3] J. H. Przytycki, K. Putyra, *Homology of distributive lattices*, J. Homotopy Relat. Struct. 8 (2013), 35–65. doi:10.1007/s40062-012-0012-5

[4] L. Solomon, *The Burnside algebra of a finite group*, J. Combin. Theory 2 (1967), 603–615. doi:10.1016/S0021-9800(67)80064-4

[5] C. Greene, *On the Möbius algebra of a partially ordered set*, Adv. Math. 10 (1973), 177–187. doi:10.1016/0001-8708(73)90106-0

[6] F. DeMeyer, E. Ingraham, *Separable Algebras over Commutative Rings*, Lecture Notes in Math. 181, Springer, 1971. doi:10.1007/BFb0061226

[7] H. Cartan, S. Eilenberg, *Homological Algebra*, Princeton Univ. Press, 1956.

[8] M. Gerstenhaber, *The cohomology structure of an associative ring*, Ann. of Math. 78 (1963), 267–288. doi:10.2307/1970343

[9] M. Gerstenhaber, *On the deformation of rings and algebras*, Ann. of Math. 79 (1964), 59–103. doi:10.2307/1970484

[10] H. A. Priestley, *Representation of distributive lattices by means of ordered Stone spaces*, Bull. London Math. Soc. 2 (1970), 186–190. doi:10.1112/blms/2.2.186

[11] A. Adem, R. J. Milgram, *Cohomology of Finite Groups*, 2nd ed., Grundlehren Math. Wiss. 309, Springer, 2004. doi:10.1007/978-3-662-06280-7

[12] W. C. Yang, *The Price of NOT on D4*, 2026. GitHub: https://github.com/ycmath/price-of-not-on-d4, doi:10.5281/zenodo.21800033

[13] W. C. Yang, *The Cohomological Price of NOT*, 2026. GitHub: https://github.com/ycmath/cohomological-price-of-not, doi:10.5281/zenodo.21775055

[14] W. C. Yang, *Exact Selector Counting on the Odd Flat Carrier*, 2026. GitHub: https://github.com/ycmath/odd-flat-selector-count, doi:10.5281/zenodo.21868044

[15] W. C. Yang, *Finite-Energy Epistemic Logic with Conservative Pointed Extension and Negation Geometry*, 2026. GitHub: https://github.com/ycmath/finite-energy-epistemic-logic, doi:10.5281/zenodo.21800031

Series hub: https://github.com/ycmath/dual-rail-carrier-program
