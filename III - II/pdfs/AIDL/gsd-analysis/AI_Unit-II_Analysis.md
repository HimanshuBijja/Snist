# Analysis: AI Unit-II (Advanced Search & CSP)

## 8-Mark Important Questions

### 1. What is a Constraint Satisfaction Problem (CSP)? Explain with the Map Coloring example.
**Answer:**
A Constraint Satisfaction Problem (CSP) is a mathematical problem where one must find states or objects that satisfy a number of constraints or criteria.
**Components of CSP:**
- **Variables (V):** A finite set of variables `{V1, V2, ..., Vn}`.
- **Domains (D):** A set of possible values for each variable.
- **Constraints (C):** A set of restrictions that limit the values variables can simultaneously take.
**Map Coloring Example:**
- **Variables:** The different regions of a map (e.g., WA, NT, Q, NSW, V, SA, T).
- **Domains:** A set of colors `{red, green, blue}`.
- **Constraints:** Adjacent regions must have different colors (e.g., `WA != NT`).
The goal is to assign a color to every region such that no two adjacent regions have the same color.

<button onclick="navigator.clipboard.writeText(`CSP consists of Variables, Domains, and Constraints. In Map Coloring:
- Variables: Regions (WA, NT, etc.)
- Domains: Colors (Red, Green, Blue)
- Constraints: Adjacent regions != same color.
The goal is a complete, consistent assignment.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 2. Explain the Minimax Algorithm for Game Playing with an example.
**Answer:**
The Minimax algorithm is a recursive or backtracking algorithm used in decision-making and game theory (e.g., Chess, Tic-Tac-Toe). It provides an optimal move for a player assuming the opponent also plays optimally.
**Working:**
- Two players: **MAX** (tries to maximize the score) and **MIN** (tries to minimize the score).
- The algorithm performs a Depth-First Search (DFS) of the game tree.
- It proceeds to the terminal nodes (leaves) and calculates their utility values.
- **Backtracking:**
  - For a MAX node, it chooses the maximum value from its children.
  - For a MIN node, it chooses the minimum value from its children.
This continues until it reaches the root, determining the best move for the starting player.

<button onclick="navigator.clipboard.writeText(`Minimax is a recursive DFS algorithm for two-player zero-sum games. MAX maximizes benefit while MIN minimizes it. It explores to terminal nodes, then backtracks: MAX nodes pick the highest child value, MIN nodes pick the lowest. It guarantees an optimal move against an optimal opponent.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 3. Describe Alpha-Beta Pruning and its advantages.
**Answer:**
Alpha-Beta Pruning is an optimization technique for the minimax algorithm. it reduces the number of nodes evaluated in the game tree by "pruning" branches that cannot possibly influence the final decision.
**Key Parameters:**
- **Alpha (α):** The best (highest-value) choice found so far along the path for MAX. Initial value: -∞.
- **Beta (β):** The best (lowest-value) choice found so far along the path for MIN. Initial value: +∞.
**Pruning Condition:** If at any point **α >= β**, the remaining branches of that node are pruned (not explored).
**Advantages:** It returns the same move as the standard minimax but is much faster. It can potentially cut the number of states examined in half, allowing for deeper searches in the same amount of time.

<button onclick="navigator.clipboard.writeText(`Alpha-Beta Pruning optimizes Minimax by skipping branches that won't affect the result. α is MAX's best score, β is MIN's best. Pruning occurs when α >= β. It significantly improves search speed and allows for deeper game trees.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **Define CSP.** A problem composed of a set of variables, domains, and constraints that must be satisfied.
2. **What is a consistent assignment?** An assignment that does not violate any constraints.
3. **What is a complete assignment?** An assignment where every variable is mentioned (assigned a value).
4. **Define Local Search.** Search algorithms that operate using a single current state (or a small number) and move to neighbors, usually not storing the path.
5. **What is Local Beam Search?** A local search algorithm that keeps track of `k` states rather than just one.
6. **Define Stochastic Search.** A randomized search where the algorithm selects a neighbor at random to decide whether to move.
7. **What is the goal of the Minimizer in Minimax?** To select the minimum utility value to minimize MAX's outcome.
8. **What is the time complexity of Minimax?** `O(b^m)`, where `b` is the branching factor and `m` is the maximum depth.
9. **When does pruning happen in Alpha-Beta?** When the condition `alpha >= beta` is met.
10. **Mention one limitation of Minimax.** It is slow for complex games with high branching factors (like Chess).

<button onclick="navigator.clipboard.writeText(`1. CSP: Vars + Domains + Constraints.
2. Consistent: No constraints violated.
3. Complete: All vars assigned.
4. Local Search: Works on current state, doesn't store path.
5. Beam Search: Keeps k states.
6. Stochastic: Randomized neighbor selection.
7. Minimizer: Aims for lowest score.
8. Complexity: O(b^m).
9. Pruning: Happens if alpha >= beta.
10. Limitation: Slow for high branching factors.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
