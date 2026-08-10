/-
  Demorgan3.NotCocycle — eta(x,y,z) = rho x + rho y is not a 3-cocycle of the
  state group (L,+) with trivial F2 coefficients: the bar differential has an
  explicit nonzero value, delta eta (TRU,TRU,CON,TRU) = 1.

  Also: the diagonal tau-action on L^3 is free (fixed-point-free).

  Core Lean 4 only.
-/
import Demorgan3.Basic

namespace Demorgan3

/-- The mod-2 cubic residue for odd r+s: eta(x,y,z) = rho x xor rho y. -/
def eta (x y _z : L) : Bool := xor (rho x) (rho y)

/-- The inhomogeneous bar differential of a 3-cochain on the state group (L,+),
    trivial F2 coefficients. -/
def deltaBar (f : L → L → L → Bool) (g1 g2 g3 g4 : L) : Bool :=
  xor (f g2 g3 g4)
    (xor (f (add g1 g2) g3 g4)
      (xor (f g1 (add g2 g3) g4)
        (xor (f g1 g2 (add g3 g4)) (f g1 g2 g3))))

/-- Theorem 5.6 witness: (delta eta)(TRU,TRU,CON,TRU) = 1. -/
theorem delta_eta_witness : deltaBar eta TRU TRU CON TRU = true := by decide

/-- Hence delta eta is not identically zero: eta is not a 3-cocycle. -/
theorem eta_not_cocycle : ¬ (∀ g1 g2 g3 g4, deltaBar eta g1 g2 g3 g4 = false) := by
  intro h
  have := h TRU TRU CON TRU
  rw [delta_eta_witness] at this
  exact Bool.noConfusion this

/-- The witness is identity-free (no component equals the group identity UNK):
    the failure is not a normalization artifact. -/
theorem witness_identity_free :
    TRU ≠ UNK ∧ CON ≠ UNK := by
  constructor <;> decide

/-- The diagonal tau-action on L^3 is fixed-point-free
    (the combinatorial premise of the Bockstein vanishing, Theorem 5.7). -/
theorem tau_diag_free :
    ∀ x y z : L, (tau x, tau y, tau z) ≠ (x, y, z) := by
  intro x y z h
  exact tau_ne x (congrArg Prod.fst h)

end Demorgan3
