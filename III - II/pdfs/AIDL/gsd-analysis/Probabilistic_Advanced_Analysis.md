# Analysis: Probabilistic & Advanced Questions (Units IV-VI)

## Numerical & Scenario-Based Questions (8-Mark)

### 1. Bayes' Rule Application: Rare Disease Testing
**Scenario:** A new diagnostic test for a rare disease (prevalence of 1 in 10,000 people) has been developed. The test is 98% accurate (P(positive|disease) = 0.98) and has a false positive rate of 0.5% (P(positive|no disease) = 0.005). If a random person tests positive, what is the probability that they actually have the disease?
**Answer:**
Let `D` be the event having the disease, and `+` be the event testing positive.
- `P(D) = 1/10,000 = 0.0001`
- `P(¬D) = 0.9999`
- `P(+|D) = 0.98`
- `P(+|¬D) = 0.005`
**Using Bayes' Rule:**
`P(D|+) = [P(+|D) * P(D)] / [P(+|D) * P(D) + P(+|¬D) * P(¬D)]`
`P(D|+) = [0.98 * 0.0001] / [0.98 * 0.0001 + 0.005 * 0.9999]`
`P(D|+) = 0.000098 / [0.000098 + 0.0049995]`
`P(D|+) = 0.000098 / 0.0050975 ≈ 0.0192`
**Result:** Even with a positive test, the probability of having the disease is only about **1.92%**. This highlights the impact of rare prevalence.

<button onclick="navigator.clipboard.writeText(`Bayes' Disease Prob:
P(D)=0.0001, P(+|D)=0.98, P(+|¬D)=0.005.
P(D|+) = (0.98*0.0001) / (0.98*0.0001 + 0.005*0.9999) = 0.000098 / 0.0050975 ≈ 0.0192 (1.92%).`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 2. Value of Information (VPI) Scenario
**Scenario:** An oil company is considering buying one of 5 indistinguishable blocks. Exactly one contains oil worth $1,000,000. Each block costs $200,000. A seismologist offers a survey for block #3 which indicates definitively if it has oil. How much should the company be willing to pay if they are risk-neutral?
**Answer:**
- **Initial Expected Value:** Since the price is $200k and the expected return is `(1/5)*$1M = $200k`, the initial profit is $0.
- **With Information (Block #3):**
  - Case 1: Survey says YES (Prob 1/5). Company buys block #3. Profit = `$1M - $200k = $800k`.
  - Case 2: Survey says NO (Prob 4/5). Company buys one of the other 4 blocks. Prob of oil in one of those is 1/4. Expected profit = `(1/4)*$1M - $200k = $50k`.
- **Expected Value with Info:** `(1/5)*$800k + (4/5)*$50k = $160k + $40k = $200k`.
- **VPI:** `EV_with_info - EV_initial = $200k - $0 = $200k`.
**Result:** The company should be willing to pay up to **$200,000** for this information.

<button onclick="navigator.clipboard.writeText(`VPI Oil Problem:
Initial EV = 0.
If Survey YES (1/5): Profit = 1M - 200k = 800k.
If Survey NO (4/5): EV = (1/4)*1M - 200k = 50k.
EV with Info = (1/5)*800k + (4/5)*50k = 200k.
VPI = 200k - 0 = 200k.`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

### 3. MDP and Bellman Equation (2-State Example)
**Scenario:** Simple 2-state MDP (S1, S2). From S1, action 'a' leads to S2 with prob 0.7 (reward +5) and stays in S1 with prob 0.3 (reward -1). Let discount factor γ = 0.9. Setup the Bellman equation for V*(S1).
**Answer:**
The Bellman equation for state `s` is: `V*(s) = max_a Σ P(s'|s,a) [R(s,a,s') + γ V*(s')]`.
For S1 and action 'a':
`V*(S1) = 0.7 * [5 + 0.9 * V*(S2)] + 0.3 * [-1 + 0.9 * V*(S1)]`
`V*(S1) = 3.5 + 0.63 * V*(S2) - 0.3 + 0.27 * V*(S1)`
`0.73 * V*(S1) = 3.2 + 0.63 * V*(S2)`
This equation represents the optimal value of S1 in terms of itself and S2.

<button onclick="navigator.clipboard.writeText(`Bellman for S1:
V*(S1) = 0.7*[5 + 0.9*V*(S2)] + 0.3*[-1 + 0.9*V*(S1)]
V*(S1) = 3.5 + 0.63*V*(S2) - 0.3 + 0.27*V*(S1)
0.73*V*(S1) = 3.2 + 0.63*V*(S2).`).then(() => alert('Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **Define a Belief State in POMDP.** A probability distribution over all possible physical states, representing the agent's uncertainty.
2. **What is Myopic Control?** An information-gathering strategy that only considers the value of the next single observation, ignoring long-term benefits.
3. **Difference between Causal and Diagnostic direction in Bayes?** Causal: `P(effect|cause)` (e.g., `P(stiff_neck|meningitis)`). Diagnostic: `P(cause|effect)` (e.g., `P(meningitis|stiff_neck)`).
4. **What is a Proper Policy?** A policy that is guaranteed to eventually reach a terminal goal state.
5. **What is Stochastic Dominance?** Occurs when one probability distribution for outcomes is "better" than another (e.g., has a higher cumulative probability for all values of profit).
6. **Define an Atomic Event.** A complete specification of the state of the world about which the agent is uncertain.
7. **What is the Joint Probability Distribution?** A table giving the probability of every possible atomic event.
8. **Role of Discount Factor (γ) in MDPs:** Determines the present value of future rewards; small γ makes the agent "short-sighted" (prefers immediate rewards).
9. **Define Conditional Independence.** Two variables A and B are conditionally independent given C if `P(A, B | C) = P(A | C) * P(B | C)`.
10. **What is Unification in FOL?** Finding a substitution of variables that makes two logical expressions identical.

<button onclick="navigator.clipboard.writeText(`1. Belief State: Prob distribution over possible states.
2. Myopic: Greedy info-gathering (1-step lookahead).
3. Causal/Diagnostic: Cause->Effect vs Effect->Cause.
4. Proper Policy: Reaches goal eventually.
5. Stochastic Dominance: Distribution A better than B overall.
6. Atomic Event: Full world specification.
7. Joint Distribution: Probabilities of all atomic events.
8. Discount Factor: Weight of future rewards.
9. Cond. Independence: P(A,B|C) = P(A|C)P(B|C).
10. Unification: Substitutions for expression identity.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
