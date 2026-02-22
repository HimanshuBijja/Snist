# AI Unit-II: Advanced Search — Exam-Ready Analysis

---

# SECTION 1: 8-MARK ANSWERS

---

## Q1. What is a Constraint Satisfaction Problem (CSP)? Explain its components and the Map Coloring example.

**Answer:**

### Introduction

Constraint Satisfaction Problems (CSPs) are mathematical problems where one must find states or objects that satisfy a number of constraints or criteria. In CSPs, states are evaluated using a standard, structured, and simple representation rather than heuristics.

### Definition

A CSP is a problem composed of:

- A **finite set of variables** V₁, V₂, …, Vₙ
- A **non-empty domain** of possible values for each variable: D_V₁, D_V₂, …, D_Vₙ
- A **set of constraints** C₁, C₂, …, Cₘ that limit the values variables can simultaneously take

### Key Terminology

- **State:** An assignment of values to some or all variables.
- **Consistent Assignment:** An assignment that does not violate any constraints.
- **Complete Assignment:** An assignment where every variable has been assigned a value.
- **Solution:** A complete assignment that satisfies all constraints.

### Map Coloring Example

The classic example of CSP is the **Australia Map Coloring Problem**:

- **Variables:** WA, NT, Q, NSW, V, SA, T (representing 7 regions of Australia)
- **Domains:** Dᵢ = {red, green, blue} — each region can be colored with one of three colors
- **Constraints:** Adjacent regions must have different colors. For example:
  - WA ≠ NT, WA ≠ SA, NT ≠ SA, NT ≠ Q, SA ≠ Q, SA ≠ NSW, SA ≠ V, Q ≠ NSW, NSW ≠ V
  - Expressed as tuples: (WA, NT) ∈ {(red,green), (red,blue), (green,red), …}

**Solution:** {WA=red, NT=green, Q=red, NSW=green, V=red, SA=blue, T=green}

### CSP Benefits

- Standard representation pattern with generic goal and successor functions
- Generic heuristics (no domain-specific expertise needed)
- **Constraint Graph** — nodes represent variables, edges represent constraints — can simplify search

### Applications

Scheduling (Hubble Space Telescope), floor planning, map coloring, cryptography, examination scheduling.

### Conclusion

CSPs provide a powerful and structured framework for solving a wide range of real-world problems by clearly defining variables, their possible values, and the restrictions that must be satisfied.

[COPY_8_MARK_1]

---

## Q2. Explain the Backtracking Search algorithm for solving CSPs with an example.

**Answer:**

### Introduction

Backtracking Search is a systematic, uninformed algorithm used to solve Constraint Satisfaction Problems. It is also known as **brute-force search** and is similar to **Depth-First Search (DFS)**.

### Working Principle

- The algorithm chooses values for **one variable at a time**.
- It checks if the assigned value is **consistent** with all constraints.
- If a variable has **no legal values left** to assign, the algorithm **backtracks** to the previous variable and tries a different value.
- It continues until either a complete consistent assignment is found (success) or all possibilities are exhausted (failure).

### Pseudocode

```
function BACKTRACKING-SEARCH(csp) returns solution or failure
    return RECURSIVE-BACKTRACKING({}, csp)

function RECURSIVE-BACKTRACKING(assignment, csp) returns solution or failure
    if assignment is complete then return assignment
    var ← SELECT-UNASSIGNED-VARIABLE(VARIABLES[csp], assignment, csp)
    for each value in ORDER-DOMAIN-VALUES(var, assignment, csp) do
        if value is consistent with assignment according to CONSTRAINTS[csp] then
            add {var = value} to assignment
            result ← RECURSIVE-BACKTRACKING(assignment, csp)
            if result ≠ failure then return result
            remove {var = value} from assignment
    return failure
```

### Example: Map Coloring

Using the Australia map coloring problem (Variables: WA, NT, Q, NSW, V, SA, T; Domain: {red, green, blue}):

1. Assign WA = red
2. Assign NT = green (consistent: WA ≠ NT ✓)
3. Assign Q = red (consistent: NT ≠ Q ✓)
4. Assign NSW = green (consistent: Q ≠ NSW ✓)
5. Assign V = red (consistent: NSW ≠ V ✓)
6. Assign SA = blue (consistent: WA ≠ SA, NT ≠ SA, Q ≠ SA, NSW ≠ SA, V ≠ SA ✓)
7. Assign T = green (independent subproblem ✓)

### Improving Backtracking Efficiency

General-purpose methods can give huge gains in speed by considering:

- **Which variable** should be assigned next?
- **In what order** should its values be tried?
- Can we **detect inevitable failure early**?
- Can we take **advantage of problem structure**?

### Conclusion

Backtracking search is a foundational algorithm for CSPs that systematically explores assignments, pruning invalid paths early through constraint checking, though its worst-case performance can be exponential.

[COPY_8_MARK_2]

---

## Q3. Explain the Minimax Algorithm for Game Playing with a detailed example.

**Answer:**

### Introduction

The Minimax algorithm is a **recursive/backtracking algorithm** used in **decision-making and game theory**. It provides an optimal move for a player, assuming the opponent also plays optimally. It is widely used in two-player games like Chess, Checkers, and Tic-Tac-Toe.

### Key Concepts

- **Two Players:** MAX (maximizer) and MIN (minimizer)
- **MAX** tries to get the **maximum possible score**
- **MIN** tries to get the **minimum possible score** (to limit MAX's benefit)
- The algorithm performs a **Depth-First Search (DFS)** of the game tree
- It proceeds to **terminal nodes**, evaluates their utility, then **backtracks**

### Pseudocode

```
function minimax(node, depth, maximizingPlayer):
    if depth == 0 or node is terminal:
        return static evaluation of node
    if maximizingPlayer:
        maxEva = -infinity
        for each child of node:
            eva = minimax(child, depth-1, false)
            maxEva = max(maxEva, eva)
        return maxEva
    else:
        minEva = +infinity
        for each child of node:
            eva = minimax(child, depth-1, true)
            minEva = min(minEva, eva)
        return minEva
```

### Worked Example

Consider a game tree with root A, where MAX moves first:

**Step 1:** Generate the entire game tree. Terminal node values: {-1, 4, 2, 6, -3, -5, 0, 7}

**Step 2 — MAX layer (leaf parents):**

- Node D = max(-1, 4) = **4**
- Node E = max(2, 6) = **6**
- Node F = max(-3, -5) = **-3**
- Node G = max(0, 7) = **7**

**Step 3 — MIN layer:**

- Node B = min(4, 6) = **4**
- Node C = min(-3, 7) = **-3**

**Step 4 — MAX layer (root):**

- Node A = max(4, -3) = **4**

**Optimal value for MAX = 4** (choosing the left subtree through B)

### Properties

| Property         | Value                                           |
| ---------------- | ----------------------------------------------- |
| Complete         | Yes (if tree is finite)                         |
| Optimal          | Yes (against optimal opponent)                  |
| Time Complexity  | O(bᵐ) where b = branching factor, m = max depth |
| Space Complexity | O(bm) for DFS                                   |

### Limitation

The main drawback is that it gets **very slow for complex games** with huge branching factors (Chess has b ≈ 35). This is addressed by **Alpha-Beta Pruning**.

### Conclusion

Minimax guarantees optimal play in two-player zero-sum games by systematically evaluating all possible moves and countermoves, though its exponential time complexity makes optimization techniques like alpha-beta pruning essential for practical use.

[COPY_8_MARK_3]

---

## Q4. Explain Alpha-Beta Pruning with its working procedure and a detailed example.

**Answer:**

### Introduction

Alpha-Beta Pruning is an **optimization technique for the Minimax algorithm** that reduces the number of nodes evaluated in the game tree by "pruning" branches that cannot affect the final decision.

### Key Parameters

- **Alpha (α):** The best (highest-value) choice found so far along the path for **MAX**. Initial value: **-∞**
- **Beta (β):** The best (lowest-value) choice found so far along the path for **MIN**. Initial value: **+∞**
- **Pruning Condition:** If at any point **α ≥ β**, remaining branches are pruned (not explored)

### Key Rules

1. **MAX player** only updates the value of **alpha**
2. **MIN player** only updates the value of **beta**
3. While backtracking, **node values** are passed to upper nodes (not α, β values)
4. α and β values are **passed down** to child nodes
5. Pruning can occur at any depth — it can prune **entire sub-trees**

### Worked Example (Step-by-Step)

**Step 1:** Start at root A (MAX), α=-∞, β=+∞. Pass values down to B, then to D.

**Step 2:** At Node D (MAX), compare terminal values: max(2, 3) = 3. Node D value = 3.

**Step 3:** Backtrack to B (MIN): β = min(+∞, 3) = 3. Now at B: α=-∞, β=3. Pass to node E.

**Step 4:** At Node E (MAX): compare first child value 5, so α = max(-∞, 5) = 5. Now α=5, β=3. Since **α(5) ≥ β(3)** → **PRUNE** right child of E. Node E value = 5.

**Step 5:** Backtrack to A (MAX): α = max(-∞, 3) = 3, β=+∞. Pass α=3, β=+∞ to node C, then to F.

**Step 6:** At Node F (MAX): compare children 0 and 1. max(3, 0) = 3, max(3, 1) = 3. Node F value = 1.

**Step 7:** Backtrack to C (MIN): β = min(+∞, 1) = 1. Now at C: α=3, β=1. Since **α(3) ≥ β(1)** → **PRUNE** entire sub-tree G.

**Step 8:** C returns 1 to A. At A: max(3, 1) = 3. **Optimal value for MAX = 3**.

### Move Ordering

The effectiveness depends heavily on the order nodes are examined:

- **Worst Ordering:** No pruning occurs, same as minimax. Complexity: **O(bᵐ)**
- **Ideal Ordering:** Maximum pruning, best moves on left side. Complexity: **O(b^(m/2))**

### Conclusion

Alpha-Beta Pruning returns the same result as standard minimax but is significantly faster, potentially examining only the square root of the total nodes, making it essential for practical game-playing AI.

[COPY_8_MARK_4]

---

## Q5. Explain Local Search algorithms and their key concepts with examples.

**Answer:**

### Introduction

Local Search algorithms are search techniques that apply mostly to problems where we **don't need to know the path** to the solution but only the **solution itself**. They are particularly useful for **optimization problems**.

### Working Principle

- Operate using a **single current state** (or a small number of states)
- Explore the **neighbors** of that state
- Usually **don't store the path** to the solution
- Move to neighboring states based on an **objective function**
- The distribution of objective function values in state space is called a **landscape**

### State Space Landscape Regions

Understanding the landscape is critical for local search:

| Region             | Description                                                                                      |
| ------------------ | ------------------------------------------------------------------------------------------------ |
| **Global Maximum** | The best possible state — maximizes objective function over the entire landscape                 |
| **Local Maximum**  | A state that maximizes the objective function in a small area around it (may not be global best) |
| **Plateau**        | A flat area where the objective function is constant                                             |
| **Shoulder**       | A plateau that has an uphill edge — search can potentially move upward                           |

### Types of Local Search

#### 1. Hill Climbing

- Continuously moves in the direction of increasing value
- Greedy approach — only looks at immediate neighbors
- Can get stuck at local maxima, plateaus, and ridges
- No backtracking — doesn't remember previous states

#### 2. Local Beam Search

- Keeps **k states** at any given time (initially generated randomly)
- Computes successors of all k states using the objective function
- If any successor is the maximum value → algorithm stops
- Otherwise, pools all states (initial k + successors = 2k), sorts them, selects top k as new initial states
- Process continues until maximum value is reached

#### 3. Stochastic Search

- A **randomized** version of hill climbing
- Does not examine all neighbors before moving
- Selects one neighbor at **random** and decides whether to choose it or examine another
- Gives some probability to selecting non-optimal steps to **avoid local optima**

#### 4. Stochastic Beam Search

- Instead of choosing the best k individuals, selects k at **random**
- Individuals with better evaluation are **more likely to be chosen** (probability proportional to fitness)
- Allows more **diversity** than plain beam search
- Similar to **asexual reproduction** in biology — slightly mutated children with survival of the fittest

### Conclusion

Local search algorithms provide efficient solutions for optimization problems where only the final state matters. Each variant trades off between exploration (avoiding local optima) and exploitation (improving the current solution).

[COPY_8_MARK_5]

---

## Q6. Explain the process of Constructing Search Trees in AI with an example.

**Answer:**

### Introduction

A Search Tree is a **tree representation** of a search problem where the root node corresponds to the **initial state** and the branches represent possible actions leading to new states. Search trees are fundamental to AI problem-solving.

### Components of a Search Problem

A search problem consists of:

1. **State Space:** The set of all possible states where you can be
2. **Start State:** The state from where the search begins
3. **Goal Test:** A function that checks whether the current state is the goal state

### How to Construct a Search Tree

1. **Create the root node:** Use the initial piece of information (initial state) as the root node at the top of the tree
2. **Generate child nodes:** Look at all possible actions from the current state; each resulting state becomes a child node on the next level
3. **Expand recursively:** Each child node's possible actions create further nodes on the next level
4. **Continue** until goal state is found or all possibilities are exhausted

### Example: Airline Route Finding

Suppose a program finds a route from **City A** to **City B**:

1. **Root Node (Level 1):** City A (where the customer currently is)
2. **Level 2:** All cities reachable from City A in one flight (e.g., City C, City D, City E)
3. **Level 3:** All cities reachable from Level 2 cities (e.g., from City C: City F, City B; from City D: City G)
4. **Continue** building levels until City B is found

The tree expands as:

```
        City A
       /  |  \
    City C  City D  City E
    / \      |
City F City B City G
```

### Choosing a Search Strategy

The search strategy determines **how to progress** down the tree:

- **Breadth-First Search:** Explores level by level — finds shortest path
- **Depth-First Search:** Explores path by path to maximum depth — memory efficient

### Applications

- Airline route planning
- Puzzle-solving (e.g., 8-puzzle)
- Game playing (e.g., Eight Queens Problem — placing 8 queens on a chessboard so no queen threatens another)
- Any problem that can be modeled as states and transitions

### Conclusion

Search trees provide an organized, hierarchical structure for exploring solutions in AI. They transform complex problems into manageable tree traversals, with the search strategy determining which path is selected.

[COPY_8_MARK_6]

---

## Q7. Explain Stochastic Search and Stochastic Beam Search in detail.

**Answer:**

### Introduction

Stochastic Search is a hill climbing variant that introduces **randomization** into the search process to overcome the limitations of deterministic local search algorithms, particularly the problem of getting stuck in local optima.

### Stochastic Search (Stochastic Hill Climbing)

- Unlike standard hill climbing, it does **not examine all neighbors** before moving
- Selects one **neighbor node at random** and decides whether to:
  - Choose it as the current state, OR
  - Examine another state
- "Stochastic" essentially means **randomized in some way**

### Why Randomization?

- A major issue with standard beam search and hill climbing is getting stuck in **local optima** instead of the global optimum
- Stochastic search avoids this by giving some (usually small) **probability** of choosing a step that is **not optimal** at a given moment
- This allows the search to escape local optima and explore more of the search space

### Stochastic Beam Search

Stochastic Beam Search is an enhanced version that combines beam search with randomization:

**Working:**

1. Instead of choosing the **best k individuals** (as in regular beam search), it selects **k individuals at random**
2. Individuals with **better evaluation** are **more likely to be chosen** — the probability of being selected is a function of the evaluation function
3. This maintains more **diversity** in the k individuals than plain beam search

### Analogy with Biology

Stochastic beam search can be understood through an evolutionary biology analogy:

- The **evaluation function** reflects the **fitness** of an individual
- The fitter the individual, the more likely it is to **pass its good traits** to the next generation
- Similar to **asexual reproduction** — each individual produces slightly mutated children
- The process follows **survival of the fittest** — best individuals survive while weaker ones are replaced
- An individual can be selected **multiple times** at random

### Comparison

| Feature               | Regular Beam Search | Stochastic Beam Search         |
| --------------------- | ------------------- | ------------------------------ |
| Selection             | Best k states       | Random k (weighted by fitness) |
| Diversity             | Low                 | High                           |
| Stuck in Local Optima | More likely         | Less likely                    |
| Deterministic         | Yes                 | No                             |

### Conclusion

Stochastic search methods introduce controlled randomness to escape local optima, providing a better balance between exploration and exploitation. Stochastic beam search particularly excels by maintaining diverse candidate solutions while still favoring higher-quality ones.

[COPY_8_MARK_7]

---

## Q8. Compare Minimax Algorithm and Alpha-Beta Pruning. Explain why Alpha-Beta Pruning is preferred.

**Answer:**

### Introduction

Both Minimax and Alpha-Beta Pruning are algorithms for **adversarial search** in two-player games. Alpha-Beta Pruning is an optimization of Minimax that achieves the same result while examining fewer nodes.

### Minimax Algorithm

- Performs a complete **DFS** of the game tree
- Explores **all terminal nodes** and backtracks with utility values
- MAX chooses maximum value; MIN chooses minimum value
- Evaluates **every node** in the tree
- **Time Complexity:** O(bᵐ)
- **Space Complexity:** O(bm)

### Alpha-Beta Pruning

- Modified version of Minimax with **pruning capability**
- Uses two parameters: **α** (best for MAX, initially -∞) and **β** (best for MIN, initially +∞)
- **Prunes** branches where **α ≥ β** — these branches cannot influence the final decision
- Returns the **same optimal move** as standard Minimax
- Can prune **entire sub-trees**, not just leaf nodes

### Detailed Comparison

| Property              | Minimax      | Alpha-Beta Pruning   |
| --------------------- | ------------ | -------------------- |
| Result                | Optimal move | Same optimal move    |
| Nodes Examined        | All nodes    | Fewer nodes (pruned) |
| Time (worst case)     | O(bᵐ)        | O(bᵐ)                |
| Time (ideal ordering) | O(bᵐ)        | O(b^(m/2))           |
| Extra Parameters      | None         | α and β              |
| Pruning               | No           | Yes (when α ≥ β)     |
| Move Ordering Impact  | None         | Significant          |
| Practical Speed       | Slower       | Much faster          |

### Why Alpha-Beta Pruning is Preferred

1. **Same Result, Faster:** It guarantees the exact same optimal move but eliminates unnecessary computations.

2. **Exponential Savings:** In ideal ordering, it reduces complexity from O(bᵐ) to O(b^(m/2)), effectively **doubling the searchable depth** in the same time.

3. **Deeper Search:** By saving computation time, the algorithm can search **deeper** in the game tree, leading to better decisions in complex games.

4. **Practical Efficiency:** For games like Chess (b ≈ 35), examining all nodes is impractical. Alpha-Beta makes it feasible to search several moves ahead.

5. **Sub-tree Pruning:** Not just leaf nodes — entire sub-trees can be pruned, providing massive savings in large game trees.

### Move Ordering Effect

- **Worst ordering:** No pruning — behaves exactly like minimax, O(bᵐ)
- **Ideal ordering:** Maximum pruning — best moves checked first (left side), O(b^(m/2))

### Conclusion

Alpha-Beta Pruning is universally preferred over plain Minimax because it achieves identical results with significantly fewer computations, making it practical for real-world game-playing AI applications.

[COPY_8_MARK_8]

---

---

# SECTION 2: 2-MARK ANSWERS

---

1. **What is a CSP?**
   A Constraint Satisfaction Problem is composed of a finite set of variables, each with a domain of possible values, and a set of constraints that restrict which combinations of values are allowed. The goal is to find an assignment satisfying all constraints.

2. **What is a Consistent Assignment?**
   A consistent assignment is an assignment of values to variables that does not violate any of the given constraints. It may be partial (not all variables assigned).

3. **What is a Complete Assignment?**
   A complete assignment is one where every variable in the CSP has been assigned a value. A solution is a complete assignment that is also consistent.

4. **What is a Constraint Graph?**
   A constraint graph is a visual representation of a CSP where nodes represent variables and edges represent constraints between them. It can be used to simplify search (e.g., Tasmania is an independent subproblem in map coloring).

5. **What is Backtracking Search?**
   Backtracking search is a DFS-based uninformed algorithm for CSPs. It assigns values to one variable at a time and backtracks when a variable has no legal values left to assign.

6. **Define Local Search.**
   Local search algorithms operate using a single current state (or a small number of states) and explore neighbors. They don't store the path and are useful for optimization problems where only the solution matters.

7. **What is a Landscape in Local Search?**
   A landscape is the distribution of values of the objective function across the state space. It includes regions like global maxima, local maxima, plateaus, and shoulders.

8. **What is Local Beam Search?**
   Local Beam Search keeps track of k states at any given time (initially random). It generates successors of all k states, and selects the best k states from the combined pool to continue the search.

9. **Define Stochastic Search.**
   Stochastic search is a randomized hill climbing variant that selects one neighbor at random and decides whether to move to it, rather than examining all neighbors. It helps avoid local optima.

10. **What is Stochastic Beam Search?**
    Instead of choosing the best k individuals, stochastic beam search selects k individuals at random, with probability proportional to their fitness. This maintains more diversity than plain beam search.

11. **What is a Search Tree?**
    A search tree is a tree representation of a search problem where the root corresponds to the initial state and branches represent actions leading to new states. It is used to explore possible solutions.

12. **What are the components of a Search Problem?**
    A search problem has three components: (1) State Space — set of all possible states, (2) Start State — where search begins, (3) Goal Test — function to check if goal is reached.

13. **What is the Minimax Algorithm?**
    Minimax is a recursive backtracking algorithm for two-player games. MAX maximizes the score while MIN minimizes it. It uses DFS to explore the game tree and backtracks with utility values.

14. **What are the two players in Minimax?**
    MAX (maximizer) tries to get the maximum possible score, and MIN (minimizer) tries to get the minimum possible score to limit MAX's benefit. Both assume optimal play.

15. **What is the Time Complexity of Minimax?**
    The time complexity of Minimax is O(bᵐ), where b is the branching factor and m is the maximum depth of the game tree.

16. **What is Alpha-Beta Pruning?**
    Alpha-Beta Pruning is an optimization of minimax that prunes branches which cannot affect the final decision. It uses α (best for MAX) and β (best for MIN) parameters and prunes when α ≥ β.

17. **What are Alpha and Beta in Alpha-Beta Pruning?**
    Alpha (α) is the best highest-value choice found so far for MAX (initially -∞). Beta (β) is the best lowest-value choice found so far for MIN (initially +∞). Pruning occurs when α ≥ β.

18. **When does Pruning occur in Alpha-Beta?**
    Pruning occurs when α ≥ β. At this point, remaining branches of that node are not explored because they cannot produce a better result than what has already been found.

19. **What is Move Ordering in Alpha-Beta Pruning?**
    Move ordering affects pruning efficiency. Ideal ordering (best moves on left) achieves O(b^(m/2)) complexity. Worst ordering (best moves on right) results in no pruning at all, O(bᵐ).

20. **What is the limitation of the Minimax Algorithm?**
    Minimax gets very slow for complex games with huge branching factors (like Chess with b ≈ 35). It examines every node exponentially, making it impractical without optimization like alpha-beta pruning.

21. **What is an Objective Function in Local Search?**
    An objective function evaluates how good a particular state is in an optimization problem. Local search algorithms seek to find the state that maximizes (or minimizes) this function.

22. **Differentiate between Global Maximum and Local Maximum.**
    Global maximum is the best possible state in the entire landscape with the highest objective function value. Local maximum is better than its neighbors but not the best overall — search may get stuck here.

23. **What is a Plateau in search?**
    A plateau is a flat area in the search landscape where the objective function has the same constant value for all neighboring states. It makes it difficult for local search algorithms to determine direction.

24. **What is a Shoulder in search?**
    A shoulder is a special type of plateau that has an uphill edge. The search algorithm can potentially move past a shoulder to continue climbing toward a better solution.

25. **What are the applications of CSP?**
    Applications include: scheduling observations on Hubble Space Telescope, floor planning, map coloring, cryptography, examination scheduling, and any problem with variables, domains, and constraints.

[COPY_ALL_2_MARKS]
