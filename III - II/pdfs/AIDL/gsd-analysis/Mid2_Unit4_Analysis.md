# Analysis: Unit-IV (Uncertain Knowledge & Reasoning)

## 8-Mark Important Questions

### 1. Explain the Axioms of Utility Theory.
**Answer:**
Rational preferences must obey six constraints known as the axioms of utility theory:
1. **Orderability:** Given any two lotteries, an agent must either prefer one or be indifferent: `(A > B) ∨ (B > A) ∨ (A ~ B)`.
2. **Transitivity:** If an agent prefers A to B and B to C, then it must prefer A to C: `(A > B) ∧ (B > C) ⇒ (A > C)`.
3. **Continuity:** If lottery B is between A and C in preference, there is some probability `p` for which the agent is indifferent between B and a lottery yielding A with probability `p` and C with probability `1-p`.
4. **Substitutability:** If an agent is indifferent between A and B, it must be indifferent between complex lotteries that are identical except that B is substituted for A.
5. **Monotonicity:** If an agent prefers A to B, it must prefer the lottery that yields A with a higher probability.
6. **Decomposability:** Compound lotteries can be reduced to simpler ones using the laws of probability ("no fun in gambling" rule).

<button onclick="navigator.clipboard.writeText(`Axioms of Utility Theory:
1. Orderability: Must decide preference.
2. Transitivity: Consistent ordering (A>B>C -> A>C).
3. Continuity: Indifference at some probability p.
4. Substitutability: Indifferent to identical swaps.
5. Monotonicity: Higher p for better outcome is preferred.
6. Decomposability: Complex lotteries reduce to simple ones.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 2. Compare Value Iteration and Policy Iteration algorithms for solving MDPs.
**Answer:**
- **Value Iteration:**
  - Calculates the utility of each state by iteratively applying the **Bellman update**: `Ui+1(s) = R(s) + γ max_a Σ P(s'|s,a) Ui(s')`.
  - The algorithm repeats until the change in utility values is very small (equilibrium).
  - It finds the optimal utilities first, then derives the policy.
- **Policy Iteration:**
  - Alternates between two steps:
    1. **Policy Evaluation:** Given a fixed policy, calculate the utilities of states (linear equations).
    2. **Policy Improvement:** Use the calculated utilities to find a better action for each state.
  - It terminates when the policy no longer changes.
- **Comparison:** Policy iteration often converges in fewer iterations than value iteration because the optimal policy usually becomes stable before the utility values converge.

<button onclick="navigator.clipboard.writeText(`Value Iteration: Iteratively updates state utilities using the Bellman update until convergence. Policy Iteration: Alternates between calculating utilities for a fixed policy (evaluation) and updating the policy based on those utilities (improvement). Policy iteration typically requires fewer steps to find the optimal strategy.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 3. What is POMDP? Explain the concept of Belief State.
**Answer:**
A **Partially Observable Markov Decision Process (POMDP)** is a framework for decision-making under uncertainty where the agent does not know the exact state it is in.
- **Components:** Same as MDP (States, Actions, Transitions, Rewards) plus a **Sensor Model P(e|s)** that gives the probability of perceiving evidence `e` in state `s`.
- **Belief State (b):** Since the state is not fully visible, the agent maintains a probability distribution over all possible states. This distribution is the "belief state".
- **Decision Cycle:**
  1. Given belief state `b`, execute action `a = π*(b)`.
  2. Receive percept `e`.
  3. Update belief state: `b' = FORWARD(b, a, e)`.
Solving a POMDP can be reduced to solving an MDP on the (continuous) space of belief states.

<button onclick="navigator.clipboard.writeText(`POMDP is an MDP where the state is not fully visible. The agent uses a Belief State (b), which is a probability distribution over all possible states. The optimal policy π*(b) maps belief states to actions. The belief state is updated after each action and percept using a filtering process.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is the Principle of Maximum Expected Utility (MEU)?** A rational agent should choose the action that yields the highest expected utility, averaged over all possible outcomes.
2. **Define Decision Theory.** The combination of probability theory and utility theory: `Decision Theory = Probability + Utility`.
3. **What is a Stationary Process?** A process where the laws governing changes in the world do not themselves change over time (e.g., transition probabilities remain constant).
4. **Define a First-order Markov Process.** A process where the current state depends only on a finite fixed number of previous states (usually just the immediate previous state).
5. **What is Value of Perfect Information (VPI)?** The expected increase in utility that an agent gains from obtaining exact evidence about a random variable before making a decision.
6. **Define Risk-Averse behavior.** A preference for a sure thing over a gamble with the same or even slightly higher expected monetary value (concave utility curve).
7. **What is an Insurance Premium?** The difference between the Expected Monetary Value (EMV) of a lottery and its certainty equivalent.
8. **Define Strict Dominance.** An option strictly dominates another if it is better on all possible attributes or outcomes.
9. **What is Policy Evaluation?** The process of calculating the expected utility of states when following a specific fixed policy.
10. **Define a Lottery in utility theory.** A set of possible outcomes, each occurring with a certain probability.

<button onclick="navigator.clipboard.writeText(`1. MEU: Pick action with highest avg utility.
2. Decision Theory: Prob + Utility.
3. Stationary: Rules of change don't change over time.
4. 1st-order Markov: Future depends only on current state.
5. VPI: Utility gain from learning a variable's value.
6. Risk-Averse: Prefers sure payoff over equal gamble.
7. Insurance Premium: EMV minus certainty equivalent.
8. Strict Dominance: Better in all scenarios.
9. Policy Evaluation: Calculating U for a fixed policy.
10. Lottery: Probabilistic outcomes [p1, S1; p2, S2; ...].`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
