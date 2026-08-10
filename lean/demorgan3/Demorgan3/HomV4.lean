/-
  Demorgan3.HomV4 — H^1(V4; F2) = Hom(V4, F2) = F2^2:
  every additive map (L,+) → F2 is of the form u ↦ c1·u+ xor c2·u-,
  with (c1, c2) uniquely determined; so there are exactly four homomorphisms,
  spanned by the two rail characters.

  Core Lean 4 only.
-/
import Demorgan3.Basic

namespace Demorgan3

/-- Additivity (the 1-cocycle condition with trivial coefficients). -/
def IsHom (f : L → Bool) : Prop :=
  ∀ x y : L, f (add x y) = xor (f x) (f y)

/-- The linear form with coordinates (c1, c2). -/
def linForm (c1 c2 : Bool) (u : L) : Bool :=
  xor (c1 && u.1) (c2 && u.2)

/-- Each linear form is a homomorphism. -/
theorem linForm_isHom : ∀ c1 c2 : Bool, IsHom (linForm c1 c2) := by
  intro c1 c2 x y
  cases x with
  | mk a b =>
    cases y with
    | mk c d =>
      cases c1 <;> cases c2 <;> cases a <;> cases b <;> cases c <;> cases d <;> rfl

/-- Classification: every homomorphism is the linear form of its values on the
    two rail generators TRU = (1,0) and FAL = (0,1). Hence Hom(V4,F2) ≅ F2^2. -/
theorem hom_classify (f : L → Bool) (h : IsHom f) :
    ∀ u : L, f u = linForm (f TRU) (f FAL) u := by
  have h0 : f UNK = false := by
    have h1 : f UNK = xor (f UNK) (f UNK) := h UNK UNK
    cases hval : f UNK
    · rfl
    · rw [hval] at h1
      exact absurd h1 (by decide)
  have hC : f CON = xor (f TRU) (f FAL) := h TRU FAL
  intro u
  cases u with
  | mk a b =>
    cases a <;> cases b
    · calc f (false, false) = false := h0
        _ = linForm (f TRU) (f FAL) (false, false) := by
              cases f TRU <;> cases f FAL <;> rfl
    · calc f (false, true) = f FAL := rfl
        _ = linForm (f TRU) (f FAL) (false, true) := by
              cases f TRU <;> cases f FAL <;> rfl
    · calc f (true, false) = f TRU := rfl
        _ = linForm (f TRU) (f FAL) (true, false) := by
              cases f TRU <;> cases f FAL <;> rfl
    · calc f (true, true) = xor (f TRU) (f FAL) := hC
        _ = linForm (f TRU) (f FAL) (true, true) := by
              cases f TRU <;> cases f FAL <;> rfl

end Demorgan3
