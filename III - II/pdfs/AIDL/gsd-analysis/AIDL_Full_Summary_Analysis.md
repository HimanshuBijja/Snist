# Comprehensive Analysis: AIDL (Full Syllabus)

## 8-Mark Important Questions (Units 1-6)

### 1. Explain Informed Search Strategies: Greedy Best-First Search and A* Search.
**Answer:**
Informed search strategies use problem-specific knowledge (heuristics) to find solutions more efficiently.
- **Greedy Best-First Search:**
  - Expands the node that appears to be closest to the goal.
  - It uses only the heuristic function `f(n) = h(n)`.
  - It is efficient but not guaranteed to be optimal or complete.
- **A* Search:**
  - Combines the cost to reach the current node `g(n)` with the estimated cost to reach the goal `h(n)`.
  - Its evaluation function is `f(n) = g(n) + h(n)`.
  - **Optimality:** It is complete and optimal if the heuristic `h(n)` is **admissible** (never overestimates the cost) and **consistent**.
A* is the most widely used informed search algorithm because it finds the shortest path efficiently.

<button onclick="navigator.clipboard.writeText(`Informed Search uses heuristics h(n). 
Greedy BFS: f(n) = h(n). Fast but not optimal. 
A* Search: f(n) = g(n) + h(n). Optimal and complete if h(n) is admissible. It balances path cost and estimated distance to goal.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 2. Discuss Markov Decision Processes (MDPs) and the Bellman Equation.
**Answer:**
A Markov Decision Process (MDP) is a mathematical framework for modeling decision-making in situations where outcomes are partly random and partly under the control of a decision-maker.
**Components of MDP:**
- **States (S):** A set of possible states.
- **Actions (A):** A set of actions the agent can take.
- **Transition Model P(s'|s,a):** The probability of reaching state `s'` from `s` by taking action `a`.
- **Reward Function R(s,a,s'):** The immediate reward received after transition.
- **Discount Factor (γ):** A value between 0 and 1 that represents the importance of future rewards.
**Bellman Equation:**
It defines the relationship between the utility of a state and the utilities of its neighbors: `U(s) = R(s) + γ max_a Σ P(s'|s,a) U(s')`.
It is the basis for algorithms like Value Iteration and Policy Iteration.

<button onclick="navigator.clipboard.writeText(`MDP framework: States, Actions, Transitions, and Rewards. Bellman Equation: U(s) = R(s) + γ max_a Σ P(s'|s,a) U(s'). It expresses the optimal utility of a state as the immediate reward plus the discounted expected utility of the next state.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 3. Explain the architecture and typical layers of a Convolutional Neural Network (CNN).
**Answer:**
CNNs are specialized neural networks for processing structured grid-like data (e.g., images).
**Typical Layers:**
1. **Convolutional Layer:** The core building block. It applies learnable filters (kernels) to the input to produce feature maps, detecting patterns like edges and textures.
2. **Activation Layer (ReLU):** Applies a non-linear function (like Rectified Linear Unit) to the feature maps to allow the network to learn complex patterns.
3. **Pooling Layer (Max Pooling):** Reduces the spatial dimensions of the feature maps, providing spatial invariance and reducing computation.
4. **Fully Connected (FC) Layer:** Typically at the end of the network. It connects every neuron in one layer to every neuron in the next, used for the final classification or regression.
CNNs excel at image recognition because they automatically learn hierarchical features.

<button onclick="navigator.clipboard.writeText(`CNN Layers: 1. Convolutional (feature extraction via kernels). 2. Activation (ReLU for non-linearity). 3. Pooling (dimensionality reduction/max-pooling). 4. Fully Connected (final classification). CNNs automate feature engineering for image tasks.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 4. What is Reinforcement Learning (RL)? Explain its key elements and the Q-Learning algorithm.
**Answer:**
Reinforcement Learning is a branch of machine learning where an agent learns to make decisions by interacting with an environment to maximize cumulative rewards.
**Key Elements:**
- **Agent & Environment:** The learner and the world it acts in.
- **Policy (π):** The agent's strategy for choosing actions in different states.
- **Value Function:** Estimates the long-term desirability of a state.
- **Reward:** The immediate feedback signal.
**Q-Learning:**
A model-free RL algorithm that learns an action-value function `Q(s, a)`, which represents the expected total reward for taking action `a` in state `s`.
**Update Rule:** `Q(s,a) = Q(s,a) + α [R + γ max_a' Q(s',a') - Q(s,a)]`.
It allows the agent to learn the optimal policy through trial and error.

<button onclick="navigator.clipboard.writeText(`RL involves an agent learning from rewards. Key elements: Policy, Reward, Value Function. Q-Learning is model-free RL that updates Q-values using: Q(s,a) = Q(s,a) + α [Reward + γ max Q(s',a') - Q(s,a)]. It aims for the optimal strategy π*.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is an Admissible Heuristic?** A heuristic that never overestimates the cost to reach the goal.
2. **Define a Consistent Heuristic.** A heuristic where the estimated cost to the goal from a node is no greater than the step cost to a neighbor plus the estimated cost from that neighbor.
3. **What is the branching factor (b)?** The number of successors of a node in a search tree.
4. **Define Adversarial Search.** A search where multiple agents have conflicting goals (e.g., games).
5. **What is Unification in FOL?** A process that finds substitutions for variables that make two logical expressions identical.
6. **Define Resolution.** A complete inference rule used to determine if a conclusion can be logically derived from a set of premises by converting them to CNF.
7. **What is Value Iteration?** An algorithm that iteratively updates state values using the Bellman equation until they converge to the optimal utilities.
8. **Define Deep Learning.** A subfield of ML that uses artificial neural networks with multiple layers (deep) to learn representations of data.
9. **What is Experience Replay?** A technique in DQN that stores past experiences in a buffer and samples them randomly to stabilize training.
10. **Define Exploration vs. Exploitation.** The dilemma in RL between trying new actions to find better rewards (exploration) and choosing known actions that give high rewards (exploitation).

<button onclick="navigator.clipboard.writeText(`1. Admissible: Never overestimates cost.
2. Consistent: Satisfies triangle inequality h(n) <= c + h(n').
3. Branching Factor: Successors per node.
4. Adversarial Search: Games with conflicting agents.
5. Unification: Finding variable substitutions for identity.
6. Resolution: Inference rule using CNF.
7. Value Iteration: Iterative utility updates via Bellman.
8. Deep Learning: Neural nets with many layers.
9. Experience Replay: Random sampling of past RL steps.
10. Exploration/Exploitation: Trying new things vs using known good ones.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
