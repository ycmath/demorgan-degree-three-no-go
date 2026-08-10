/-
  Demorgan3.Basic — the dual-rail carrier D4, the De Morgan involution,
  the rail parity, tau-anti weights, and the cubic candidate c_R^W.

  Core Lean 4 only. States are dual-rail pairs of Booleans:
    UNK = (false,false), TRU = (true,false), FAL = (false,true), CON = (true,true).
-/

namespace Demorgan3

/-- A carrier state: dual-rail coordinates (plus-rail, minus-rail). -/
abbrev L := Bool × Bool

def UNK : L := (false, false)
def TRU : L := (true,  false)
def FAL : L := (false, true)
def CON : L := (true,  true)

/-- Railwise meet. -/
def meet (x y : L) : L := (x.1 && y.1, x.2 && y.2)

/-- Railwise join. -/
def join (x y : L) : L := (x.1 || y.1, x.2 || y.2)

/-- The De Morgan involution: bitwise NOT (a translation by (1,1)). -/
def tau (x : L) : L := (!x.1, !x.2)

/-- Railwise addition: the state-group structure (F2 x F2, +). -/
def add (x y : L) : L := (xor x.1 y.1, xor x.2 y.2)

/-- The rail parity rho = u+ + u- : the indicator of the resolved face R. -/
def rho (x : L) : Bool := xor x.1 x.2

/-- The basic tau-anti weight supported on {UNK, CON}. -/
def W_A : L → Int
  | (false, false) => 1
  | (true,  true)  => -1
  | (true,  false) => 0
  | (false, true)  => 0

/-- The basic tau-anti weight supported on {TRU, FAL}. -/
def W_B : L → Int
  | (true,  false) => 1
  | (false, true)  => -1
  | (false, false) => 0
  | (true,  true)  => 0

/-- The cubic candidate: the alternating four-corner second difference of W. -/
def cW (W : L → Int) (x y z : L) : Int :=
  W (join (join x y) z) - W (meet (join x y) z)
    - W (join (meet x y) z) + W (meet (meet x y) z)

/-! Decidability of finite quantifiers over `Bool` and `L` (core Lean has no
    generic finite-type instances; these two are all we need for `decide`). -/

instance decForallBool {p : Bool → Prop} [DecidablePred p] :
    Decidable (∀ b : Bool, p b) :=
  decidable_of_iff (p false ∧ p true)
    ⟨fun ⟨h0, h1⟩ b => by cases b <;> assumption,
     fun h => ⟨h false, h true⟩⟩

instance decForallL {p : L → Prop} [DecidablePred p] :
    Decidable (∀ x : L, p x) :=
  decidable_of_iff
      (p (false, false) ∧ p (false, true) ∧ p (true, false) ∧ p (true, true))
    ⟨fun ⟨h1, h2, h3, h4⟩ x =>
       match x with
       | (false, false) => h1
       | (false, true)  => h2
       | (true, false)  => h3
       | (true, true)   => h4,
     fun h => ⟨h _, h _, h _, h _⟩⟩

/-- tau is an involution. -/
theorem tau_tau : ∀ x : L, tau (tau x) = x := by decide

/-- tau is fixed-point-free on D4 (the premise of the free-action argument). -/
theorem tau_ne : ∀ x : L, tau x ≠ x := by decide

/-- rho is invariant under tau. -/
theorem rho_tau : ∀ x : L, rho (tau x) = rho x := by decide

/-- rho is additive: rho(x + y) = rho x xor rho y. -/
theorem rho_add : ∀ x y : L, rho (add x y) = xor (rho x) (rho y) := by decide

/-- W_A and W_B are tau-anti. -/
theorem W_A_anti : ∀ t : L, W_A (tau t) = - W_A t := by decide

theorem W_B_anti : ∀ t : L, W_B (tau t) = - W_B t := by decide

/--
  Lemma 2.3 (the weight space): every tau-anti weight W equals
  W(UNK) * W_A + W(TRU) * W_B, pointwise.
-/
theorem weight_space (W : L → Int) (h : ∀ t, W (tau t) = - W t) (t : L) :
    W t = W UNK * W_A t + W TRU * W_B t := by
  have hC : W (true, true) = - W (false, false) := h UNK
  have hF : W (false, true) = - W (true, false) := h TRU
  cases t with
  | mk a b =>
    cases a <;> cases b <;> simp only [W_A, W_B, UNK, TRU] <;> omega

end Demorgan3
