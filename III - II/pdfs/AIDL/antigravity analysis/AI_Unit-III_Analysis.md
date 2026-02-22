# AI Unit-III: Knowledge Representation and Reasoning — Exam-Ready Analysis

---

# SECTION 1: 8-MARK ANSWERS

---

## Q1. Explain Knowledge-Based Agents in AI. Describe their structure and working.

**Answer:**

### Introduction

A Knowledge-Based Agent (KBA) is an intelligent agent that has the capability of maintaining an internal state of knowledge, reasoning over that knowledge, updating it after observations, and taking actions accordingly. These agents need knowledge about the real world to make decisions and reason efficiently.

### Structure of Knowledge-Based Agent

A KBA is composed of two main parts:

1. **Knowledge Base (KB):**
   - A central component that stores facts, rules, and information about the world.
   - It is a set of sentences represented in a formal language (e.g., propositional logic, first-order logic).
   - The learning element regularly updates the KB by learning new knowledge from the environment.

2. **Inference System (Inference Engine):**
   - The component that applies logical rules to the knowledge base to infer new information from known facts.
   - It communicates with the KB to decide actions based on stored knowledge.
   - The inference engine commonly proceeds in two modes: **Forward Chaining** and **Backward Chaining**.

### Working of KBA

1. The agent **perceives** the environment by taking input from sensors.
2. The input is processed by the **inference engine**, which communicates with the Knowledge Base.
3. Based on the knowledge stored in the KB, the agent **decides** what action to take.
4. The agent **acts** upon the environment through actuators/effectors.
5. The **learning element** continuously updates the KB with new knowledge gained from observations.

### Knowledge Representation

- Knowledge Representation is the field of AI concerned with presenting real-world information in a form that computers can understand and use.
- It allows machines to behave like humans by empowering them to **learn from available information, experience, or experts**.
- The ability of machines to **understand, interpret, and reason** constitutes knowledge representation.

### Importance

- KBAs can represent the world with formal representation and act intelligently.
- They bridge the gap between raw perception and intelligent action through structured knowledge.
- Choosing the right type of knowledge representation is critical for AI system success.

### Conclusion

Knowledge-Based Agents are fundamental to AI systems that need to reason, learn, and make informed decisions. Their dual structure of Knowledge Base and Inference Engine enables sophisticated problem-solving in complex environments.

[COPY_8_MARK_1]

---

## Q2. Explain Propositional Logic with its connectives, truth tables, and examples.

**Answer:**

### Introduction

Propositional Logic (PL) is the **simplest form of logic** in AI where all statements are made by propositions. It is a technique of knowledge representation in logical and mathematical form. It is also called **Boolean logic** as it works on 0 (false) and 1 (true).

### Definition

A **proposition** is a declarative statement that is either **true** or **false** — it cannot be both. Questions, commands, and opinions are NOT propositions.

**Examples:**

- "It is Sunday" → Proposition (can be true or false)
- "The Sun rises from West" → Proposition (false)
- "3 + 3 = 7" → Proposition (false)
- "5 is a prime number" → Proposition (true)
- "Where is Rohini?" → NOT a proposition (it's a question)

### Components

Propositional logic consists of:

1. **Propositions (Atomic Sentences):** Represented by symbolic variables (A, B, C, P, Q, R)
2. **Logical Connectives (Operators):** Connect two or more sentences

### Logical Connectives and Truth Tables

#### 1. Conjunction (AND) — ∧

| P   | Q   | P ∧ Q |
| --- | --- | ----- |
| T   | T   | **T** |
| T   | F   | F     |
| F   | T   | F     |
| F   | F   | F     |

- True only when **both** propositions are true.

#### 2. Disjunction (OR) — ∨

| P   | Q   | P ∨ Q |
| --- | --- | ----- |
| T   | T   | **T** |
| T   | F   | **T** |
| F   | T   | **T** |
| F   | F   | F     |

- True when **at least one** proposition is true (inclusive OR).

#### 3. Negation (NOT) — ¬

| P   | ¬P  |
| --- | --- |
| T   | F   |
| F   | T   |

- Reverses the truth value.

#### 4. Implication (IF...THEN) — →

#### 5. Biconditional (IF AND ONLY IF) — ↔

### Key Terms

- **Tautology:** A formula that is **always true** (valid sentence).
- **Contradiction:** A formula that is **always false**.
- **Contingency:** A formula that has both true and false values depending on inputs.
- **Model:** A truth assignment that makes a formula true.

### Limitation

PL can only represent facts as true or false. It **cannot represent complex statements** like "Some humans are intelligent" or relationships between objects.

### Conclusion

Propositional Logic is the foundation of logical reasoning in AI, providing a simple yet powerful framework for representing and evaluating truth values of statements using logical connectives.

[COPY_8_MARK_2]

---

## Q3. Explain First-Order Logic (FOL) and how it extends Propositional Logic.

**Answer:**

### Introduction

First-Order Logic (FOL), also known as **Predicate Logic** or **First-Order Predicate Logic**, is a more powerful knowledge representation language than propositional logic. It is an extension of PL that can express complex natural language statements concisely.

### Why FOL is Needed

Propositional Logic has **limited expressive power** — it can only represent facts as true or false. It **cannot represent:**

- "Some humans are intelligent"
- "Sachin likes cricket"
- Relationships between objects

FOL overcomes these limitations by introducing objects, relations, and quantifiers.

### What FOL Assumes About the World

Unlike PL (which only assumes facts), FOL assumes:

1. **Objects:** Entities in the world — people, numbers, colors, wars, theories, etc.
2. **Relations:** Connections between objects
   - **Unary relations:** red, round, is adjacent
   - **N-ary relations:** sister of, brother of, has color, comes between
3. **Functions:** Mappings from objects to objects — father of, best friend, end of, etc.

### Syntax of FOL

FOL has two main parts: **Syntax** and **Semantics**

**Basic Elements:**

- **Constants:** Specific objects (e.g., Ravi, Ajay, 5)
- **Variables:** General objects (e.g., x, y, z)
- **Predicates:** Properties or relations (e.g., Brothers(x,y), Cat(x))
- **Functions:** Mappings (e.g., FatherOf(x))
- **Connectives:** ∧, ∨, ¬, →, ↔ (same as PL)
- **Quantifiers:** ∀ (for all), ∃ (there exists)

### Types of Sentences

**Atomic Sentences:**

- Most basic sentences formed from predicate + terms
- Format: Predicate(term1, term2, ..., termN)
- Example: Brothers(Ravi, Ajay), Cat(Chinky)

**Complex Sentences:**

- Made by combining atomic sentences using connectives
- Example: Brothers(Ravi, Ajay) ∧ Student(Ravi)

### Subject and Predicate

- **Subject:** The main part of the statement (e.g., "x")
- **Predicate:** The relation that binds atoms together (e.g., "is an integer")
- Example: "x is an integer" → Subject: x, Predicate: is an integer

### Conclusion

FOL significantly extends PL by introducing objects, relations, functions, and quantifiers, making it powerful enough to represent most natural language statements and complex real-world knowledge in AI systems.

[COPY_8_MARK_3]

---

## Q4. Explain Forward Chaining and Backward Chaining with an example. Compare them.

**Answer:**

### Introduction

Forward Chaining and Backward Chaining are two modes of the **inference engine** that apply logical rules to the knowledge base to infer new information. Both use **Modus Ponens** inference rule and work with first-order definite clauses.

### Horn and Definite Clauses

- **Definite Clause:** Disjunction of literals with **exactly one positive literal**. Example: (¬p ∨ ¬q ∨ k) ≡ p ∧ q → k
- **Horn Clause:** Disjunction of literals with **at most one positive literal**. All definite clauses are horn clauses.

### Forward Chaining

- Also called **forward deduction/reasoning** or **data-driven** inference.
- Starts from **known facts** and applies inference rules in the **forward direction** to extract more data until the goal is reached.
- Uses **Breadth-First Search** strategy.
- **Bottom-up approach.**

### Backward Chaining

- Also called **backward deduction/reasoning** or **goal-driven** inference.
- Starts from the **goal** and works **backward** through inference rules to find known facts that support the goal.
- Uses **Depth-First Search** strategy.
- **Top-down approach** — goal is broken into sub-goals.

### Example: "Prove Robert is Criminal"

**Given:** "It is a crime for an American to sell weapons to hostile nations. Country A, an enemy of America, has some missiles sold to it by Robert, an American."

**Forward Chaining Steps:**

1. Start with known facts: American(Robert), Enemy(A, America), Owns(A, T1), Missile(T1)
2. Apply rules → derive Sells(Robert, T1, A) and Hostile(A)
3. Apply Rule-1 → derive **Criminal(Robert)** ✓ (Goal reached!)

**Backward Chaining Steps:**

1. Start with goal: Criminal(Robert)
2. Find Rule-1 requires: American(Robert), Weapon(q), Sells(Robert,q,r), Hostile(r)
3. Break into sub-goals → verify each sub-goal using rules until all proved true ✓

### Comparison Table

| Property     | Forward Chaining              | Backward Chaining         |
| ------------ | ----------------------------- | ------------------------- |
| Approach     | Bottom-up                     | Top-down                  |
| Driven by    | Data-driven                   | Goal-driven               |
| Direction    | Facts → Goal                  | Goal → Facts              |
| Search       | Breadth-First                 | Depth-First               |
| Speed        | Slower (checks all rules)     | Faster (checks few rules) |
| Conclusions  | Can generate infinite         | Generates finite          |
| Applications | Planning, monitoring, control | Diagnostic, debugging     |

### Conclusion

Both methods are essential inference techniques in AI. Forward chaining is best when all data is available and we need to derive conclusions, while backward chaining is efficient when we have a specific goal to prove.

[COPY_8_MARK_4]

---

## Q5. Explain Bayes' Theorem with its derivation, terms, and a solved example.

**Answer:**

### Introduction

Bayes' Theorem (also called Bayes' Rule or Bayesian Reasoning) determines the probability of an event with uncertain knowledge. It relates **conditional probability** and **marginal probabilities** of two random events. Named after British mathematician **Thomas Bayes**.

### Derivation

From the **Product Rule** of probability:

- P(A ∧ B) = P(A|B) × P(B) ... (1)
- P(A ∧ B) = P(B|A) × P(A) ... (2)

Equating (1) and (2):

- P(A|B) × P(B) = P(B|A) × P(A)

**Bayes' Theorem:**

> **P(A|B) = [P(B|A) × P(A)] / P(B)**

### Key Terms

| Term           | Symbol  | Meaning                                                          |
| -------------- | ------- | ---------------------------------------------------------------- |
| **Posterior**  | P(A\|B) | Probability of hypothesis A given evidence B (what we calculate) |
| **Likelihood** | P(B\|A) | Probability of evidence B assuming hypothesis A is true          |
| **Prior**      | P(A)    | Probability of hypothesis before considering evidence            |
| **Marginal**   | P(B)    | Pure probability of the evidence                                 |

### General Form

When A₁, A₂, ..., Aₙ are mutually exclusive and exhaustive events:

> P(Aᵢ|B) = P(B|Aᵢ) × P(Aᵢ) / Σ P(B|Aⱼ) × P(Aⱼ)

### Solved Example: Meningitis Diagnosis

**Question:** What is the probability that a patient has meningitis given a stiff neck?

**Given:**

- P(stiff neck | meningitis) = 0.8
- P(meningitis) = 1/30,000
- P(stiff neck) = 0.02

**Solution:**
P(meningitis | stiff neck) = P(stiff neck | meningitis) × P(meningitis) / P(stiff neck)
= (0.8 × 1/30000) / 0.02
= 0.8 / 600
= **1/750 ≈ 0.0013**

**Interpretation:** About 1 patient out of 750 with a stiff neck has meningitis.

### Applications in AI

- Robot navigation (calculating next step based on executed steps)
- Weather forecasting
- Medical diagnosis
- Solving the Monty Hall problem
- Fundamental to **Bayesian inference** in modern AI systems

### Conclusion

Bayes' Theorem is the foundation of probabilistic reasoning in AI, allowing systems to update beliefs based on new evidence and handle uncertainty in real-world knowledge.

[COPY_8_MARK_5]

---

## Q6. Explain Probabilistic Reasoning. Why is it needed in AI?

**Answer:**

### Introduction

Probabilistic Reasoning is a way of knowledge representation where we apply the concept of **probability** to indicate **uncertainty** in knowledge. It combines **probability theory with logic** to handle situations where we are not completely sure about facts.

### Why is Probabilistic Reasoning Needed?

In classical logic (PL, FOL), we can express statements like A → B (if A is true, then B is true). But in the real world, we often encounter situations where **we are not sure whether A is true** — this situation is called **uncertainty**.

### Causes of Uncertainty

1. Information from **unreliable sources**
2. **Experimental errors**
3. **Equipment faults**
4. **Temperature variations**
5. **Climate change** and environmental factors

### Real-World Examples of Uncertainty

- "It will rain today" — probable but not certain
- "Behavior of someone in certain situations" — unpredictable
- "A match between two teams" — outcome uncertain

### Probability Basics

- **Probability** = the chance that an uncertain event will occur
- It is a numerical measure of the likelihood of an event
- **Range:** 0 ≤ P(A) ≤ 1
  - P(A) = 0 → Total uncertainty (event will not occur)
  - P(A) = 1 → Total certainty (event will definitely occur)

### Conditional Probability

The probability of event A occurring given that event B has already occurred:

> **P(A|B) = P(A ∧ B) / P(B)**

Where:

- P(A ∧ B) = Joint probability of A and B
- P(B) = Marginal probability of B

### When is Probabilistic Reasoning Needed?

1. When there are **unpredictable outcomes**
2. When specifications or possibilities become **too large to handle**
3. When an **unknown error** occurs during experiments
4. When dealing with **incomplete or noisy data**

### Methods of Probabilistic Reasoning

1. **Bayes' Rule** — computing conditional probabilities using prior knowledge
2. **Bayesian Statistics** — statistical inference using Bayes' theorem

### Solved Example

In a class, 70% like English and 40% like both English and Mathematics. What percent of English-liking students also like Mathematics?

P(Math | English) = P(Math ∧ English) / P(English) = 0.40 / 0.70 = **0.57 (57%)**

### Conclusion

Probabilistic reasoning is essential in AI for handling real-world uncertainty where classical logic falls short. It enables AI systems to make informed decisions even with incomplete or uncertain information.

[COPY_8_MARK_6]

---

## Q7. Explain the issues associated with Knowledge Representation in AI.

**Answer:**

### Introduction

The main objective of Knowledge Representation (KR) is to draw conclusions from knowledge. However, several issues arise when using KR techniques that must be carefully addressed for effective AI system design.

### Issue 1: Important Attributes

- Two attributes are of general importance: **instance** and **isa** (is-a).
- These attributes support the property of **inheritance**.
- **Instance:** Links a specific object to its class (e.g., "Fido is an instance of Dog")
- **Isa:** Links a class to its superclass (e.g., "Dog isa Animal")
- Challenge: Deciding which attributes are important enough to represent explicitly.

### Issue 2: Relationships Among Attributes

- Attributes used to describe objects are **themselves entities** that can be represented.
- The relationships between attributes, independent of specific knowledge they encode, may hold properties like:
  - **Inverses** (e.g., "parent of" is inverse of "child of")
  - Existence in an **isa hierarchy**
  - Techniques for **reasoning about values**
  - **Single-valued attributes** (each object has only one value for the attribute)

### Issue 3: Choosing the Granularity of Representation

This is a critical decision involving:

- **What are the primitives?** At what level should knowledge be represented?
- **Number of primitives:** Should we use a small or large number of low-level primitives, or high-level facts?
- **Trade-off:**
  - **High-level facts** may be insufficient to draw detailed conclusions
  - **Low-level primitives** may require a lot of storage space
- Finding the right balance is essential for system performance.

### Issue 4: Representing Sets of Objects

- Some properties apply to **sets of objects** collectively, not individually.
- Example: "There are more sheep than people in Australia" or "English speakers can be found all over the world"
- These facts describe properties of **entire groups**, requiring special set-based representations.
- Challenge: Including assertions about sets while maintaining individual object knowledge.

### Issue 5: Finding the Right Structure as Needed

- To describe a particular situation, it is important to find and **access the right structure**.
- This is done by:
  1. Selecting an **initial structure** based on available information
  2. **Revising the choice** as more information becomes available
- The dynamic nature of real-world situations makes this particularly challenging.

### Conclusion

These five issues — important attributes, attribute relationships, granularity, set representation, and structure selection — must be carefully considered when designing knowledge representation systems to ensure effective reasoning and problem-solving in AI.

[COPY_8_MARK_7]

---

## Q8. Explain the different Knowledge Representation Schemes/Approaches in AI.

**Answer:**

### Introduction

Knowledge Representation (KR) schemes are methods used to encode real-world knowledge in a form that AI systems can process and reason with. There are four main types of KR approaches, each with distinct characteristics.

### 1. Relational Knowledge

- Provides a framework to **compare two objects** based on equivalent attributes.
- Any instance in which **two different objects are compared** is a relational type of knowledge.
- It is the simplest form of KR.
- Typically stored in **tables or databases** where each row represents an object and columns represent attributes.
- **Example:** A table comparing students with attributes like Name, Age, Grade — allows comparison between different students.
- **Limitation:** No ability to perform inference or reasoning beyond direct comparison.

### 2. Inheritable Knowledge

- Knowledge obtained from **associated objects**.
- Prescribes a structure where **new objects** can be created that **inherit** all or a subset of attributes from existing objects.
- Based on the **isa (is-a) hierarchy** and **instance** relationships.
- **Example:** If "Dog isa Animal" and Animals have attribute "breathes," then Dog automatically inherits "breathes."
- **Advantage:** Reduces redundancy through inheritance; new knowledge automatically flows through the hierarchy.

### 3. Inferential Knowledge

- Knowledge that is **inferred from objects** through relations among objects.
- Goes beyond direct representation — the system can **derive new knowledge** from existing knowledge using inference rules.
- **Example:** A word alone is a simple syntax, but with other words in a phrase, the reader may infer more meaning. This inference within linguistics is called **semantics**.
- **Key Feature:** Uses logical reasoning (propositional logic, first-order logic) to draw conclusions.
- Used in **expert systems** and **automated reasoning**.

### 4. Procedural Knowledge

- A representation in which **control information** to use the knowledge is **embedded in the knowledge itself**.
- Knowledge is encoded in **procedures** — small programs that know how to do specific things and how to proceed.
- **Examples:** Computer programs, directions, recipes — these indicate specific use or implementation steps.
- **Key Feature:** Not just "what" to know, but "how" to use the knowledge.
- Combines knowledge with the process of applying it.

### Comparison Table

| Scheme      | Focus                | Example             | Reasoning           |
| ----------- | -------------------- | ------------------- | ------------------- |
| Relational  | Comparing objects    | Database tables     | No inference        |
| Inheritable | Object hierarchies   | Class inheritance   | Inheritance-based   |
| Inferential | Deriving conclusions | Logic-based systems | Logical inference   |
| Procedural  | How to use knowledge | Programs, recipes   | Procedure execution |

### Conclusion

Each KR scheme has its strengths and is suited for different types of problems. In practice, AI systems often combine multiple schemes to achieve comprehensive knowledge representation and effective reasoning.

[COPY_8_MARK_8]

---

---

# SECTION 2: 2-MARK ANSWERS

---

1. **What is a Knowledge-Based Agent?**
   A Knowledge-Based Agent maintains an internal state of knowledge, reasons over it, updates it after observations, and takes actions. It has two parts: Knowledge Base (KB) and Inference System.

2. **What is Knowledge Representation?**
   Knowledge Representation is a field of AI concerned with presenting real-world information in a form that computers can understand and use to solve problems or handle tasks.

3. **What is Propositional Logic?**
   Propositional Logic (PL) is the simplest form of logic where statements are made by propositions — declarative statements that are either true or false. It is also called Boolean logic.

4. **What is a Proposition?**
   A proposition is a declarative statement that is either true or false. It cannot be both. Questions, commands, and opinions are not propositions.

5. **What is a Tautology?**
   A tautology is a propositional formula that is always true regardless of the truth values of its variables. It is also called a valid sentence.

6. **What is a Contradiction?**
   A contradiction is a propositional formula that is always false regardless of the truth values of its variables.

7. **What is First-Order Logic (FOL)?**
   FOL is an extension of propositional logic that can represent objects, relations, and functions. It is also called Predicate Logic and is sufficiently expressive to represent natural language statements concisely.

8. **What are Atomic Sentences in FOL?**
   Atomic sentences are the most basic sentences in FOL, formed from a predicate symbol followed by a sequence of terms in parentheses. Example: Brothers(Ravi, Ajay).

9. **Differentiate between PL and FOL.**
   PL can only represent facts as true/false and has limited expressive power. FOL extends PL by adding objects, relations, functions, and quantifiers, allowing representation of complex natural language statements.

10. **What is an Inference Engine?**
    An inference engine is the component of an intelligent system that applies logical rules to the knowledge base to infer new information from known facts. It operates in forward chaining and backward chaining modes.

11. **What is a Horn Clause?**
    A Horn clause is a disjunction of literals with at most one positive literal. Example: (¬p ∨ ¬q ∨ k). All definite clauses are horn clauses.

12. **What is a Definite Clause?**
    A definite clause is a disjunction of literals with exactly one positive literal. Example: (¬p ∨ ¬q ∨ k), equivalent to p ∧ q → k.

13. **What is Forward Chaining?**
    Forward chaining is a data-driven, bottom-up reasoning method that starts from known facts and applies inference rules (Modus Ponens) in the forward direction until the goal is reached. Uses BFS strategy.

14. **What is Backward Chaining?**
    Backward chaining is a goal-driven, top-down reasoning method that starts from the goal and works backward through inference rules to find known facts that support the goal. Uses DFS strategy.

15. **What is Modus Ponens?**
    Modus Ponens is an inference rule that says: if P is true and P → Q is true, then Q is true. Both forward and backward chaining apply this rule.

16. **What is Probabilistic Reasoning?**
    Probabilistic reasoning combines probability theory with logic to handle uncertainty in knowledge. It is used when we are not sure about the truth of predicates and need to represent uncertain knowledge.

17. **What is Probability?**
    Probability is the numerical measure of the likelihood that an uncertain event will occur. Its value always ranges between 0 (total uncertainty) and 1 (total certainty): 0 ≤ P(A) ≤ 1.

18. **What is Conditional Probability?**
    Conditional probability P(A|B) is the probability of event A occurring given that event B has already occurred. Formula: P(A|B) = P(A ∧ B) / P(B).

19. **State Bayes' Theorem.**
    Bayes' Theorem: P(A|B) = [P(B|A) × P(A)] / P(B), where P(A|B) is posterior, P(B|A) is likelihood, P(A) is prior, and P(B) is marginal probability.

20. **What is Prior Probability?**
    Prior probability P(A) is the probability of a hypothesis before considering any evidence. It represents our initial belief about the hypothesis.

21. **What is Posterior Probability?**
    Posterior probability P(A|B) is the updated probability of a hypothesis after considering new evidence B. It is what Bayes' theorem calculates.

22. **Name the four Knowledge Representation Schemes.**
    The four KR schemes are: (1) Relational Knowledge, (2) Inheritable Knowledge, (3) Inferential Knowledge, and (4) Procedural Knowledge.

23. **What is Relational Knowledge?**
    Relational knowledge provides a framework to compare two objects based on equivalent attributes. It is the simplest KR form, typically stored in database-like tables.

24. **What is Inheritable Knowledge?**
    Inheritable knowledge is obtained from associated objects using isa hierarchies. New objects inherit all or a subset of attributes from existing objects, reducing redundancy.

25. **What is Procedural Knowledge?**
    Procedural knowledge is a representation where control information is embedded in the knowledge itself. Knowledge is encoded in procedures (programs) that know how to do specific things.

26. **What are the causes of Uncertainty in AI?**
    Main causes: unreliable information sources, experimental errors, equipment faults, temperature variations, and climate change. These make predicates uncertain.

27. **Name the applications of Bayes' Theorem in AI.**
    Applications include: robot navigation, weather forecasting, medical diagnosis, solving the Monty Hall problem, and it is fundamental to Bayesian inference in modern AI.

28. **What are the issues in Knowledge Representation?**
    Five main issues: (1) Important Attributes, (2) Relationships Among Attributes, (3) Choosing Granularity of Representation, (4) Representing Sets of Objects, (5) Finding Right Structures.

29. **What is the isa relationship in KR?**
    The isa (is-a) relationship links a class to its superclass in a hierarchy. It supports inheritance, where subclasses inherit attributes from superclasses. Example: Dog isa Animal.

30. **Differentiate Forward and Backward Chaining.**
    Forward chaining is bottom-up, data-driven, uses BFS, and starts from facts to goal. Backward chaining is top-down, goal-driven, uses DFS, and starts from goal to facts.

[COPY_ALL_2_MARKS]
