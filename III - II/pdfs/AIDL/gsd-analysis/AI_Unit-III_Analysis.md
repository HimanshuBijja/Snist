# Analysis: AI Unit-III (Knowledge Representation & Reasoning)

## 8-Mark Important Questions

### 1. Define Knowledge-Based Agent (KBA) and its architecture.
**Answer:**
A Knowledge-Based Agent (KBA) is an intelligent agent that maintains an internal state of knowledge, reasons over that knowledge, updates it after observations, and takes actions.
**Main Parts of KBA:**
1. **Knowledge Base (KB):** A central component that stores a set of representations (sentences) about the world. It provides a way to add new sentences and query existing ones.
2. **Inference System:** The "engine" that applies logical rules to the symbols in the KB to infer new information or decide on actions.
**Working:** The agent perceives the environment, updates its KB with the new percept, asks the KB what action it should take based on its knowledge, and then performs that action.

<button onclick="navigator.clipboard.writeText(`KBA consists of a Knowledge Base (KB) and an Inference Engine. It works by: 1. Perceiving input. 2. Updating KB. 3. Reasoning using the Inference Engine. 4. Taking action. It uses formal representations to act intelligently.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 2. Compare Forward Chaining and Backward Chaining.
**Answer:**
- **Forward Chaining:**
  - **Data-Driven:** Starts from known facts and moves forward by applying inference rules to extract more data until a goal is reached.
  - **Approach:** Bottom-up approach.
  - **Strategy:** Uses Breadth-First Search.
  - **Suitability:** Good for planning, monitoring, and interpretation.
- **Backward Chaining:**
  - **Goal-Driven:** Starts from the goal and works backward through inference rules to find facts that support the goal.
  - **Approach:** Top-down approach.
  - **Strategy:** Uses Depth-First Search.
  - **Suitability:** Good for diagnostic, prescription, and debugging tasks.
- **Key Difference:** Forward chaining is proactive (generates all possible conclusions), while backward chaining is reactive (only finds what's needed for the goal).

<button onclick="navigator.clipboard.writeText(`Forward Chaining: Data-driven, bottom-up, BFS strategy. Starts from facts to reach goal. Suitable for planning. Backward Chaining: Goal-driven, top-down, DFS strategy. Starts from goal to find supporting facts. Suitable for diagnostics.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 3. State and explain Bayes' Theorem with its formula and terms.
**Answer:**
Bayes' Theorem (or Bayes' Rule) is used to calculate the probability of a hypothesis based on prior knowledge and evidence. It is fundamental for probabilistic inference in AI.
**Formula:** `P(A|B) = [P(B|A) * P(A)] / P(B)`
**Terms:**
- **P(A|B):** **Posterior Probability** - The probability of hypothesis A given evidence B.
- **P(B|A):** **Likelihood** - The probability of evidence B given that hypothesis A is true.
- **P(A):** **Prior Probability** - The initial probability of hypothesis A before considering evidence.
- **P(B):** **Marginal Probability** - The total probability of the evidence B occurring under all possible hypotheses.
It allows AI systems to update the prediction of an event by observing new information from the real world.

<button onclick="navigator.clipboard.writeText(`Bayes' Rule: P(A|B) = [P(B|A) * P(A)] / P(B). Terms: P(A|B) is Posterior (goal), P(B|A) is Likelihood, P(A) is Prior, and P(B) is Marginal probability. It is used for reasoning under uncertainty.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is Knowledge Representation?** A field of AI concerned with presenting real-world information in a form that a computer can understand and use to solve complex tasks.
2. **Define Propositional Logic.** The simplest form of logic where statements (propositions) are either true or false.
3. **What is a Tautology?** A logical formula that is always true for every possible value of its variables.
4. **Define First-Order Logic (FOL).** An extension of propositional logic that represents objects, relations, and functions, making it more expressive.
5. **What are Quantifiers in FOL?** Symbols that specify the scope of variables: Universal (∀ - "for all") and Existential (∃ - "there exists").
6. **Define an Atomic Sentence.** The most basic sentence in FOL, formed by a predicate followed by a sequence of terms (e.g., `Brothers(Ravi, Ajay)`).
7. **What is a Horn Clause?** A clause with at most one positive literal.
8. **What is a Definite Clause?** A Horn clause with exactly one positive literal.
9. **Define Probabilistic Reasoning.** A way of representing knowledge where probability is used to indicate the degree of uncertainty.
10. **Mention one KR Issue.** Granularity of representation: deciding the level of detail (primitives vs. high-level facts) at which knowledge should be stored.

<button onclick="navigator.clipboard.writeText(`1. KR: Presenting real-world info for computers.
2. Prop Logic: Boolean logic (true/false).
3. Tautology: Always true formula.
4. FOL: Represents objects and relations.
5. Quantifiers: ∀ (Universal), ∃ (Existential).
6. Atomic Sentence: Predicate(terms).
7. Horn Clause: max 1 positive literal.
8. Definite Clause: exactly 1 positive literal.
9. Probabilistic Reasoning: Logic + Probability for uncertainty.
10. KR Issue: Choosing granularity/level of detail.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
