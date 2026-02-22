# AI Unit-I: Introduction & Search — Exam-Ready Analysis

---

# SECTION 1: 8-MARK ANSWERS

---

## Q1. What is Artificial Intelligence? Explain the different perspectives of defining AI.

**Answer:**

### Introduction

Artificial Intelligence (AI) is the study and design of intelligent agents — systems that perceive their environment and take actions to maximize their chances of success. The term was coined by **John McCarthy in 1956**.

### Definition

AI is defined as the study of how to make computers do things which, at the moment, people do better. It is concerned with the design of intelligence in an artificial device. There are two key ideas in this definition:

1. **Intelligence** — the ability to acquire, understand, and apply knowledge to achieve goals.
2. **Artificial Device** — a machine or system that simulates intelligent behavior.

### Four Perspectives of AI

AI can be viewed from four different perspectives arranged along two dimensions — **Thought vs. Behavior** and **Human vs. Rational**:

|              | **Human**                      | **Rational**                  |
| ------------ | ------------------------------ | ----------------------------- |
| **Thought**  | Systems that think like humans | Systems that think rationally |
| **Behavior** | Systems that act like humans   | Systems that act rationally   |

1. **Systems that think like humans:** Focus on cognitive modeling — understanding how humans think using computational models of the mind.
2. **Systems that think rationally:** Use logic and formal reasoning (laws of thought approach) to draw correct conclusions from given premises.
3. **Systems that act like humans:** The **Turing Test** approach — if a computer can fool a human interrogator into thinking it is human, it is deemed intelligent. This requires natural language processing, knowledge representation, automated reasoning, and machine learning.
4. **Systems that act rationally:** The **rational agent** approach — designing agents that act to achieve the best expected outcome, which is the dominant modern approach.

### Conclusion

Modern AI primarily focuses on building rational agents that act optimally in their environment, combining elements from all four perspectives to create systems capable of perception, reasoning, learning, and action.

[COPY_8_MARK_1]

---

## Q2. Explain the classification of AI tasks into Mundane, Formal, and Expert tasks with examples.

**Answer:**

### Introduction

While studying the range of tasks that an intelligent entity is expected to perform, AI tasks are broadly classified into three categories: Mundane tasks, Formal tasks, and Expert tasks.

### 1. Mundane Tasks (Daily Use Tasks)

These are ordinary tasks that humans learn from birth through perception and interaction with the world. Despite seeming simple for humans, they are extremely hard to mechanize because they require vast amounts of common-sense knowledge.

**Examples:**

- **Perception:** Vision (recognizing objects, people), speech recognition
- **Natural Language Processing:** Understanding, generation, and translation of language
- **Common Sense Reasoning:** Everyday logical reasoning
- **Robot Control:** Navigation around obstacles, locomotion
- **Planning:** Route planning, activity scheduling

### 2. Formal Tasks

These involve structured problems with well-defined rules and mathematical foundations.

**Examples:**

- **Games:** Chess, checkers, backgammon
- **Mathematics:** Geometry, logic, integral calculus, proving mathematical theorems and properties of programs

### 3. Expert Tasks

These require specialized domain knowledge and professional training.

**Examples:**

- **Engineering:** Design, fault finding, manufacturing planning
- **Scientific Analysis:** Data interpretation, hypothesis testing
- **Medical Diagnosis:** Identifying diseases from symptoms
- **Financial Analysis:** Market prediction, risk assessment

### Key Observation

Historically, it has been **easier to mechanize expert tasks** than mundane tasks. This is because expert tasks operate on specialized knowledge without common sense, which can be more easily represented and handled by AI systems. Mundane tasks, on the other hand, require complex knowledge representation and complicated algorithms because they depend heavily on common-sense knowledge that is difficult to formalize.

### Conclusion

The classification helps in understanding the scope and challenges of AI — mundane tasks are deceptively hard, while expert tasks, despite their apparent complexity, are more amenable to AI solutions.

[COPY_8_MARK_2]

---

## Q3. Define AI Agent. Explain the structure and different types of AI Agents in detail.

**Answer:**

### Introduction

An AI Agent is anything that can **perceive** its environment through **sensors** and **act** upon that environment through **actuators (effectors)**. An agent runs in a continuous cycle of **perceiving, thinking, and acting**.

### Types of Agents

- **Human Agent:** Eyes, ears, and other organs serve as sensors; hands, legs, and vocal tract serve as actuators.
- **Robotic Agent:** Cameras, infrared range finders, NLP processors serve as sensors; motors serve as actuators.
- **Software Agent:** Keystrokes and file contents serve as sensory input; screen display serves as output.

### Structure of AI Agent

The structure consists of three main components:

1. **Architecture:** The machinery (hardware) on which the AI agent executes.
2. **Agent Function:** A mathematical mapping from percept histories to actions: **f : P\* → A**
3. **Agent Program:** The implementation of the agent function that runs on the physical architecture.

**Formula:** Agent = Architecture + Program

### Five Types of AI Agents

1. **Simple Reflex Agents:**
   - Select actions based on the **current percept only**, ignoring percept history.
   - Use condition-action rules (e.g., if car-in-front-is-braking → initiate-braking).
   - Limited because they cannot handle partially observable environments.

2. **Model-Based Reflex Agents (State-Based Agents):**
   - Maintain an **internal state** that depends on percept history.
   - Track unobserved aspects using a model of the world.
   - Based on state of the world and knowledge (memory), they trigger actions.

3. **Goal-Based Agents:**
   - Consider **future actions** and the desirability of their outcomes.
   - Use goal information to decide which actions achieve the desired goal.
   - Goal formulation based on the current situation helps solve problems via search.

4. **Utility-Based Agents:**
   - Use a **utility function** that maps states to real-valued numbers describing agent "happiness."
   - Provide a more general framework when multiple goals exist with different preferences.
   - The agent acts to **maximize expected utility**.

5. **Learning Agents:**
   - Allow the agent to operate in **initially unknown environments**.
   - The learning element modifies the performance element over time.
   - Learning is required for **true autonomy**, enabling the agent to become more competent than its initial knowledge allows.

### Conclusion

The five types of agents represent increasing levels of sophistication, from simple stimulus-response mechanisms to fully autonomous learning systems.

[COPY_8_MARK_3]

---

## Q4. Explain Problem-Solving Agents and the components of Problem Formulation with an example.

**Answer:**

### Introduction

Problem-solving agents are **goal-based agents** that decide what to do by finding sequences of actions that lead to desirable states. They use **atomic representation** where each state is treated as a black box with no internal structure. In AI, search techniques serve as universal problem-solving methods.

### Steps Performed by a Problem-Solving Agent

| Step                    | Description                                                                                                      |
| ----------------------- | ---------------------------------------------------------------------------------------------------------------- |
| **Goal Formulation**    | Organizes steps to formulate one goal out of multiple goals, based on current situation and performance measure. |
| **Problem Formulation** | Decides what actions should be taken to achieve the formulated goal.                                             |
| **Search**              | Identifies the best possible sequence of actions to reach the goal state from the current state.                 |
| **Solution**            | Finds the best algorithm that provides the optimal solution.                                                     |
| **Execution**           | Executes the best optimal solution to reach the goal state.                                                      |

### Five Components of Problem Formulation

1. **Initial State:** The starting state or initial step of the agent towards its goal.
2. **Actions:** Description of all possible actions available to the agent.
3. **Transition Model:** Describes what each action does — the resulting state after performing an action.
4. **Goal Test:** Determines whether a given state is the goal state.
5. **Path Cost:** Assigns a numeric cost to each path; an **optimal solution** has the lowest path cost.

### Example: 8-Puzzle Problem

- **States:** Location of each numbered tile and the blank tile.
- **Initial State:** Any valid configuration of tiles.
- **Actions:** Movement of the blank space — left, right, up, or down.
- **Transition Model:** Returns the resulting state based on given state and action.
- **Goal Test:** Checks whether the correct goal configuration is reached.
- **Path Cost:** Number of steps in the path, where each step costs 1.

### Conclusion

Problem-solving agents systematically explore the state space using search algorithms to find optimal solutions. The clear formulation of problems using these five components is essential for effective AI problem-solving.

[COPY_8_MARK_4]

---

## Q5. Compare Breadth-First Search (BFS) and Depth-First Search (DFS) with examples.

**Answer:**

### Introduction

BFS and DFS are two fundamental **uninformed (blind) search** algorithms used by problem-solving agents to explore the search space without domain-specific knowledge.

### Breadth-First Search (BFS)

- **Strategy:** Expands all nodes at the current depth level before moving to nodes at the next level.
- **Data Structure:** Uses a **FIFO (First-In-First-Out) queue**.
- **Process:** Starts from the root node, explores all successors at the current level, then moves to the next level — searches **breadthwise**.
- **Completeness:** Yes — it will always find a solution if one exists.
- **Optimality:** Finds the **shallowest** (shortest path) goal node.
- **Space Complexity:** High — stores all nodes at the current level (exponential).
- **Example Traversal:** S → A → B → C → D → G → H → E → F → I → K

### Depth-First Search (DFS)

- **Strategy:** Starts from the root and follows each path to its **greatest depth** before backtracking.
- **Data Structure:** Uses a **Stack (LIFO — Last-In-First-Out)**.
- **Process:** Explores the tree depth-wise, going as deep as possible along each branch before backtracking — searches **depthwise**.
- **Completeness:** No — can get stuck in infinite paths; not guaranteed to find a solution.
- **Optimality:** No — does not guarantee the shallowest goal.
- **Space Complexity:** Low — only stores nodes along the current path (linear).
- **Example Traversal:** S → A → B → D → E (backtrack) → C → G (goal found)

### Comparison Table

| Property         | BFS                      | DFS                   |
| ---------------- | ------------------------ | --------------------- |
| Data Structure   | FIFO Queue               | LIFO Stack            |
| Search Direction | Level by level (breadth) | Path by path (depth)  |
| Complete         | Yes                      | No                    |
| Optimal          | Yes (uniform cost)       | No                    |
| Memory           | High (exponential)       | Low (linear)          |
| Speed            | Slower for deep goals    | Faster for deep goals |

### Conclusion

BFS is preferred when the shortest path is required and memory is not a constraint. DFS is preferred when memory is limited and the solution is expected to be deep in the search tree.

[COPY_8_MARK_5]

---

## Q6. Explain the Iterative Deepening Depth-First Search (IDDFS) algorithm with an example.

**Answer:**

### Introduction

The Iterative Deepening Depth-First Search (IDDFS) algorithm is a **combination of BFS and DFS** algorithms. It combines the **fast search of BFS** with the **memory efficiency of DFS**. It is a useful uninformed search strategy when the search space is large and the depth of the goal node is unknown.

### How IDDFS Works

- The algorithm performs **depth-first search** up to a certain "**depth limit**."
- It **gradually increases** the depth limit after each iteration until the **goal is found**.
- At each iteration, it searches the entire tree up to the current depth limit, effectively performing DFS at increasing depths.
- The algorithm finds the **best depth limit** by gradually increasing it.

### Algorithm Steps

1. Set depth limit = 0.
2. Perform DFS up to the current depth limit.
3. If goal is found, return success.
4. If goal is not found, increment depth limit by 1.
5. Repeat from step 2.

### Example

Consider a tree with root A:

| Iteration | Nodes Explored                   | Depth Limit |
| --------- | -------------------------------- | ----------- |
| 1st       | A                                | 0           |
| 2nd       | A, B, C                          | 1           |
| 3rd       | A, B, D, E, C, F, G              | 2           |
| 4th       | A, B, D, H, I, E, C, F, **K**, G | 3           |

In the **4th iteration**, the algorithm finds the goal node **K**.

### Advantages

- **Combines benefits:** BFS's completeness and optimality + DFS's memory efficiency.
- **Complete:** Yes — guaranteed to find a solution if one exists.
- **Optimal:** Yes — finds the shallowest goal.
- **Memory Efficient:** O(bd) where b is branching factor and d is depth.

### Disadvantages

- **Repeated Work:** Nodes at shallow depths are expanded multiple times across iterations.
- Can be slower than direct BFS for very shallow goals.

### Conclusion

IDDFS is considered one of the best uninformed search strategies because it achieves the completeness and optimality of BFS while maintaining the low memory requirements of DFS.

[COPY_8_MARK_6]

---

## Q7. Explain the Hill Climbing Algorithm in Artificial Intelligence with its features and limitations.

**Answer:**

### Introduction

Hill Climbing is a **heuristic search algorithm** used for solving **optimization problems** in AI. The concept is analogous to climbing a hill — the algorithm starts from a non-optimal base state and iteratively moves upward (improves) until it reaches the peak (optimal state).

### Working Principle

- It is a variant of the **Generate-and-Test** method with direction feedback.
- Uses a **heuristic function** to estimate how close a given state is to the goal state.
- The algorithm starts with a non-optimal state and iteratively improves it until a predefined condition (based on heuristic) is met.
- It terminates when it reaches a **peak value** where no neighbor has a higher value.

### Generate-and-Test Algorithm

1. Generate a possible solution.
2. Test to see if this is actually a solution.
3. Quit if a solution is found; otherwise, return to step 1.

### Key Features

1. **Generate and Test Variant:** Produces feedback that helps decide which direction to move in the search space.
2. **Greedy Approach:** Always moves in the direction that **optimizes the cost**.
3. **No Backtracking:** Does not remember previous states and cannot backtrack.
4. **Local Search:** Only looks at good immediate neighbor states, not beyond.
5. **Single State:** Only keeps a single current state; does not maintain a search tree.
6. Each node has two components: **state** and **value**.

### State Space Landscape Regions

- **Local Maximum:** A state better than its neighbors but not the best overall.
- **Global Maximum:** The best possible state with the highest objective function value.
- **Current State:** Where the agent is currently present.
- **Flat Local Maximum (Plateau):** A flat space where all neighbor states have the same value.
- **Shoulder:** A plateau region with an uphill edge.

### Limitations

- Can get stuck at **local maxima**, **plateaus**, and **ridges**.
- **No backtracking** means it cannot recover from wrong paths.
- Not guaranteed to find the **global optimum**.

### Conclusion

Hill Climbing is simple and memory-efficient but works best for problems where the search landscape is smooth. For complex problems, variants like stochastic hill climbing or simulated annealing may be used instead.

[COPY_8_MARK_7]

---

## Q8. Explain A\* Search Algorithm with its working procedure and an example.

**Answer:**

### Introduction

A\* (A-star) is the most commonly known form of **best-first search**. It combines features of **Uniform Cost Search (UCS)** and **Greedy Best-First Search** to find the **shortest path** efficiently through the search space.

### Key Formula

A\* uses the **fitness function:**

**f(n) = g(n) + h(n)**

Where:

- **f(n):** Total estimated cost of the cheapest solution through node n
- **g(n):** Cost to reach node n from the start state (actual path cost)
- **h(n):** Heuristic estimate of the cost from node n to the goal (estimated remaining cost)

### Algorithm Steps

1. Place the starting node in the **OPEN list**.
2. If the OPEN list is empty, return **failure** and stop.
3. Select the node from OPEN list with the **smallest f(n) = g(n) + h(n)**.
   - If this node is the goal, return **success** and stop.
4. **Expand** the selected node and generate all successors; put the selected node in the **CLOSED list**.
   - For each successor, if not already in OPEN or CLOSED, compute f(n) and add to OPEN.
5. If a successor is already in OPEN or CLOSED with a higher g(n'), update its back pointer to reflect the lower g(n') value.
6. Return to Step 2.

### Example

Given a graph with heuristic values, starting from node **S** to goal **G**:

| Step               | Calculation             | f(n)      |
| ------------------ | ----------------------- | --------- |
| **Initialization** | S: g=0, h=5             | f(S) = 5  |
| **Iteration 1**    | S→A: g=1, h=3           | f(A) = 4  |
|                    | S→G: g=10, h=0          | f(G) = 10 |
| **Iteration 2**    | S→A→C: g=1+1=2, h=2     | f(C) = 4  |
|                    | S→A→B: g=1+2=3, h=4     | f(B) = 7  |
| **Iteration 3**    | S→A→C→G: g=1+1+4=6, h=0 | f(G) = 6  |
|                    | S→A→C→D: g=1+1+3=5, h=6 | f(D) = 11 |

**Optimal Path:** S → A → C → G with **cost = 6**

### Properties

- **Complete:** Yes
- **Optimal:** Yes (when h(n) is admissible, i.e., h(n) ≤ h\*(n))
- **Uses:** Games, web-based maps, pathfinding, robotics
- Expands **fewer nodes** than other search algorithms

### Conclusion

A\* is widely regarded as the most efficient informed search algorithm due to its use of both actual path cost and heuristic estimation, making it optimal and complete for admissible heuristics.

[COPY_8_MARK_8]

---

## Q9. Explain the Turing Test and its significance in AI.

**Answer:**

### Introduction

The Turing Test, proposed by **Alan Turing in 1950**, is a test of a machine's ability to exhibit intelligent behavior equivalent to, or indistinguishable from, that of a human. It is the foundational benchmark for evaluating AI under the "systems that act like humans" perspective.

### How the Turing Test Works

- A **human interrogator** sits at a computer terminal.
- At the other end is either a **human** or a **computer system**.
- The interrogator has a fixed period of time to type questions and study replies.
- Communication is done via **teletype (remote text communication)** to eliminate bias from physical appearance or voice.
- If at the end of the session, the interrogator **cannot reliably determine** whether the respondent is a human or a computer, the system is deemed **intelligent**.

### Capabilities Required to Pass the Turing Test

To pass the Turing Test, a computer must possess the following capabilities:

1. **Natural Language Processing (NLP):** To communicate with the human interrogator in natural language (English, etc.).
2. **Knowledge Representation:** To store information effectively and efficiently about the world.
3. **Automated Reasoning:** To use stored information to answer questions and draw new conclusions.
4. **Machine Learning:** To adapt to new circumstances and detect/extrapolate patterns.

### Total Turing Test

The **Total Turing Test** includes two additional requirements:

- **Computer Vision:** To perceive objects — the ability to "see."
- **Robotics:** To manipulate objects and move — the ability to "act" physically.

### Significance

- Provides a **concrete operational definition** of intelligence for machines.
- Avoids philosophical debates about consciousness by focusing on **observable behavior**.
- Remains one of the most discussed benchmarks in AI research.
- Inspired research in NLP, knowledge representation, reasoning, and machine learning.

### Conclusion

The Turing Test is a landmark concept in AI that defines machine intelligence in terms of behavioral indistinguishability from humans. While it has limitations (e.g., it doesn't measure internal understanding), it remains a foundational reference point in AI research.

[COPY_8_MARK_9]

---

## Q10. Explain Informed (Heuristic) Search and Best-First Search Algorithm with an example.

**Answer:**

### Introduction

Informed search, also called **Heuristic Search**, uses **domain-specific knowledge** (heuristics) to guide the search process toward the goal more efficiently than uninformed search methods.

### Heuristic Function — h(n)

- A function used in informed search to find the most promising path.
- Takes the current state as input and produces an **estimation** of how close the agent is to the goal.
- Represented as **h(n)** — calculates the cost of the optimal path between node n and the goal.
- The value of h(n) is always **positive**.
- **h(n) ≤ h\*(n)** — the heuristic cost should be less than or equal to the actual estimated cost (admissibility condition).
- May not always give the best solution but is **guaranteed to find a good solution in reasonable time**.

### Best-First Search (Greedy Best-First Search)

Best-first search always selects the path that **appears best at that moment**. It is a combination of DFS and BFS algorithms that uses the heuristic function for evaluation.

**Evaluation Function:** f(n) = h(n)

Where h(n) = estimated cost from node n to the goal.

### Algorithm Steps

1. Place the starting node into the **OPEN list**.
2. If OPEN list is empty, return **failure**.
3. Remove node n with the **lowest h(n)** from OPEN; place it in **CLOSED list**.
4. **Expand** node n and generate its successors.
5. Check if any successor is a goal node — if yes, return **success**.
6. For each successor, check evaluation function f(n). If not in OPEN or CLOSED, add to OPEN.
7. Return to Step 2.

### Example

Given a graph with heuristic values:

| Step   | Action              | OPEN List | CLOSED List  |
| ------ | ------------------- | --------- | ------------ |
| Init   | Start S             | [A, B]    | [S]          |
| Iter 1 | Expand B (lowest h) | [A]       | [S, B]       |
| Iter 2 | Expand F            | [E, A]    | [S, B, F]    |
| Iter 3 | Expand G            | [I, E, A] | [S, B, F, G] |

**Final Solution Path:** S → B → F → G

### Advantages

- More efficient than uninformed search for large search spaces.
- Uses domain knowledge to reduce exploration.

### Disadvantages

- Can get stuck in loops.
- Not always optimal — may not find the shortest path.

### Conclusion

Best-first search is a powerful informed search strategy that uses heuristic evaluation to guide exploration. For guaranteed optimality, A\* search (which adds path cost g(n) to the heuristic) is preferred.

[COPY_8_MARK_10]

---

---

# SECTION 2: 2-MARK ANSWERS

---

1. **What is Intelligence?**
   Intelligence is the ability to acquire, understand, and apply knowledge to achieve goals in the world. It follows the cycle: Acquire → Understand → Apply → GOAL.

2. **What is Artificial Intelligence?**
   AI is the study and design of intelligent agents — systems that perceive their environment and take actions to maximize their chances of success. The term was coined by John McCarthy in 1956.

3. **Who is the Father of AI?**
   John McCarthy is considered the father of AI. He coined the term "Artificial Intelligence" in 1956.

4. **What is the Turing Test?**
   The Turing Test is a test where a human interrogator communicates via text with either a human or a computer. If the interrogator cannot reliably distinguish between the two, the computer is deemed intelligent.

5. **Define an AI Agent.**
   An AI agent is anything that can perceive its environment through sensors and act upon that environment through actuators. It runs in a cycle of perceiving, thinking, and acting.

6. **What is a Rational Agent?**
   A rational agent is one that acts so as to maximize its performance measure, given its percept history and built-in knowledge. It always does the "right thing."

7. **What is a Percept?**
   A percept is the agent's perceptual input at any given instant — the complete set of inputs received through its sensors at that moment.

8. **Define Agent Function.**
   The agent function is a mathematical mapping from percept histories to actions, represented as f : P* → A, where P* is percept history and A is the action space.

9. **What is the structure of an AI Agent?**
   Agent = Architecture + Program. Architecture is the hardware/machinery; Agent function maps percepts to actions (f : P\* → A); Agent program is the implementation of the agent function.

10. **What are Mundane Tasks in AI?**
    Mundane tasks are ordinary, daily-use tasks humans learn from birth, such as perception (vision, speech), natural language processing, common sense reasoning, and navigation. They are the hardest to mechanize.

11. **What are Expert Tasks in AI?**
    Expert tasks require specialized knowledge and training, such as medical diagnosis, engineering design, scientific analysis, and financial analysis. They are easier to mechanize than mundane tasks.

12. **What is a Simple Reflex Agent?**
    A simple reflex agent selects actions based only on the current percept, ignoring percept history. It uses condition-action rules (e.g., if car-in-front-is-braking → initiate-braking).

13. **What is a Goal-Based Agent?**
    A goal-based agent considers future actions and the desirability of their outcomes. It uses goal information to choose actions that reduce the distance to the desired goal state.

14. **What is a Utility-Based Agent?**
    A utility-based agent uses a utility function that maps states to real numbers, representing how "happy" the agent is. It acts to maximize expected utility, especially when multiple conflicting goals exist.

15. **What is a Problem-Solving Agent?**
    A problem-solving agent is a goal-based agent that decides what to do by finding sequences of actions that lead to desirable states. It uses search techniques as its universal problem-solving mechanism.

16. **What is State Space?**
    State space is a representation of a problem in terms of states and operators that change those states. It encompasses all valid states that can be generated by applying any combination of operators.

17. **What is a Search Algorithm?**
    Searching is a step-by-step procedure to solve a search problem in a given search space. It takes a problem as input and returns a solution (action sequence) as output.

18. **Define Uninformed (Blind) Search.**
    Uninformed search does not contain any domain knowledge about the location of the goal. It operates in a brute-force manner, examining each node until the goal is achieved. Examples: BFS, DFS.

19. **Define Informed (Heuristic) Search.**
    Informed search uses problem-specific knowledge (heuristics) to find solutions more efficiently. It uses a heuristic function to guide the search toward the goal. Examples: A\*, Hill Climbing, Best-First Search.

20. **What is BFS?**
    Breadth-First Search expands all nodes at the current depth level before moving to the next level. It uses a FIFO queue and is guaranteed to find the shallowest goal node.

21. **What is DFS?**
    Depth-First Search starts from the root and follows each path to its greatest depth before backtracking. It uses a Stack (LIFO). It is memory efficient but not optimal.

22. **What is Iterative Deepening Depth-First Search (IDDFS)?**
    IDDFS is a combination of BFS and DFS that performs depth-first search up to a gradually increasing depth limit. It combines BFS's completeness with DFS's memory efficiency.

23. **What is a Heuristic Function?**
    A heuristic function h(n) estimates the cost of the cheapest path from node n to a goal state. Its value is always positive, and h(n) ≤ h\*(n) for admissibility.

24. **What is Hill Climbing?**
    Hill Climbing is a local search heuristic algorithm that continuously moves in the direction of increasing value to find the peak. It is greedy, has no backtracking, and only keeps a single current state.

25. **What is the A\* Search evaluation function?**
    The A\* evaluation function is f(n) = g(n) + h(n), where g(n) is the actual cost to reach node n from the start, and h(n) is the heuristic estimate of cost from n to the goal.

26. **What is Best-First Search?**
    Best-first search selects the path that appears best at each moment using the evaluation function f(n) = h(n). It combines advantages of DFS and BFS using heuristic guidance.

27. **What is a Local Maximum in Hill Climbing?**
    A local maximum is a state that is better than all its neighbor states but is not the best possible (global maximum) state. The algorithm may get stuck here.

28. **What is Problem Formulation?**
    Problem formulation decides what actions should be taken to achieve a goal. It has five components: Initial State, Actions, Transition Model, Goal Test, and Path Cost.

29. **Differentiate between Uninformed and Informed Search.**
    Uninformed search uses no domain knowledge and explores blindly (BFS, DFS). Informed search uses heuristic functions with domain knowledge to guide search efficiently (A\*, Best-First).

30. **What is an Optimal Solution?**
    An optimal solution is the solution that has the lowest path cost among all possible solutions to a problem.

[COPY_ALL_2_MARKS]
