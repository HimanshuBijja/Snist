# Analysis: AI Unit-I (Introduction & Search)

## 8-Mark Important Questions

### 1. Explain the classification of AI tasks into Mundane, Formal, and Expert tasks.
**Answer:**
AI tasks are broadly classified into three categories:
- **Mundane Tasks:** These are ordinary tasks that humans learn from birth, such as perception (vision, speech), natural language processing (understanding, generation, translation), common sense reasoning, and robot control (navigation).
- **Formal Tasks:** These involve games (chess, checkers, backgammon) and mathematics (geometry, logic, integral calculus, proving properties of programs).
- **Expert Tasks:** These require specialized knowledge and training, including engineering (design, fault finding, manufacturing planning), scientific analysis, medical diagnosis, and financial analysis.
Historically, mundane tasks have been harder to mechanize than expert tasks because they require vast amounts of common-sense knowledge which is difficult to represent.

<button onclick="navigator.clipboard.writeText(`AI tasks are broadly classified into three categories:
- Mundane Tasks: These are ordinary tasks that humans learn from birth, such as perception (vision, speech), natural language processing (understanding, generation, translation), common sense reasoning, and robot control (navigation).
- Formal Tasks: These involve games (chess, checkers, backgammon) and mathematics (geometry, logic, integral calculus, proving properties of programs).
- Expert Tasks: These require specialized knowledge and training, including engineering (design, fault finding, manufacturing planning), scientific analysis, medical diagnosis, and financial analysis.
Historically, mundane tasks have been harder to mechanize than expert tasks because they require vast amounts of common-sense knowledge which is difficult to represent.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 2. Define AI Agent and explain the different types of AI agents.
**Answer:**
An AI agent is anything that can perceive its environment through sensors and act upon that environment through actuators.
**Types of Agents:**
1. **Simple Reflex Agents:** Select actions based only on the current percept, ignoring the rest of the percept history (e.g., if car-in-front-is-braking then initiate-braking).
2. **Model-Based Reflex Agents:** Maintain an internal state that depends on the percept history and reflects at least some of the unobserved aspects of the current state.
3. **Goal-Based Agents:** Use goal information to describe desirable situations, allowing the agent to choose actions that achieve the goal.
4. **Utility-Based Agents:** Use a utility function to map a state to a real number, which describes how "happy" the agent is. This allows for trade-offs between conflicting goals.
5. **Learning Agents:** Allow the agent to operate in initially unknown environments and to become more competent than its initial knowledge alone might allow.

<button onclick="navigator.clipboard.writeText(`An AI agent is anything that can perceive its environment through sensors and act upon that environment through actuators.
Types of Agents:
1. Simple Reflex Agents: Select actions based only on the current percept.
2. Model-Based Reflex Agents: Maintain an internal state to track the world.
3. Goal-Based Agents: Use goal information to choose actions.
4. Utility-Based Agents: Use a utility function to measure performance/desirability.
5. Learning Agents: Can learn and improve from experience.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 3. Compare Breadth-First Search (BFS) and Depth-First Search (DFS).
**Answer:**
- **Breadth-First Search (BFS):**
  - Expands the root node first, then all successors of the root, then their successors, and so on.
  - It explores the tree level by level (breadth-wise).
  - Implemented using a FIFO (First-In-First-Out) queue.
  - Guaranteed to find the shallowest goal.
- **Depth-First Search (DFS):**
  - Starts from the root and follows each path to its greatest depth node before backtracking.
  - It explores the tree depth-wise.
  - Implemented using a Stack (LIFO - Last-In-First-Out).
  - Not guaranteed to find the shallowest goal and can get stuck in infinite paths.
- **Comparison:** BFS is optimal for finding the shortest path but requires more memory (exponential growth). DFS is memory-efficient but not optimal and may not terminate if the tree is infinite.

<button onclick="navigator.clipboard.writeText(`BFS explores level by level using a FIFO queue. It is optimal for shortest path but memory-intensive. DFS explores path by path to maximum depth using a Stack. It is memory-efficient but not optimal and may fail on infinite paths.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is Intelligence?** The ability to acquire, understand, and apply knowledge to achieve goals in the world.
2. **Who is the Father of AI?** John McCarthy (term coined in 1956).
3. **Define a Rational Agent.** An agent that acts so as to maximize its performance measure, given its percept history and built-in knowledge.
4. **What is a Percept?** The agent's perceptual inputs at any given instant.
5. **Define Agent Function.** A mathematical mapping from percept histories to actions: `f: P* -> A`.
6. **What is State Space?** A representation of a problem in terms of states and operators that change those states.
7. **What is a Heuristic Function?** A function `h(n)` that estimates the cost of the cheapest path from node `n` to a goal state.
8. **Define Uninformed Search.** Also known as blind search, it uses no domain knowledge about the location of the goal (e.g., BFS, DFS).
9. **Define Informed Search.** Also known as heuristic search, it uses problem-specific knowledge to find solutions more efficiently (e.g., A*, Hill Climbing).
10. **What is the fitness function in A*?** `f(n) = g(n) + h(n)`, where `g(n)` is the cost to reach node `n` and `h(n)` is the estimated cost to the goal.

<button onclick="navigator.clipboard.writeText(`1. Intelligence: Ability to acquire/apply knowledge.
2. Father of AI: John McCarthy.
3. Rational Agent: Maximizes performance measure.
4. Percept: Input at a given instant.
5. Agent Function: Maps percept history to actions.
6. State Space: States + Operators.
7. Heuristic Function: Estimates cost to goal.
8. Uninformed Search: Blind search (no domain knowledge).
9. Informed Search: Uses heuristics for efficiency.
10. A* Fitness: f(n) = g(n) + h(n).`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
