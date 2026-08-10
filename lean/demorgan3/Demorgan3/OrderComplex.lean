/-
  Demorgan3.OrderComplex — the order complex of D4: exact chain counts.
  f-vector (4, 5, 2, 0): 4 vertices, 5 comparable pairs (edges), 2 two-chains,
  no three-chains; Euler characteristic 4 - 5 + 2 - 0 = 1.

  (Contractibility itself is proved in the paper as a cone argument; the
  combinatorial content certified here is the exact face count, including
  the vanishing of the degree-3 chain group.)

  Core Lean 4 only.
-/
import Demorgan3.Basic

namespace Demorgan3

/-- The lattice (componentwise) order on D4. -/
def le (x y : L) : Bool := (!x.1 || y.1) && (!x.2 || y.2)

/-- Strict order. -/
def lt (x y : L) : Bool := le x y && !(le y x)

def states : List L := [UNK, TRU, FAL, CON]

/-- Count of vertices. -/
theorem count_vertices : states.length = 4 := by decide

/-- Count of strict comparable pairs (edges of the order complex): 5. -/
theorem count_edges :
    ((states.map (fun x => (states.filter (fun y => lt x y)).length)).foldl (·+·) 0) = 5 := by
  decide

/-- Count of strict 2-chains x < y < z: 2. -/
theorem count_two_chains :
    ((states.map (fun x =>
        (states.map (fun y =>
          if lt x y then (states.filter (fun z => lt y z)).length else 0)).foldl (·+·) 0)).foldl (·+·) 0) = 2 := by
  decide

/-- There are no strict 3-chains: the degree-3 chain group is zero. -/
theorem no_three_chains :
    ∀ x y z w : L, ¬(lt x y = true ∧ lt y z = true ∧ lt z w = true) := by
  decide

/-- Euler characteristic of the order complex: 4 - 5 + 2 - 0 = 1. -/
theorem euler_char : (4 : Int) - 5 + 2 - 0 = 1 := by decide

/-- The bottom element UNK is comparable to everything: the cone premise. -/
theorem unk_bottom : ∀ x : L, le UNK x = true := by decide

end Demorgan3
