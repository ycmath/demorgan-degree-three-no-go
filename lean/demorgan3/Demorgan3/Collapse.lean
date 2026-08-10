/-
  Demorgan3.Collapse — the four-corner identity and the collapse theorem:
  c_R^W mod 2 = (r+s) * (rho x + rho y), hence z-independence and
  degenerate (padded) arity.

  Core Lean 4 only.
-/
import Demorgan3.Basic

namespace Demorgan3

/-- Lemma 5.3 (four-corner identity), stated in the state group (L,+):
    (J v z) + (J ^ z) + (M v z) + (M ^ z) = x + y, J = x v y, M = x ^ y. -/
theorem four_corner :
    ∀ x y z : L,
      add (add (join (join x y) z) (meet (join x y) z))
          (add (join (meet x y) z) (meet (meet x y) z)) = add x y := by
  decide

/-- The mod-2 reduction of a tau-anti weight with coordinates (r,s):
    Wbar = r*(1 + rho) + s*rho, as a Boolean-valued function. -/
def Wbar (r s : Bool) (u : L) : Bool :=
  xor (r && !(rho u)) (s && rho u)

/-- Wbar is the mod-2 reduction of r*W_A + s*W_B (integer level, all 4 states,
    all four parity combinations of (r,s)). -/
theorem Wbar_is_reduction :
    ∀ (r s : Bool) (u : L),
      (((if r then 1 else 0 : Int) * W_A u + (if s then 1 else 0 : Int) * W_B u) % 2 + 2) % 2
        = (if Wbar r s u then 1 else 0 : Int) := by
  decide

/-- The Boolean (mod-2) cubic: the four-corner XOR of Wbar. -/
def cWbar (r s : Bool) (x y z : L) : Bool :=
  xor (xor (Wbar r s (join (join x y) z)) (Wbar r s (meet (join x y) z)))
      (xor (Wbar r s (join (meet x y) z)) (Wbar r s (meet (meet x y) z)))

/-- Theorem 5.4 (collapse), Boolean form: for every parity pair (r,s) and all
    64 triples, cWbar = (r xor s) && (rho x xor rho y). -/
theorem collapse :
    ∀ (r s : Bool) (x y z : L),
      cWbar r s x y z = ((xor r s) && (xor (rho x) (rho y))) := by
  decide

/-- Corollary (z-independence): the mod-2 cubic does not depend on z. -/
theorem z_independent :
    ∀ (r s : Bool) (x y z z' : L),
      cWbar r s x y z = cWbar r s x y z' := by
  decide

/-- rho as an integer (0/1). -/
def rhoInt (u : L) : Int := if rho u then 1 else 0

/--
  Theorem 5.4 at the integer level, for an ARBITRARY tau-anti weight W:
  cW W x y z is congruent mod 2 to (W(UNK) + W(TRU)) * (rho x + rho y).
  (The coordinates of W in the basis (W_A, W_B) are r = W(UNK), s = W(TRU),
  by `weight_space`.)
-/
theorem collapse_parity (W : L → Int) (h : ∀ t, W (tau t) = - W t) (x y z : L) :
    (2 : Int) ∣ (cW W x y z - (W UNK + W TRU) * (rhoInt x + rhoInt y)) := by
  have hC : W (true, true) = - W (false, false) := h UNK
  have hF : W (false, true) = - W (true, false) := h TRU
  cases x with
  | mk a b =>
    cases y with
    | mk c d =>
      cases z with
      | mk g f =>
        cases a <;> cases b <;> cases c <;> cases d <;> cases g <;> cases f <;>
          simp [cW, rhoInt, join, meet, rho, UNK, TRU]
        all_goals omega

end Demorgan3
