# Analysis: AIDL Assignment-2 Questions

## Unit-4 Important Questions (8-Mark)

### 1. Bayes' Theorem Problem: Amy has two bags. Bag I has 7 red and 4 blue balls and bag II has 5 red and 9 blue balls. Amy draws a ball at random and it turns out to be red. Determine the probability that the ball was from bag I.
**Answer:**
Let `E1` be the event of choosing Bag I, and `E2` be the event of choosing Bag II.
Let `A` be the event of drawing a red ball.
- `P(E1) = 1/2`, `P(E2) = 1/2` (since bags are chosen at random)
- `P(A|E1)` = Probability of drawing red ball from Bag I = `7/11`
- `P(A|E2)` = Probability of drawing red ball from Bag II = `5/14`
**By Bayes' Theorem:**
`P(E1|A) = [P(E1) * P(A|E1)] / [P(E1) * P(A|E1) + P(E2) * P(A|E2)]`
`P(E1|A) = [(1/2) * (7/11)] / [(1/2) * (7/11) + (1/2) * (5/14)]`
`P(E1|A) = (7/11) / (7/11 + 5/14)`
`P(E1|A) = (7/11) / (153/154) = (7/11) * (154/153) = 98/153 ≈ 0.64`
**Result:** The probability that the red ball came from Bag I is **0.64**.

<button onclick="navigator.clipboard.writeText(`Bayes' Problem Solution:
P(E1)=1/2, P(E2)=1/2
P(Red|E1)=7/11, P(Red|E2)=5/14
P(E1|Red) = [P(E1)P(Red|E1)] / [P(E1)P(Red|E1) + P(E2)P(Red|E2)]
= (7/11) / (7/11 + 5/14) = 98/153 ≈ 0.64.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 2. Explain Policy-iteration Algorithm.
**Answer:**
Policy iteration is an algorithm used to find the optimal policy for a Markov Decision Process (MDP). It alternates between two steps:
1. **Policy Evaluation:** Given a policy `π`, calculate the utility `U^π(s)` for each state `s` under that policy. This involves solving a set of linear equations.
2. **Policy Improvement:** Update the policy `π` by choosing the action `a` that maximizes the expected utility of the next state: `π(s) = argmax_a Σ P(s'|s,a) U^π(s')`.
The algorithm repeats these steps until the policy no longer changes, at which point the optimal policy `π*` has been found. It typically converges much faster than value iteration in terms of number of iterations.

<button onclick="navigator.clipboard.writeText(`Policy Iteration alternates between: 1. Policy Evaluation (calculating utilities U for a fixed policy). 2. Policy Improvement (updating policy by picking the best action for those utilities). It converges when the policy remains stable.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## Unit-5 Important Questions (8-Mark)

### 3. Write short notes on Max-Pooling in CNN.
**Answer:**
Max-pooling is a sample-based discretization process used in Convolutional Neural Networks (CNNs).
- **Operation:** It slides a filter (usually 2x2) over the input and takes the maximum value from the covered region.
- **Purpose:** 
  1. **Spatial Invariance:** It makes the network less sensitive to small shifts or distortions in the input.
  2. **Dimensionality Reduction:** It reduces the spatial size (width and height) of the representation, reducing the number of parameters and computation.
  3. **Overfitting Control:** By providing an abstracted form of the features, it helps prevent overfitting.
Max-pooling is commonly applied after convolutional layers to extract the most prominent features.

<button onclick="navigator.clipboard.writeText(`Max-pooling takes the maximum value from a window (e.g., 2x2) in a feature map. Benefits: 1. Reduces dimensionality. 2. Provides spatial invariance. 3. Helps prevent overfitting by abstracting features.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 4. Design AND gate using a sample Neural Network.
**Answer:**
To implement an AND gate, we need a single-layer perceptron with two inputs (`x1`, `x2`) and a bias (`b`).
- **Input Table:** (0,0)->0, (0,1)->0, (1,0)->0, (1,1)->1.
- **Weights:** Let `w1 = 1`, `w2 = 1`.
- **Bias:** Let `b = -1.5`.
- **Activation Function:** Step function `f(z) = 1 if z >= 0 else 0`.
**Calculations:**
- (0,0): `1*0 + 1*0 - 1.5 = -1.5` -> Output 0
- (0,1): `1*0 + 1*1 - 1.5 = -0.5` -> Output 0
- (1,0): `1*1 + 1*0 - 1.5 = -0.5` -> Output 0
- (1,1): `1*1 + 1*1 - 1.5 = 0.5` -> Output 1
The network correctly implements the AND gate logic.

<button onclick="navigator.clipboard.writeText(`AND Gate Perceptron:
Weights: w1=1, w2=1. Bias: b=-1.5.
Inputs: (x1, x2). Activation: Step Function.
Check: (1,1) -> 1+1-1.5 = 0.5 (Output 1). Others give negative sums (Output 0).`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## Unit-6 Important Questions (8-Mark)

### 5. Write short notes on Deep Q networks (DQN).
**Answer:**
Deep Q-Networks (DQN) combine Reinforcement Learning (Q-Learning) with Deep Neural Networks.
- **Core Idea:** Instead of using a Q-table (which is impractical for large state spaces), a neural network is used to approximate the Q-function: `Q(s, a; θ)`.
- **Key Features:**
  1. **Experience Replay:** Stores agent's experiences `(s, a, r, s')` in a buffer and samples random batches to train the network, breaking correlations in data.
  2. **Target Network:** Uses a separate, slowly updated network to calculate the target Q-values, improving training stability.
DQN achieved human-level performance on many Atari games, marking a major breakthrough in AI.

<button onclick="navigator.clipboard.writeText(`DQN uses a Deep Neural Network to approximate the Q-function. Key features: 1. Experience Replay (random sampling from past actions). 2. Target Network (stable target calculation). It enables RL in high-dimensional state spaces.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is a POMDP?** A Partially Observable Markov Decision Process where the agent doesn't know the exact state but receives observations related to it.
2. **Define a Neuron in AI.** A basic unit of a neural network that receives inputs, weights them, adds a bias, and applies an activation function.
3. **What is the Pole-cart problem?** A classic reinforcement learning benchmark where the goal is to balance a pole on a moving cart (Inverted Pendulum).
4. **What is DRQN?** Deep Recurrent Q-Network, which adds LSTM/recurrent layers to DQN to handle tasks where state info is integrated over time.
5. **Role of neurons in Human Vision:** Detect features like edges, orientations, and colors at different levels of the visual cortex.

<button onclick="navigator.clipboard.writeText(`1. POMDP: MDP where state is not fully visible.
2. Neuron: Unit that sums weighted inputs and applies activation.
3. Pole-cart: RL problem of balancing a pole on a cart.
4. DRQN: DQN + RNN/LSTM for temporal dependencies.
5. Vision Neurons: Feature detectors (edges, colors) in human cortex.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
