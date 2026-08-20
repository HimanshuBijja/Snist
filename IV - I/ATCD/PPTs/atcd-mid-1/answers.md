# ATCD (9EC07) — Mid-1 Exam Prep · Units 1–3

Automata Theory & Compiler Design · B.Tech IV Year I Sem (CSE/IT) · SNIST
Built from `blueprint.png` (First Mid, September 2025) and the three unit PDFs in this folder.

---

## 1. Exam pattern analysis

**Paper:** 2 Hours · Max Marks **30** · Part-A 12 + Part-B 18

### Part-A — COMPULSORY, 6 × 2 = 12 marks

| Q | Unit | BCLL | CO | Task (exact verb from the paper) |
|---|---|---|---|---|
| 1 | Unit-I | L3 | CO1 | **Design** a DFA over Σ={a,b}: (i) all strings with **exactly one a**, (ii) all strings with **at least one a** |
| 2 | Unit-I | L1 | CO1 | **Define** finite state machine **and** finite automata |
| 3 | Unit-II | L2 | CO2 | **What is meant by** ambiguous grammar? **Show that** S→aSb/aaSb/ε is ambiguous |
| 4 | Unit-II | L4 | CO2 | **Find the simplified** regular expression for r(r\*r + r\*) + r\* |
| 5 | Unit-III | L1 | CO3 | **Give the formal definition** of Turing Machine |
| 6 | Unit-III | L3 | CO3 | **Convert** the grammar S→aSb, S→ab into a PDA |

**Critical observation — 4 of the 6 Part-A questions ask TWO things at once.**
Q1 = two DFAs. Q2 = two definitions (FSM *and* FA — they are not the same thing). Q3 = a definition *and* a proof. Q6 = build the PDA *and*, to be safe, show a trace. An answer that covers only one half loses half the marks.

Unit split in Part-A: **Unit-I 2 questions, Unit-II 2 questions, Unit-III 2 questions** — perfectly balanced, so no unit can be skipped.

### Part-B — answer any THREE out of FOUR, 3 × 6 = 18 marks

| Q | Unit | BCLL | CO | Task | Marks |
|---|---|---|---|---|---|
| 7 | Unit-I | L6 | CO1 | (i) DFA for strings starting with '10' and ending with '01' · (ii) DFA for **even number of 0's AND even number of 1's** | 3 + 3 |
| 8 | Unit-II | L3 / L4 | CO2 | (i) FA for the RE **(1\*0 + 10\*)** · (ii) Convert S→ABa, A→aab, B→Ac into **CNF** | 3 + 3 |
| 9 | Unit-III | L6 | CO3 | **Procedure** to convert CFG→PDA **and** convert S→B\|aAA, A→aBB\|a, B→bBB\|A, C→a | 6 |
| 10 | I / II / III | L1 | CO1–3 | a) Chomsky Hierarchy of languages · b) Define Greibach Normal Form · c) Define PDA + obtain a PDA for balanced parentheses | 2 + 2 + 2 |

**Question-to-unit mapping: Q7 → Unit-1, Q8 → Unit-2, Q9 → Unit-3, Q10 = parts a/b/c, one per unit.**
The blueprint covers Units I–III and the folder holds exactly Units 1, 2 and 3, so the mapping is direct — no re-mapping was needed.

### Strategy

1. **Q10 is the cheapest 6 marks on the paper.** Three L1 definition-level parts, one per unit. Do it **first** in Part-B — it banks marks fastest.
2. Then pick **two of Q7 / Q8 / Q9**. All three are *construction* questions, not essays — you either can build the machine or you cannot. Q7 (two DFAs) is normally the most mechanical; Q9 is the longest (simplify → GNF → PDA rules → trace).
3. **Q8(ii) CNF and Q9 both hinge on grammar normalisation.** Drilling CNF/GNF unlocks two Part-B questions plus Q10(b).
4. **Time plan:** Part-A 6 × 5 min = 30 min · Part-B 3 × 22 min = 66 min · ~20 min buffer to redraw diagrams neatly. Automata answers are graded on the **diagram**, so draw it large and label every state and every edge.
5. **Always give the 5-tuple / 7-tuple alongside the diagram.** Separate marks are awarded for the formal definition and for the transition diagram/table.
6. **Note on Q7(i):** the paper writes "over {a,b}" but the required substrings '10' and '01' are over {0,1}. Answer over **Σ = {0,1}** and state that assumption in one line — it is the only consistent reading.

---

## 2. Solved blueprint paper

### PART — A  (6 × 2 = 12 Marks, compulsory)

---

**Q1. Design a DFA for the language over Σ={a,b} that accepts (i) all strings with exactly one a (ii) all strings with atleast one a.**

**(i) Exactly one 'a'** — RE = **b\*ab\***

M = ({q0, q1, q2}, {a, b}, δ, q0, {q1})

DIAGRAM: →q0 --a--> ((q1)) --a--> q2 ; q0 --b--> q0 (self-loop) ; q1 --b--> q1 (self-loop) ; q2 --a,b--> q2 (trap)

| State | a | b |
|---|---|---|
| →q0 | q1 | q0 |
| \*q1 | q2 | q1 |
| q2 | q2 | q2 |

q0 = no 'a' yet · q1 = exactly one 'a' (**final**) · q2 = two or more a's (dead/trap state).

**(ii) At least one 'a'** — RE = **b\*a(a+b)\***

M = ({q0, q1}, {a, b}, δ, q0, {q1})

DIAGRAM: →q0 --a--> ((q1)) ; q0 --b--> q0 (self-loop) ; q1 --a,b--> q1 (self-loop)

| State | a | b |
|---|---|---|
| →q0 | q1 | q0 |
| \*q1 | q1 | q1 |

Once one 'a' has been seen the machine stays in the final state forever.

---

**Q2. Define finite state machine and finite automata.**

**Finite State Machine (FSM):** a mathematical model of a system having a **finite number of states**, which moves from one state to another on receiving an input symbol and **may produce an output**. It is the general model — machines that produce output are the **Mealy** machine (output on the transition) and the **Moore** machine (output on the state).

**Finite Automaton (FA):** a finite state machine **with no output** — it only **accepts or rejects** the input string, decided by whether the machine halts in a final state. Formally a **5-tuple (Q, Σ, δ, q0, F)** where Q = finite set of states, Σ = finite input alphabet, δ = transition function, q0 ∈ Q = initial state, F ⊆ Q = set of final states. An FA is classified as **DFA** or **NFA**.

*The line the examiner wants:* every FA is an FSM, but an FSM may produce output whereas an FA only decides acceptance.

---

**Q3. What is meant by Ambiguous grammar? Show that the following grammar is ambiguous: S → aSb / aaSb / ε**

**Ambiguous grammar:** a grammar is said to be **ambiguous** if there exists **more than one leftmost derivation**, or **more than one rightmost derivation**, or **more than one parse tree** for the **same input string**. If no such string exists the grammar is **unambiguous**.

**Proof for the given grammar** — take the string **w = aaabb**.

**Derivation 1** (apply S → aSb first):
S ⇒ aSb ⇒ a(aaSb)b ⇒ a·aa·ε·b·b = **aaabb**

**Derivation 2** (apply S → aaSb first):
S ⇒ aaSb ⇒ aa(aSb)b ⇒ aa·a·ε·b·b = **aaabb**

**Parse tree 1:** root S → a S b ; inner S → a a S b ; innermost S → ε
**Parse tree 2:** root S → a a S b ; inner S → a S b ; innermost S → ε

The single string **aaabb** has **two distinct leftmost derivations and two distinct parse trees**. Hence the grammar is **ambiguous**. ∎

---

**Q4. Find the simplified regular expression for r(r\*r + r\*) + r\*.**

Applying the identity rules of regular expressions:

1. **r\*r = r+**  (identity: rr\* = r\*r = r+) ⟹ bracket becomes (r+ + r\*)
2. **r+ + r\* = r\***  (since r\* = ε + r+, so r+ is absorbed) ⟹ expression becomes r·r\* + r\*
3. **r·r\* = r+** ⟹ expression becomes r+ + r\*
4. **r+ + r\* = r\***

**Simplified regular expression = r\***

---

**Q5. Give the formal definition of Turing Machine.**

A Turing Machine is a collection of **7 components — M = (Q, Σ, T, δ, q0, B, F)** where:

- **Q** — the finite set of states
- **Σ** — the finite set of input symbols
- **T** — the tape symbols (Σ ⊆ T)
- **q0** — the initial state
- **F** — the set of final states
- **B** — the **blank symbol**, used as an end marker for the input
- **δ** — the transition / mapping function, **δ : Q × T → Q × T × {L, R}**

The mapping function maps a state and the tape symbol under the head to the **next state, the symbol to be written, and the direction of head movement**; this triple is called the *program* of the Turing machine.
**Example: δ(q0, a) = (q1, A, R)** — in state q0 on reading 'a', go to state q1, replace a by A, and move the head **right**.

---

**Q6. Convert the following grammar into PDA:  S → aSb,  S → ab**

Each production already begins with a terminal, so the CFG→PDA rules apply directly.

**PDA:  M = ({q}, {a, b}, {S, a, b}, δ, q, S, ∅)** — a **single state**, accepting by **empty stack**.

Transition rules:
- **R1:** δ(q, ε, S) = {(q, aSb), (q, ab)}  — one rule per production (Step 4)
- **R2:** δ(q, a, a) = {(q, ε)}  — match terminal a (Step 5)
- **R3:** δ(q, b, b) = {(q, ε)}  — match terminal b (Step 5)

**Trace of the string "aabb":**
(q, aabb, S) ⊢ (q, aabb, aSb) [R1] ⊢ (q, abb, Sb) [R2] ⊢ (q, abb, abb) [R1] ⊢ (q, bb, bb) [R2] ⊢ (q, b, b) [R3] ⊢ (q, ε, ε) [R3] → **ACCEPT** (stack empty)

---
### PART — B  (answer any THREE out of FOUR, 3 × 6 = 18 Marks)

---

**Q7. (i) Design DFA which accepts all strings over {0,1} starting with '10' and ending with '01'.  (3M)**

*(The paper prints "over {a,b}" but the required substrings 10 and 01 are over {0,1}; solved over Σ = {0,1}.)*

The DFA does two jobs: **verify the prefix "10"**, then **track the last two symbols** until the string ends with "01". Note that **"101" is accepted** — the prefix and suffix are allowed to overlap.

**M = ({q0, q1, A, B, F, D}, {0, 1}, δ, q0, {F})**

| State | Meaning | 0 | 1 |
|---|---|---|---|
| →q0 | start | D | q1 |
| q1 | seen "1" | A | D |
| A | prefix OK, last symbol = 0 | A | **F** |
| B | prefix OK, last symbol = 1, does not end in 01 | A | B |
| \*F | prefix OK and **ends with "01"** | A | B |
| D | dead / trap | D | D |

DIAGRAM: →q0 --1--> q1 --0--> A --1--> ((F)) ; A --0--> A ; F --0--> A ; F --1--> B ; B --0--> A ; B --1--> B ; q0 --0--> D ; q1 --1--> D ; D --0,1--> D

**Verification:** "101" → q0,q1,A,F ✔ · "1001" → q0,q1,A,A,F ✔ · "10011" → halts in B ✘ · "0101" → D ✘ (wrong prefix) · "1010" → halts in A ✘.

---

**Q7. (ii) Design DFA which accepts all strings containing both even number of 0's and even number of 1's.  (3M)**

Track the **parity of the 0's and the parity of the 1's** — 2 × 2 = **4 states**. A 0 flips the 0-parity, a 1 flips the 1-parity.

**M = ({q0, q1, q2, q3}, {0, 1}, δ, q0, {q0})**

| State | (0's, 1's) parity | 0 | 1 |
|---|---|---|---|
| →\*q0 | (even, even) — **final** | q1 | q2 |
| q1 | (odd, even) | q0 | q3 |
| q2 | (even, odd) | q3 | q0 |
| q3 | (odd, odd) | q2 | q1 |

DIAGRAM: draw the four states as a square — q0 top-left, q1 top-right, q2 bottom-left, q3 bottom-right. Horizontal edges (both directions) are labelled **0**: q0↔q1 and q2↔q3. Vertical edges (both directions) are labelled **1**: q0↔q2 and q1↔q3. Start arrow and double circle both on **q0**.

The **start state is also the only final state**, because ε has zero 0's and zero 1's — both even — so ε is accepted.
**Check:** "1100" → q2,q0,q1,q0 ✔ · "0101" → q1,q3,q2,q0 ✔ · "011" → q1,q3,q1 ✘.

---

**Q8. (i) Construct finite automata for the regular expression (1\*0 + 10\*).  (3M)**

**Step 1 — split the RE.** L = L1 ∪ L2 where **L1 = 1\*0 = {0, 10, 110, 1110, …}** and **L2 = 10\* = {1, 10, 100, 1000, …}**.

**Step 2 — build the NFA with ε-moves** (union rule, Case 4 of the five RE→NFA rules):
DIAGRAM (branch 1): q0 --ε--> p0 ; p0 --1--> p0 (self-loop) ; p0 --0--> ((p1))
DIAGRAM (branch 2): q0 --ε--> r0 ; r0 --1--> ((r1)) ; r1 --0--> r1 (self-loop)

**Step 3 — remove ε-moves and apply the subset construction to get the DFA:**

| State | Meaning | 0 | 1 |
|---|---|---|---|
| →S | start | \*A | \*B |
| \*A | read "0" — accepted by 1\*0 | D | D |
| \*B | read "1" — accepted by 10\* | \*C | E |
| \*C | "10" — accepted by both branches | \*C | D |
| E | "11…" — still building 1\*0 | \*F | E |
| \*F | "1…10" — accepted by 1\*0 | D | D |
| D | dead / trap | D | D |

DIAGRAM: →S --0--> ((A)) ; S --1--> ((B)) ; B --0--> ((C)) ; C --0--> C (self-loop) ; B --1--> E ; E --1--> E (self-loop) ; E --0--> ((F)) ; every unlisted move goes to D.

**Final states = {A, B, C, F}.**
**Check:** "0" ✔ · "1" ✔ · "10" ✔ · "100" ✔ · "110" ✔ · "101" ✘ · "1100" ✘.

---

**Q8. (ii) Convert the following grammar into CNF:  S → ABa,  A → aab,  B → Ac  (3M)**

**CNF requirement:** every production must be **A → BC** (exactly two non-terminals) or **A → a** (a single terminal); the start symbol may also give ε.

The grammar has **no null, unit or useless productions**, so start directly with terminal removal.

**Step 1 — replace every terminal occurring in a right-hand side of length ≥ 2 by a new variable.**
Introduce **Xa → a, Xb → b, Xc → c**:
- S → A B **Xa**
- A → **Xa Xa Xb**
- B → A **Xc**

**Step 2 — break every right-hand side longer than two symbols into a chain of length two.**
- S → A **P1** with **P1 → B Xa**
- A → Xa **P2** with **P2 → Xa Xb**
- B → A Xc  (already exactly two ✔)

**Final grammar in Chomsky Normal Form:**

**S → A P1**
**P1 → B Xa**
**A → Xa P2**
**P2 → Xa Xb**
**B → A Xc**
**Xa → a**
**Xb → b**
**Xc → c**

Every production is now either two non-terminals or a single terminal. ∎

---

**Q9. Write the procedure to convert CFG to PDA and also convert the following CFG to PDA: S → B | aAA, A → aBB | a, B → bBB | A, C → a  (6M)**

**PROCEDURE — CFG to PDA (5 steps):**

1. **Step 1:** Convert the given productions of the CFG into **GNF (Greibach Normal Form)**.
2. **Step 2:** The PDA will have **only one state {q}**.
3. **Step 3:** The **initial symbol of the CFG becomes the initial stack symbol** of the PDA.
4. **Step 4:** For every **non-terminal**, add the rule **δ(q, ε, A) = (q, α)** where the production is **A → α**.
5. **Step 5:** For every **terminal** symbol, add the rule **δ(q, a, a) = (q, ε)**.

The PDA so constructed accepts by **empty stack**, and L(PDA) = L(CFG).

**CONVERSION OF THE GIVEN GRAMMAR:**

**Step A — remove useless symbols.** The variable **C never appears on the right-hand side of any production**, so it is unreachable from S and therefore **useless**. Delete **C → a**.

Remaining:  S → B | aAA ; A → aBB | a ; B → bBB | A

**Step B — remove unit productions.** The unit productions are **S → B** and **B → A**.
- **B → A:** add A's non-unit productions to B ⟹ **B → bBB | aBB | a**
- **S → B:** add B's (now non-unit) productions to S ⟹ **S → aAA | bBB | aBB | a**

**Step C — simplified grammar:**

**S → aAA | aBB | bBB | a**
**A → aBB | a**
**B → bBB | aBB | a**

Every production is now *a terminal followed by zero or more non-terminals*, so the grammar is already in **GNF** (there are no ε-productions to remove).

**Step D — the PDA.**

**M = ({q}, {a, b}, {S, A, B, a, b}, δ, q, S, ∅)** — one state, accepts by **empty stack**.

Transition function δ:
- **R1:** δ(q, ε, S) = {(q, aAA), (q, aBB), (q, bBB), (q, a)}
- **R2:** δ(q, ε, A) = {(q, aBB), (q, a)}
- **R3:** δ(q, ε, B) = {(q, bBB), (q, aBB), (q, a)}
- **R4:** δ(q, a, a) = {(q, ε)}
- **R5:** δ(q, b, b) = {(q, ε)}

**Verification — trace the string "aaa":**
(q, aaa, S) ⊢ (q, aaa, aAA) [R1] ⊢ (q, aa, AA) [R4] ⊢ (q, aa, aA) [R2] ⊢ (q, a, A) [R4] ⊢ (q, a, a) [R2] ⊢ (q, ε, ε) [R4] → **ACCEPT** (stack empty). ∎

---

**Q10 (a). Explain about Chomsky Hierarchy of languages.  (2M)**

According to **Noam Chomsky** there are **four types of grammars** — Type 0, Type 1, Type 2 and Type 3 — each more restricted than the one before it, forming a strict hierarchy.

| Type | Grammar accepted | Language accepted | Automaton | Production form |
|---|---|---|---|---|
| **Type 0** | Unrestricted grammar | Recursively enumerable | **Turing Machine** | α → β, α contains ≥ 1 non-terminal |
| **Type 1** | Context-sensitive grammar | Context-sensitive | **Linear Bounded Automaton** | αAβ → αγβ, γ non-empty |
| **Type 2** | Context-free grammar | Context-free | **Pushdown Automaton** | A → γ |
| **Type 3** | Regular grammar | Regular | **Finite State Automaton** | X → a or X → aY |

**Containment: Type 3 ⊂ Type 2 ⊂ Type 1 ⊂ Type 0** — every regular language is context-free, every context-free language is context-sensitive, and every context-sensitive language is recursively enumerable.

---

**Q10 (b). Define Greiback Normal Form.  (2M)**

A CFG is in **Greibach Normal Form (GNF)** if **all** of its production rules satisfy one of the following conditions:

1. The **start symbol generates ε** — e.g. A → ε
2. A non-terminal generates **a single terminal** — e.g. A → a
3. A non-terminal generates **a terminal followed by any number of non-terminals** — e.g. S → aASB

In short, the **right-hand side of every production must begin with exactly one terminal**, followed only by variables.

**Example:** G1 = { S → aAB | aB, A → aA | a, B → bB | b } is in GNF.
Two **lemmas** are used to obtain GNF: **Lemma 1** (substitution of a leading variable by its productions) and **Lemma 2** (removal of left recursion by introducing a new variable). GNF is the form required **before converting a CFG into a PDA**.

---

**Q10 (c). Define PushDown automata. Obtain a PDA to accept strings of balanced parantheses.  (2M)**

**Definition:** A **Pushdown Automaton** is a finite automaton **augmented with a stack** as auxiliary memory; it accepts exactly the **context-free languages**. It is a **7-tuple  M = (Q, Σ, Γ, δ, q0, Z, F)** where **Q** = the finite set of states, **Σ** = the input set, **Γ** = the stack symbols which can be pushed and popped from the stack, **q0** = the initial state, **Z ∈ Γ** = the start symbol of the stack, **F** = the set of final states, and **δ** = the mapping function used for moving from the current state to the next state. If **δ(q, a, Z) has at most one element** the machine is a **DPDA**, and the language it accepts is a **DCFL**.

**PDA for balanced parentheses,  L = { balanced strings over { ( , ) } }:**

**M = ({q0, q1}, {(, )}, {Z0, (}, δ, q0, Z0, {q1})**

- δ(q0, **(** , Z0) = (q0, **(** Z0)  — push the first '('
- δ(q0, **(** , **(** ) = (q0, **( (** )  — push every further '('
- δ(q0, **)** , **(** ) = (q0, ε)  — pop one '(' for each ')'
- δ(q0, ε, Z0) = (q1, Z0)  — stack back down to Z0 ⟹ balanced ⟹ **accept**

**Logic:** **push on '(' and pop on ')'**. If a ')' arrives while Z0 is on top there is no matching '(' → **reject**. If the input ends while '(' symbols remain on the stack, some '(' is unmatched → **reject**.
**Trace "(())":** (q0, (()), Z0) ⊢ (q0, ()), (Z0) ⊢ (q0, )), ((Z0) ⊢ (q0, ), (Z0) ⊢ (q0, ε, Z0) ⊢ (q1, ε, Z0) → **ACCEPT**.

---

## 3. Syllabus map

| Source file | Unit | Topics covered |
|---|---|---|
| `Unit-1_ATCD_Languages-Definitions_FINITE AUTOMATA.pdf` | **Unit-I** | Strings, alphabet, language, operations · finite automaton model · acceptance of strings and languages · **DFA** (14 worked design problems) · **NFA** + formal 5-tuple · **ε-NFA**, ε-closure and its computation · removing ε-transitions · **NFA → DFA** (subset construction) · **ε-NFA → DFA** · **Minimization of DFA** (7 steps) |
| `Unit-2_ATCD_RE.pdf` | **Unit-II** | **Regular expressions** (12 worked examples) · **identity rules** · RE → NFA (5 cases) → DFA · **Arden's theorem** · **DFA → RE** · **closure properties** of regular sets (9) · **Grammar** 4-tuple · derivations, L(G) · **Chomsky hierarchy** (Types 0–3) · **CFG** definition · **derivation / parse trees**, sentential form · **LMD and RMD** · **ambiguous grammar** · **minimization of CFG** (useless symbols, ε-productions, unit productions) · **CNF** · **GNF** |
| `Unit-3_ATCD_PUSHDOWN AUTOMATA _TM.pdf` | **Unit-III** | **Instantaneous Description (ID)** and turnstile notation · PDA design (0ⁿ1ᵐ0ⁿ) · **CFG → PDA conversion** (5 steps + 2 worked examples) · **DPDA** 7-tuple and **DCFL** · **Turing Machine** — features, **formal 7-tuple definition**, basic model, design of TM (aba, 0ⁿ1ⁿ) · **recursively enumerable languages** |

**Where each blueprint question is sourced from:** Q1, Q2, Q7 → Unit-1 PDF · Q3, Q4, Q8, Q10(b) → Unit-2 PDF · Q5, Q6, Q9, Q10(c) → Unit-3 PDF · Q10(a) Chomsky hierarchy → Unit-2 PDF (it is taught there, though the paper labels it Unit-I).

---
## 4. Part-A bank — predicted 2-mark questions

### UNIT-1 — Languages, Definitions and Finite Automata

**Q. Define alphabet, string and language.**
An **alphabet (Σ)** is a finite non-empty set of symbols, e.g. Σ = {0, 1}. A **string** is a finite sequence of symbols taken from Σ, e.g. 0110. A **language (L)** is a set of strings over Σ, i.e. L ⊆ Σ\*, e.g. L = {0ⁿ1ⁿ}. Σ\* denotes the set of **all** strings over Σ including ε.

**Q. What is ε (epsilon) and what is Σ\*?**
**ε** is the empty string — the string of **length zero**. **Σ\*** is the **Kleene closure** of Σ: the set of all strings of any length over Σ, including ε. **Σ⁺ = Σ\* − {ε}** is the positive closure, which excludes ε.

**Q. Define finite automaton and give its formal definition.**
A **finite automaton** is an abstract machine with a finite number of states that reads an input string and either **accepts or rejects** it. It is a **5-tuple (Q, Σ, δ, q0, F)** — Q states, Σ input alphabet, δ transition function, q0 initial state, F ⊆ Q final states. It is classified into **DFA** and **NFA**.

**Q. Define Deterministic Finite Automaton (DFA).**
A DFA is a 5-tuple **(Q, Σ, δ, q0, F)** where the transition function is **δ : Q × Σ → Q**. From **every state, for every input symbol, there is exactly one next state** — no choice and no ε-moves. Hence the path for any input string is unique.

**Q. Define Non-deterministic Finite Automaton (NFA).**
An NDFA is a 5-tuple **(Q, Σ, δ, q0, F)** where **δ : Q × Σ → 2^Q**. For a particular input symbol the machine **can move to any combination of states**, so the exact next state cannot be determined. The **power set 2^Q** is used because a transition may go to any subset of Q.

**Q. Differentiate DFA and NFA.**
**DFA:** δ : Q × Σ → Q, exactly one move per symbol, no ε-moves, harder to construct, needs more states. **NFA:** δ : Q × Σ → 2^Q, zero or many moves per symbol, ε-moves allowed, easier to construct. **Both accept exactly the same class of languages — the regular languages**, and every NFA has an equivalent DFA.

**Q. Define ε-NFA.**
An **ε-NFA** is a quintuple **A = (Q, Σ, δ, q0, F)** where **δ : Q × (Σ ∪ {ε}) → 2^Q**. It may change state **without consuming any input symbol**. Note that **ε is never a member of Σ**.

**Q. Define ε-closure of a state.**
The **ε-closure of a state q**, written ε-Closure(q), is the set containing **q itself together with all states reachable from q by following only ε-transitions**. It is computed by repeatedly adding new states until no new state can be added. Example: ε-Closure(P) = {P, Q, R, S}.

**Q. When is a string said to be accepted by a finite automaton?**
A string **w is accepted** by an FA if, starting from the initial state q0 and consuming all symbols of w according to δ, the machine ends in **some final state**, i.e. **δ̂(q0, w) ∈ F**. Otherwise w is rejected. The set of all accepted strings is L(M), the language of the machine.

**Q. What is a trap state (dead state)?**
A **trap / dead state** is a non-final state from which **every transition loops back to itself**, so once entered the string can never be accepted. It is added to make a partially specified DFA **complete** (total), since a DFA must define a move for every state–symbol pair.

**Q. What is the transition function of a DFA? Give the extended transition function.**
δ : Q × Σ → Q maps a state and one input symbol to the next state. The **extended transition function δ̂ : Q × Σ\* → Q** handles whole strings and is defined as **δ̂(q, ε) = q** and **δ̂(q, wa) = δ(δ̂(q, w), a)**.

**Q. Write the steps for converting an NFA to a DFA.**
**Step 1:** Initially Q' = ∅. **Step 2:** Add q0 of the NFA to Q' and find the transitions from this start state. **Step 3:** In Q', find the possible **set of states** for each input symbol; if that set is not already in Q', add it. **Step 4:** In the DFA, the **final states are all those sets that contain a final state of the NFA**.

**Q. Write the steps for converting an ε-NFA to a DFA.**
**Step 1:** Take the **ε-closure of the start state** of the NFA as the start state of the DFA. **Step 2:** For each input symbol find the union of the transition values and their ε-closures. **Step 3:** If a new state is found, repeat Step 2 for it. **Step 4:** Repeat until no new state appears. **Step 5:** Mark as final any DFA state that contains a final state of the NFA.

**Q. Write the rule used to remove ε-transitions from an NFA.**
**δ'(q, a) = ε-closure(δ(δ̂(q, ε), a))** where **δ̂(q, ε) = ε-closure(q)**. The step is repeated for each input symbol and each state, and the resulting states are used to build the transition table of the equivalent NFA without ε.

**Q. What is minimization of a DFA? Why is it done?**
Minimization means **reducing the number of states** of a given FA by removing **unreachable** states and merging **equivalent** states, producing an FSM with no redundant states. It is done to obtain the smallest machine accepting the same language, saving memory and simplifying implementation.

**Q. Write the steps to minimize a DFA.**
**1.** Remove all states unreachable from the initial state. **2.** Draw the transition table for all pairs of states. **3.** Split the table into **T1 (final states)** and **T2 (non-final states)**. **4.** Find similar rows (states with identical transitions on every symbol) and remove one of them. **5.** Repeat for both tables. **6.** Combine the reduced T1 and T2 — the result is the minimized DFA.

**Q. What is an unreachable state?**
A state that **cannot be reached from the initial state by any sequence of transitions**. It plays no part in accepting any string, so it is deleted in **Step 1 of DFA minimization**.

**Q. Design a DFA over Σ={0,1} accepting all strings that start with 1 and end with 0.**
RE = **1(0+1)\*0**. DIAGRAM: →q0 --1--> q1 --0--> ((q2)) ; q1 --1--> q1 ; q2 --1--> q1 ; q2 --0--> q2 ; q0 --0--> dead. q2 is final; from q2 a further 1 returns to q1 because the string no longer ends with 0.

**Q. Design a DFA over Σ={0,1} that accepts only the input 101.**
DIAGRAM: →q0 --1--> q1 --0--> q2 --1--> ((q3)) ; every other transition, and all transitions from q3, go to the **dead state**. Only the exact string 101 reaches q3.

**Q. Design a DFA over Σ={0,1} accepting all strings ending with 00.**
DIAGRAM: →q0 --0--> q1 --0--> ((q2)) ; q0 --1--> q0 ; q1 --1--> q0 ; q2 --0--> q2 ; q2 --1--> q0. The three states mean "no trailing 0", "one trailing 0", "two or more trailing 0's" (final).

**Q. Design a DFA over Σ={0,1} accepting all strings with three consecutive 0's.**
DIAGRAM: →q0 --0--> q1 --0--> q2 --0--> ((q3)) ; q0 --1--> q0 ; q1 --1--> q0 ; q2 --1--> q0 ; q3 --0,1--> q3. Any 1 before three 0's are seen resets the count to q0; once q3 is reached the machine stays final.

**Q. Design a DFA over Σ={0,1} that accepts strings with no consecutive 1's.**
DIAGRAM: →((q0)) --0--> q0 ; q0 --1--> ((q1)) ; q1 --0--> q0 ; q1 --1--> q2 (dead) ; q2 --0,1--> q2. **q0 and q1 are both final**; the dead state q2 is entered only when two 1's occur together.

**Q. Design a DFA that checks whether a given binary number is divisible by 3.**
Use **three states q0, q1, q2 for remainders 0, 1, 2**. Reading a bit b changes the value to 2n + b, so: q0 --0--> q0, q0 --1--> q1, q1 --0--> q2, q1 --1--> q0, q2 --0--> q1, q2 --1--> q2. **q0 is the final state** (remainder 0).

**Q. Design a DFA over Σ={0,1} accepting strings with an odd number of 1's and any number of 0's.**
Two states track the parity of 1's: →q0 --1--> ((q1)) --1--> q0 ; q0 --0--> q0 ; q1 --0--> q1. **q1 (odd number of 1's) is the final state**; 0's are ignored by self-loops.

**Q. Design a DFA over Σ={a,b} accepting strings in which the total number of a's is divisible by 3.**
Three states q0, q1, q2 counting a's modulo 3: q0 --a--> q1 --a--> q2 --a--> q0, with **b self-loops on every state**. **q0 is the start and the only final state.**

**Q. Design an NFA over Σ={0,1} accepting all strings ending with 01.**
DIAGRAM: →q0 --0,1--> q0 (self-loop) ; q0 --0--> q1 --1--> ((q2)). The self-loop non-deterministically "guesses" where the final 01 begins — this is exactly why an NFA is easier to design than the equivalent DFA.

**Q. Design an NFA where the 3rd symbol from the right end is 'a'.**
DIAGRAM: →q0 --a,b--> q0 (self-loop) ; q0 --a--> q1 --a,b--> q2 --a,b--> ((q3)). The machine guesses the position of the 'a' that is third from the right and then reads exactly two more symbols.

---

### UNIT-2 — Regular Expressions and Context Free Grammars

**Q. Define regular expression and regular language.**
A **regular expression** is a simple expression that describes the language accepted by a finite automaton — a sequence of patterns that defines a string. The languages accepted by some regular expression are called **regular languages**. REs are used to match character combinations in strings.

**Q. What is the meaning of a\*, a⁺ and a in a regular expression?**
**a\*** means **zero or more** occurrences of a, generating {ε, a, aa, aaa, …}. **a⁺** means **one or more** occurrences, generating {a, aa, aaa, …}, i.e. a⁺ = a\* − {ε}. A bare **a** means exactly one occurrence.

**Q. Write any four identity rules of regular expressions.**
**(1)** ε + r = r + ε = r  **(2)** εr = rε = r  **(3)** ∅r = r∅ = ∅  **(4)** ∅\* = ε  **(5)** r + r = r  **(6)** r\*r\* = r\*  **(7)** rr\* = r\*r = r⁺  **(8)** (r\*)\* = r\*  **(9)** ε + rr\* = r\*  **(10)** (r + s)\* = (r\*s\*)\* .

**Q. Write the RE for all strings over Σ={0,1} starting with 1 and ending with 0.**
**1(0 + 1)\*0** — generates {10, 100, 1110, 1010, 1000, …}. The leading 1 and trailing 0 are fixed and the middle allows any combination of 0's and 1's.

**Q. Write the RE for strings over Σ={a,b} that start and end with 'a' with any number of b's in between.**
**a b\* a** — generates {aa, aba, abba, abbba, …}.

**Q. Write the RE for a string having at least one 0 and at least one 1.**
**[(0+1)\*0(0+1)\*1(0+1)\*] + [(0+1)\*1(0+1)\*0(0+1)\*]** — the two alternatives cover "the 0 comes first" and "the 1 comes first".

**Q. Write the RE for strings over Σ={0} of even length.**
**(00)\*** — generates {ε, 00, 0000, 000000, …}.

**Q. Write the RE for strings over {0,1} that do NOT contain the substring 01.**
**1\*0\*** — once a 0 appears no 1 may follow, so all 1's must precede all 0's. It generates {ε, 1, 0, 10, 00, 11, 100, …}.

**Q. Write the RE for a language in which every 0 is immediately followed by 11.**
**(011 + 1)\*** — every 0 in the string is forced to be followed by 11, while free 1's may appear anywhere.

**Q. State Arden's theorem.**
Let **P and Q be two regular expressions**. If **P does not contain the null string**, then the equation **R = Q + RP** has the **unique solution R = QP\***. It is used together with the identity rules to find the regular expression of a given finite automaton.

**Q. Write the procedure to obtain the RE for a given DFA.**
**1.** Let q1 be the initial state. **2.** Let there be n states q1 … qn, with some qj as final. **3.** Let αji represent the transition from qj to qi. **4.** Compute **qi = αji·qj**, and if qj is the start state, **qi = αji·qj + ε**. **5.** Solve the equations using **Arden's theorem**; the expression for the final state is the required RE.

**Q. Name the five rules used to convert a regular expression into an NFA.**
**Case 1:** RE is a single symbol **a** · **Case 2:** RE is **ε** · **Case 3:** RE is a **concatenation ab** · **Case 4:** RE is a **union a + b** · **Case 5:** RE is a **closure a\***. The overall method is: build the ε-NFA, remove the ε-moves, then convert to a DFA.

**Q. What is a regular set? State any four closure properties of regular sets.**
Any set that represents the value of a regular expression is called a **regular set**. Closure properties: the **union**, **intersection**, **complement**, **difference**, **reversal**, **closure (Kleene star)**, **concatenation**, **homomorphism** and **inverse homomorphism** of regular sets are all regular.

**Q. Define grammar formally.**
A grammar G is a **4-tuple (N, T, S, P)** where **N (or V_N)** is a set of variables / non-terminal symbols, **T (or Σ)** is a set of terminal symbols, **S ∈ N** is the special **start symbol**, and **P** is the set of **production rules** of the form α → β, where at least one symbol of α belongs to V_N.

**Q. Define Context Free Grammar (CFG).**
A CFG is a **quadruple (N, T, P, S)** consisting of a finite set of grammar rules, where **N** is a set of non-terminals, **T** is a set of terminals with **N ∩ T = ∅**, **P : N → (N ∪ T)\*** is the set of rules, and **S** is the start symbol. Every production has a **single non-terminal on the left-hand side**.

**Q. What is the language generated by a grammar?**
The set of all strings that can be derived from the grammar, formally **L(G) = { w | w ∈ T\*, S ⇒\* w }**. Two grammars G1 and G2 are **equivalent** if L(G1) = L(G2).

**Q. Define derivation tree / parse tree.**
A derivation tree is an **ordered rooted tree** that graphically represents the derivation of a string from a CFG. The **root** is labelled by the start symbol, **internal vertices** by non-terminals, and **leaves** by terminals or ε. It may be drawn **top-down** (from S to the leaves) or **bottom-up** (from the leaves to S).

**Q. What is the yield of a parse tree?**
The **yield (or derivation) of a parse tree** is the final string obtained by **concatenating the labels of the leaves from left to right, ignoring the nulls**. If all leaves are null, the yield is null.

**Q. What is a sentential form?**
A **partial derivation tree** is a sub-tree of a derivation tree such that either **all** of the children of a node are in the sub-tree or **none** of them are. If a partial derivation tree **contains the root S**, it is called a **sentential form**.

**Q. Define leftmost and rightmost derivation with an example.**
A **leftmost derivation (LMD)** is obtained by applying a production to the **leftmost variable** at each step; a **rightmost derivation (RMD)** applies it to the **rightmost variable**. For X → X+X | X\*X | a and the string a+a\*a:
**LMD:** X ⇒ X+X ⇒ a+X ⇒ a+X\*X ⇒ a+a\*X ⇒ a+a\*a
**RMD:** X ⇒ X+X ⇒ X+X\*X ⇒ X+X\*a ⇒ X+a\*a ⇒ a+a\*a

**Q. What is an ambiguous grammar? Give an example.**
A grammar is **ambiguous** if some string has **more than one leftmost derivation, more than one rightmost derivation, or more than one parse tree**. Example: **E → E+E | E\*E | (E) | id** — the string **id + id \* id** has two distinct parse trees, so the grammar is ambiguous.

**Q. What is minimization / simplification of a CFG? What are the properties of a reduced grammar?**
Simplification means **reducing the grammar by removing useless symbols**, since extra symbols needlessly increase its length. In a reduced grammar: **(1)** every variable and terminal appears in the derivation of some word of L, **(2)** there is no production X → Y with both X and Y non-terminals, and **(3)** there is no production X → ε unless ε ∈ L.

**Q. What is a useless symbol?**
A symbol is **useless** if it **does not appear on the right-hand side of any production rule and does not take part in the derivation of any string** — i.e. it is either **non-generating** (derives no terminal string) or **unreachable** from the start symbol. Useless symbols are deleted first when simplifying a CFG.

**Q. What is a null (ε) production and how is it removed?**
A production of the form **A → ε** is a null production; it can be removed only from grammars that do not generate ε. For every **nullable** variable, add new productions in which that variable is **omitted in every possible combination** on the right-hand sides where it occurs. Example: S → XYX, X → 0X | ε, Y → 1Y | ε becomes **S → XY | YX | XX | X | Y, X → 0X | 0, Y → 1Y | 1**.

**Q. What is a unit production and how is it removed?**
A **unit production** is one in which **one non-terminal directly gives another non-terminal**, e.g. X → Y. **Step 1:** whenever Y → a exists, add X → a. **Step 2:** delete X → Y. **Step 3:** repeat until no unit productions remain.

**Q. Define Chomsky Normal Form (CNF).**
A CFG is in **CNF** if every production satisfies one of: **(1)** the start symbol generates ε (A → ε), **(2)** a non-terminal generates **exactly two non-terminals** (S → AB), or **(3)** a non-terminal generates **a single terminal** (S → a). Example: { S → AB, S → c, A → a, B → b }.

**Q. How is a production like S → aA or S → ASB converted to CNF?**
For a terminal in a long RHS, introduce a new variable: **S → aA becomes S → RA with R → a**. For a RHS with more than two non-terminals, break the chain: **S → ASB becomes S → AR with R → SB**.

**Q. Define Greibach Normal Form (GNF) and state its use.**
A CFG is in **GNF** if every production is of the form **A → ε (start symbol only), A → a**, or **A → a followed by any number of non-terminals** (e.g. S → aASB) — that is, **the RHS must begin with exactly one terminal**. GNF is required as **Step 1 of the CFG → PDA conversion**. Example: S → aAB | aB, A → aA | a, B → bB | b.

**Q. Differentiate CNF and GNF.**
**CNF:** every RHS is **two non-terminals** or **one terminal**; used in the CYK parsing algorithm and to bound derivation length. **GNF:** every RHS is **one terminal followed by zero or more non-terminals**; used to remove left recursion and to build a **PDA** from a CFG. Both accept the same language as the original grammar.

**Q. Give the four types of the Chomsky hierarchy with their automata.**
**Type 0** unrestricted → recursively enumerable → **Turing Machine** · **Type 1** context-sensitive → context-sensitive → **Linear Bounded Automaton** · **Type 2** context-free → context-free → **Pushdown Automaton** · **Type 3** regular → regular → **Finite State Automaton**.

**Q. Give the production form of a Type-3 (regular) grammar.**
A Type-3 grammar must have a **single non-terminal on the left** and a right side that is either a **single terminal** or a **single terminal followed by a single non-terminal**: **X → a** or **X → aY**. The rule **S → ε** is allowed if S does not appear on the right side of any rule.

**Q. Give the production form of a Type-1 (context-sensitive) grammar.**
The productions must be of the form **αAβ → αγβ** where A is a non-terminal and α, β, γ are strings of terminals and non-terminals. **α and β may be empty but γ must be non-empty.** These languages are recognised by a **linear bounded automaton**.

---
### UNIT-3 — Pushdown Automata and Turing Machines

**Q. Define Pushdown Automaton (PDA).**
A PDA is a **finite automaton with an additional stack** used as auxiliary memory, and it accepts exactly the **context-free languages**. It is a **7-tuple (Q, Σ, Γ, δ, q0, Z, F)** — Q states, Σ input set, Γ stack symbols that can be pushed and popped, q0 initial state, Z ∈ Γ the start symbol of the stack, F final states, δ the mapping function.

**Q. What is an Instantaneous Description (ID) of a PDA?**
An **ID** is an informal notation of how a PDA computes an input string and decides whether it is accepted or rejected. It is a **triple (q, w, α)** where **q** = the current state, **w** = the remaining input, and **α** = the stack contents with the **top at the left**.

**Q. What is turnstile notation?**
The **⊢** sign is the turnstile notation and represents **one move** of the PDA; the **⊢\*** sign represents a **sequence of moves**. Example: **(p, b, T) ⊢ (q, w, α)** — moving from p to q the input symbol 'b' is consumed and the stack top T is replaced by the string α.

**Q. What are the two modes of acceptance of a PDA?**
**Acceptance by final state** — the PDA consumes the whole input and halts in a state of F, regardless of the stack. **Acceptance by empty stack** — the PDA consumes the whole input and the stack becomes empty (F = ∅). The two are **equivalent in power**: for every PDA of one kind there is a PDA of the other kind accepting the same language.

**Q. Define DPDA and DCFL.**
A **Deterministic Pushdown Automaton** is the 7-tuple M = (Q, Σ, Γ, q0, Z, F, δ); the machine M is **deterministic if δ(q, a, Z) has at most one element**, i.e. there is never a choice of move. A language L is a **Deterministic Context Free Language (DCFL)** if it is accepted by a DPDA.

**Q. Differentiate PDA and DPDA.**
A **PDA (NPDA)** may have several possible moves for the same (state, input, stack-top) triple and may make ε-moves, and it accepts **all** context-free languages. A **DPDA** has **at most one move** for each triple and accepts only the **DCFLs**, which are a **proper subset** of the CFLs. Unlike finite automata, **NPDA is strictly more powerful than DPDA**.

**Q. Write the five steps to convert a CFG into a PDA.**
**1.** Convert the given productions of the CFG into **GNF**. **2.** The PDA will have **only one state {q}**. **3.** The **initial symbol of the CFG becomes the initial stack symbol**. **4.** For each non-terminal production A → α, add **δ(q, ε, A) = (q, α)**. **5.** For each terminal a, add **δ(q, a, a) = (q, ε)**.

**Q. Construct a PDA for the CFG S → 0BB, B → 0S | 1S | 0.**
**M = ({q}, {0,1}, {S, B, 0, 1}, δ, q, S, ∅)** with **R1:** δ(q, ε, S) = {(q, 0BB)} · **R2:** δ(q, ε, B) = {(q, 0S), (q, 1S), (q, 0)} · **R3:** δ(q, 0, 0) = {(q, ε)} · **R4:** δ(q, 1, 1) = {(q, ε)}. The string **010⁴ = 010000** is accepted by this PDA.

**Q. Design a PDA for the language {0ⁿ1ᵐ0ⁿ | m, n ≥ 1}.**
**Logic:** push every 0 of the first block onto the stack; on reading a 1 **do nothing** (just change state); then for each 0 of the last block **pop one 0**. IDs: δ(q0,0,Z)=(q0,0Z) · δ(q0,0,0)=(q0,00) · δ(q0,1,0)=(q1,0) · δ(q1,1,0)=(q1,0) · δ(q1,0,0)=(q1,ε) · **δ(q1,ε,Z)=(q2,Z) — accept state**.

**Q. Design a PDA for L = {aⁿbⁿ | n ≥ 1}.**
**Push an 'a' for every a read, pop one 'a' for every b read**, and accept when the stack returns to Z0 at the end of the input. δ(q0,a,Z0)=(q0,aZ0) · δ(q0,a,a)=(q0,aa) · δ(q0,b,a)=(q1,ε) · δ(q1,b,a)=(q1,ε) · δ(q1,ε,Z0)=(qf,Z0).

**Q. Design a PDA for strings of balanced parentheses.**
**Push on '(' and pop on ')'**: δ(q0, '(', Z0) = (q0, '('Z0) · δ(q0, '(', '(') = (q0, '((') · δ(q0, ')', '(') = (q0, ε) · δ(q0, ε, Z0) = (q1, Z0) — accept. A ')' arriving when Z0 is on top means an unmatched ')', and leftover '(' at end of input means an unmatched '(' — both reject.

**Q. Why is a stack needed in a PDA? Why can a finite automaton not accept {aⁿbⁿ}?**
A finite automaton has only a **fixed finite number of states** and therefore cannot **count an unbounded number of a's**. The PDA's **stack gives unbounded memory** in which the a's can be stored and later matched against the b's, so {aⁿbⁿ} is context-free but not regular.

**Q. Define Turing machine and state who invented it.**
The Turing machine was invented by **Alan Turing in 1936**. It is an **accepting device which accepts the recursively enumerable languages generated by Type-0 grammars**. It consists of an infinite tape, a read/write head, and a finite control, and it is the most powerful model of computation.

**Q. Give the formal definition of a Turing machine.**
A TM is a **7-tuple (Q, Σ, T, δ, q0, B, F)** — **Q** finite set of states, **Σ** finite set of input symbols, **T** the tape symbols, **q0** the initial state, **F** the set of final states, **B** the **blank symbol** used as an end marker of the input, and **δ** the transition/mapping function **Q × T → Q × T × {L, R}**.

**Q. What does the transition δ(q0, a) = (q1, A, R) mean?**
In state **q0**, if the tape head reads the symbol **'a'**, the machine goes to state **q1**, **replaces a by A** on the tape, and **moves the head one cell to the right (R)**. This triple is called a *program* for the Turing machine.

**Q. State any four features of a Turing machine.**
**(1)** It has an **external memory** which remembers an arbitrarily long sequence of input. **(2)** It has **unlimited memory capability**. **(3)** The input can be read at the **left or right on the tape**. **(4)** The machine can **produce output** based on its input, so the distinction between input and output is removed and a common set of alphabets is used.

**Q. Describe the basic model of a Turing machine.**
**(1)** An **input tape** with an infinite number of cells, each holding one symbol; empty cells hold the **blank** character. **(2)** A **finite control with a tape head** that reads the current symbol and can move **left or right**. **(3)** A **finite set of states** the machine passes through. **(4)** A **finite set of external symbols** used to build the logic of the machine.
DIAGRAM: [infinite tape: … B | a | b | a | B …] with a head under one cell, connected upward to a box labelled **Finite Control**.

**Q. What is a recursively enumerable language?**
A language is **recursively enumerable** if it is **accepted by a Turing machine** — i.e. generated by a **Type-0 (unrestricted) grammar**. **Recursive** means repeating the same set of rules any number of times and **enumerable** means a list of elements. The TM also accepts the **computable functions** such as addition, multiplication, subtraction, division and power.

**Q. What is the HALT state of a Turing machine?**
The state the machine enters when the computation stops, typically on reading the blank symbol, e.g. **δ(q3, B) = (q4, B, S)**. The **HALT state is always an accept state for any TM**.

**Q. Construct a TM which accepts the string 'aba' over Σ = {a, b}.**
Moves: **δ(q0, a) = (q1, A, R)** · **δ(q1, b) = (q2, B, R)** · **δ(q2, a) = (q3, A, R)** · **δ(q3, B) = (q4, B, S)** where **q4 is the HALT (accept) state**. The head reads out the sequence up to the blank; if it has read exactly 'aba' the TM halts and accepts.

**Q. Give the logic of the TM for L = {0ⁿ1ⁿ | n ≥ 1}.**
**Read each 0, mark it as A and move right; find the matching 1, convert it to B and move left; return to the leftmost unmarked 0 and repeat.** When all 0's are marked, scan right over the B's to ensure no 1 remains, then on the blank enter the **HALT state**. Key moves: δ(q0,0)=(q1,A,R) · δ(q1,1)=(q2,B,L) · δ(q2,A)=(q0,A,R) · δ(q0,B)=(q3,B,R) · δ(q3,B)=(q4,B,R).

**Q. Compare PDA and Turing machine.**
A **PDA** has a **stack** — LIFO access only, cannot re-read what it popped — and accepts **context-free languages**. A **TM** has an **infinite tape** with a head that can **move both left and right and rewrite any cell**, and accepts **recursively enumerable languages**. The TM is therefore strictly more powerful.

**Q. Compare a finite automaton, a PDA and a Turing machine in terms of memory.**
**FA — no auxiliary memory**, only its finite states → regular languages. **PDA — a stack** (unbounded but LIFO) → context-free languages. **TM — an infinite tape** with read/write in both directions → recursively enumerable languages. Memory power increases in that order, and so does the class of languages accepted.

**Q. Which automaton accepts each class of the Chomsky hierarchy?**
**Regular (Type 3) → Finite State Automaton** · **Context-free (Type 2) → Pushdown Automaton** · **Context-sensitive (Type 1) → Linear Bounded Automaton** · **Recursively enumerable (Type 0) → Turing Machine**.

**Q. What is the initial stack symbol Z0 used for?**
**Z0** is the symbol that is on the stack **before any input is read**. It marks the **bottom of the stack** so the PDA can detect that the stack is empty, which is what allows acceptance by empty stack and what detects an unmatched closing symbol.

**Q. Write the ID sequence showing that "0011100" is accepted by the PDA for {0ⁿ1ᵐ0ⁿ}.**
(q0, 0011100, Z) ⊢ (q0, 011100, 0Z) ⊢ (q0, 11100, 00Z) ⊢ (q1, 1100, 00Z) ⊢ (q1, 100, 00Z) ⊢ (q1, 00, 00Z) ⊢ (q1, 0, 0Z) ⊢ (q1, ε, Z) ⊢ (q2, Z) → **ACCEPT**. The two 0's pushed at the start are popped by the two 0's at the end.

---

## 5. Part-B long answers

### UNIT-1 (Q7 set)

---

**Q7-A. Design a DFA which accepts all strings over {0,1} starting with '10' and ending with '01'. Also design a DFA for strings containing both an even number of 0's and an even number of 1's.**

*(Full solution given in Section 2, Q7(i) and Q7(ii) above — the six-state prefix+suffix machine, and the four-state parity square.)*

**Marks split:** 3 marks for each DFA — 1 for the formal 5-tuple, 1½ for the transition diagram, ½ for the transition table / verification.

---

**Q7-B. Explain the conversion of an NFA to an equivalent DFA with a suitable example.**

**Definition.** Let **M = (Q, Σ, δ, q0, F)** be an NFA accepting L(M). There always exists an equivalent DFA **M' = (Q', Σ, δ', q0', F')** such that **L(M) = L(M')**. The construction is called the **subset construction**, because each state of the DFA is a **set of NFA states**.

**Procedure.**
1. **Step 1:** Initially Q' = ∅.
2. **Step 2:** Add q0 of the NFA to Q'; find the transitions from this start state.
3. **Step 3:** In Q', find the **possible set of states for each input symbol**. If that set is not already in Q', add it as a new DFA state.
4. **Step 4:** The **final states of the DFA are all states that contain a final state of the NFA**.

**Example.** NFA with states q0, q1, q2 where q2 is final:

| State | 0 | 1 |
|---|---|---|
| →q0 | q0 | q1 |
| q1 | {q1, q2} | q1 |
| \*q2 | q2 | {q1, q2} |

**Working:**
δ'([q0], 0) = [q0] · δ'([q0], 1) = [q1]
δ'([q1], 0) = **[q1, q2]** (new state) · δ'([q1], 1) = [q1]
δ'([q2], 0) = [q2] · δ'([q2], 1) = [q1, q2]
δ'([q1,q2], 0) = δ(q1,0) ∪ δ(q2,0) = {q1,q2} ∪ {q2} = **[q1, q2]**
δ'([q1,q2], 1) = δ(q1,1) ∪ δ(q2,1) = {q1} ∪ {q1,q2} = **[q1, q2]**

**Resulting DFA:**

| State | 0 | 1 |
|---|---|---|
| →[q0] | [q0] | [q1] |
| [q1] | [q1,q2] | [q1] |
| \*[q1,q2] | [q1,q2] | [q1,q2] |

**[q1, q2] is a final state because it contains the NFA final state q2.**

**Key points:** an NFA with n states can produce a DFA with up to **2ⁿ** states; only the **reachable** subsets are actually constructed; the NFA and the DFA accept **exactly the same language**, which is why NFA and DFA are equal in power.

---

**Q7-C. Explain ε-NFA, ε-closure, and the conversion of an ε-NFA into a DFA with an example.**

**ε-NFA.** An ε-NFA is a quintuple **A = (Q, Σ, δ, q0, F)** where **δ : Q × (Σ ∪ {ε}) → 2^Q**, i.e. the machine may **change state without consuming an input symbol**. Note that **ε is never a member of Σ**. ε-moves make it easy to join automata built for the individual parts of a regular expression.

**ε-closure.** The ε-closure of a state q is the set containing **q together with every state reachable from q using only ε-transitions**. It is computed by **adding new states until no new state can be added**.
Example: starting with {P}, add Q and R → {P,Q,R}, add S → {P,Q,R,S}, nothing more can be added, so **ε-Closure(P) = {P,Q,R,S}**, ε-Closure(R) = {R,S}, ε-Closure(Q) = {Q}, ε-Closure(S) = {S}.

**Removing ε-transitions.** Rule: **δ'(q, a) = ε-closure(δ(δ̂(q, ε), a))** where **δ̂(q, ε) = ε-closure(q)**. Repeat for every state and every input symbol, then build the transition table of the equivalent NFA without ε.

**Steps for ε-NFA → DFA:**
1. Take the **ε-closure of the start state** of the NFA as the start state of the DFA.
2. For each input symbol, find the states reachable from the present state — the **union of the transition values and their ε-closures** for every NFA state in the current DFA state.
3. If a **new state** is produced, make it the current state and repeat step 2.
4. Repeat steps 2–3 until no new state appears in the table.
5. Mark as **final** every DFA state that **contains a final state of the NFA**.

**Example.** Let ε-closure{q0} = {q0, q1, q2} = **A**, and ε-closure of each of q1…q4 be itself.
δ'(A, 0) = ε-closure{ δ(q0,0) ∪ δ(q1,0) ∪ δ(q2,0) } = ε-closure{q3} = **{q3} = B**
δ'(A, 1) = ε-closure{q3} = **B**
δ'(B, 0) = ∅ · δ'(B, 1) = ε-closure{q4} = **{q4} = C**
δ'(C, 0) = ∅ · δ'(C, 1) = ∅
The DFA has states **A, B, C** with C (containing the NFA final state q4) as the final state.

---

**Q7-D. What is minimization of a DFA? Explain the procedure with a suitable example.**

**Definition.** Minimization of a DFA means **reducing the number of states of a given finite automaton** without changing the language it accepts. After minimizing we obtain an **FSM with no redundant states** — the unique smallest DFA for that language.

**Procedure (7 steps).**
1. **Remove all states unreachable** from the initial state via any transition.
2. **Draw the transition table** for all remaining pairs of states.
3. **Split the table into two tables — T1 containing all final states and T2 containing all non-final states.**
4. **Find similar rows** in T1: two states p and q are similar if for every input symbol they go to the same state. Remove one of them.
5. **Repeat step 3** until no similar rows remain in T1.
6. **Repeat steps 3 and 4 for table T2** as well.
7. **Combine the reduced T1 and T2** — the combined transition table is the transition table of the **minimized DFA**.

**Example.** Given a DFA in which **q2 and q4 are unreachable**:

**Step 1:** remove q2 and q4. **Step 2:** transition table of the rest:

| State | 0 | 1 |
|---|---|---|
| q0 | q1 | q3 |
| q1 | q0 | q3 |
| \*q3 | q5 | q5 |
| \*q5 | q5 | q5 |

**Step 3 — split.** Non-final set {q0, q1}; final set {q3, q5}.
**Step 4 — set 1** has no similar rows, so it stays as it is.
**Step 5 — set 2:** q3 and q5 both transit to the same state on 0 and on 1, so they are **similar**. Skip q5 and replace q5 by q3 everywhere.
**Step 6 — combine:**

| State | 0 | 1 |
|---|---|---|
| →q0 | q1 | q3 |
| q1 | q0 | q3 |
| \*q3 | q3 | q3 |

The minimized DFA has **3 states instead of 6**.

---

**Q7-E. Design DFAs for the following languages over Σ = {0,1}: (i) strings ending with 00 (ii) strings with three consecutive 0's (iii) binary numbers divisible by 3.**

**(i) All strings ending with 00.** Track how many trailing 0's have been seen.
DIAGRAM: →q0 --0--> q1 --0--> ((q2)) ; q0 --1--> q0 ; q1 --1--> q0 ; q2 --0--> q2 ; q2 --1--> q0

| State | 0 | 1 |
|---|---|---|
| →q0 (no trailing 0) | q1 | q0 |
| q1 (one trailing 0) | q2 | q0 |
| \*q2 (two or more trailing 0's) | q2 | q0 |

**(ii) All strings containing three consecutive 0's.** Count consecutive 0's; any 1 resets the count.
DIAGRAM: →q0 --0--> q1 --0--> q2 --0--> ((q3)) ; q0,q1,q2 --1--> q0 ; q3 --0,1--> q3
Once q3 is reached the substring 000 has occurred, so the machine stays final whatever follows.

**(iii) Binary numbers divisible by 3.** The states are the **remainders 0, 1, 2 modulo 3**. Reading bit b turns the value n into **2n + b**, so from remainder r we go to remainder **(2r + b) mod 3**.

| State (remainder) | 0 | 1 |
|---|---|---|
| →\*q0 (r = 0) | q0 | q1 |
| q1 (r = 1) | q2 | q0 |
| q2 (r = 2) | q1 | q2 |

**q0 is the only final state.** Check: 110 = 6 → q0,q1,q0,q0 ✔ · 101 = 5 → q0,q1,q2,q2 ✘.

---

**Q7-F. Explain the finite automaton model and the acceptance of strings and languages. Differentiate DFA and NFA.**

**Finite automaton model.** A finite automaton consists of an **input tape** holding the string, a **read head** that moves left to right one symbol at a time, and a **finite control** that is in exactly one of a finite number of states. It has **no auxiliary memory** — everything it "remembers" is encoded in its current state.
DIAGRAM: [input tape: a1 | a2 | a3 | … | an] → head → [Finite Control] with the control holding the current state.

**Formal definition.** **M = (Q, Σ, δ, q0, F)** — Q finite set of states, Σ finite input alphabet, δ the transition function, q0 ∈ Q the initial state, F ⊆ Q the set of final states.

**Acceptance of a string.** A string **w is accepted** if starting from q0 and consuming every symbol of w the machine ends in a final state, i.e. **δ̂(q0, w) ∈ F**, where δ̂(q, ε) = q and δ̂(q, wa) = δ(δ̂(q, w), a). Otherwise w is **rejected**.

**Acceptance of a language.** The **language accepted by M** is **L(M) = { w ∈ Σ\* | δ̂(q0, w) ∈ F }** — the set of all strings the machine accepts. A language accepted by some finite automaton is called a **regular language**.

**DFA vs NFA:**

| Point | DFA | NFA |
|---|---|---|
| Transition function | δ : Q × Σ → **Q** | δ : Q × Σ → **2^Q** |
| Moves per symbol | exactly **one** | **zero, one or many** |
| ε-transitions | **not allowed** | **allowed** (ε-NFA) |
| Backtracking | not required | may be required |
| Number of states | generally **more** | generally **fewer** |
| Ease of construction | harder | easier |
| Power | **equal — both accept exactly the regular languages** | **equal** |

**Conclusion:** every NFA can be converted into an equivalent DFA by the **subset construction**, so non-determinism adds convenience but **no extra language-recognising power** at the finite-automaton level.

---
### UNIT-2 (Q8 set)

---

**Q8-A. Construct a finite automaton for the regular expression (1\*0 + 10\*) and convert the grammar S → ABa, A → aab, B → Ac into CNF.**

*(Full solution given in Section 2, Q8(i) and Q8(ii) above — the seven-state DFA with final states {A, B, C, F}, and the CNF grammar S → A P1, P1 → B Xa, A → Xa P2, P2 → Xa Xb, B → A Xc, Xa → a, Xb → b, Xc → c.)*

---

**Q8-B. Explain the procedure to construct a finite automaton for a given regular expression, with a suitable example.**

**Idea.** A regular expression is first reduced into its **smallest sub-expressions**; each sub-expression is converted into an NFA, the NFAs are combined, and finally the result is converted to a DFA.

**The five rules (one per type of RE):**
- **Case 1 — RE is a:** →q0 --a--> ((q1))
- **Case 2 — RE is ε:** →q0 --ε--> ((q1))
- **Case 3 — RE is ab (concatenation):** join the automaton for a and the automaton for b by an ε-move; the final state of the first becomes non-final.
- **Case 4 — RE is a + b (union):** a new start state with **ε-moves into both branches**, and both branch finals ε-move into a new final state.
- **Case 5 — RE is a\* (closure):** a new start/final state with an ε-move into the sub-automaton and an ε-move looping back from its final state.

**Method.**
- **Step 1:** Construct an **NFA with null (ε) moves** from the given regular expression.
- **Step 2:** **Remove the null transitions** from the NFA and convert it into its equivalent **DFA**.

**Example — convert RE = 1(0 + 1)\*0 into a DFA.**
1. Build NFAs for the three parts **"1"**, **"(0 + 1)\*"** and **"0"**.
2. **Concatenate** them, giving an NFA with ε-moves.
3. **Remove the ε-moves** → NFA without ε.
4. **Subset construction** → DFA.

**Resulting DFA** (Σ = {0,1}; the string must start with 1 and end with 0):

| State | Meaning | 0 | 1 |
|---|---|---|---|
| →S | nothing read | D | A |
| A | starts with 1, last symbol is 1 | \*F | A |
| \*F | starts with 1, **ends with 0** | F | A |
| D | first symbol was 0 — dead | D | D |

DIAGRAM: →S --1--> A --0--> ((F)) ; A --1--> A ; F --0--> F ; F --1--> A ; S --0--> D ; D --0,1--> D

**Other standard examples:** FA for **10 + (0 + 11)0\*1**, NFA for **1(1\*01\*01\*)\***, FA for **0\*1 + 10**, NFA for **b + ba\***.

---

**Q8-C. State and prove Arden's theorem. Use it to find the regular expression of a given finite automaton.**

**Statement.** Let **P and Q be two regular expressions**. **If P does not contain the null string**, then the equation **R = Q + RP** has a **unique solution, R = QP\***.

**Proof.**
R = Q + RP
= Q + (Q + RP)P  [substituting R = Q + RP]
= Q + QP + RP²
Substituting recursively again and again:
R = Q + QP + QP² + QP³ + …
R = Q(ε + P + P² + P³ + …)
**R = QP\***  [since P\* represents (ε + P + P² + P³ + …)]. **Hence proved.** ∎

**Procedure to obtain the RE for a given DFA.**
1. Let **q1** be the initial state.
2. Let there be states q2, q3, …, qn; the final state may be some qj.
3. Let **αji** represent the transition from qj to qi.
4. Form the equation **qi = αji·qj**, and if qj is the **start state** add ε: **qi = αji·qj + ε**.
5. Solve the equations with Arden's theorem; the expression obtained for the **final state** is the required regular expression **r**.

**Example.** For an automaton with initial and final state q1 the equations are
**q1 = q1a + q3a + ε**  (ε because q1 is the initial state)
**q2 = q1b + q2b + q3b**
**q3 = q2a**

**Solving:**
q2 = q1b + q2b + (q2a)b  [substituting q3 = q2a]
 = q1b + q2(b + ab)
 = **q1b(b + ab)\***  [Arden's theorem, with Q = q1b and P = (b + ab)]

q1 = q1a + q3a + ε = q1a + q2aa + ε  [substituting q3]
 = q1a + q1b(b + ab)\*aa + ε  [substituting q2]
 = q1(a + b(b + ab)\*aa) + ε
 = ε(a + b(b + ab)\*aa)\*  [Arden's theorem]
 = **(a + b(b + ab)\*aa)\***  [since εr = r]

**The regular expression is (a + b(b + ab)\*aa)\*.**

**Second example.** For q1 = q1·0 + ε, q2 = q1·1 + q2·1, q3 = q2·0 + q3(0+1):
q1 = ε0\* = **0\*** · q2 = q1·11\* = **0\*11\*** · overall **R = q1 + q2 = 0\* + 0\*11\* = 0\* + 0\*1⁺** and q3 = q2·0(0+1)\*.

---

**Q8-D. Define ambiguous grammar. Explain leftmost and rightmost derivations and derivation trees with a suitable example.**

**Ambiguous grammar.** A grammar is **ambiguous** if there exists **more than one leftmost derivation**, or **more than one rightmost derivation**, or **more than one parse tree** for the **same input string**. If no such string exists the grammar is **unambiguous**. Ambiguity is a property of the **grammar**, not of the language.

**Leftmost derivation (LMD):** obtained by applying a production to the **leftmost variable** at each step.
**Rightmost derivation (RMD):** obtained by applying a production to the **rightmost variable** at each step.

**Derivation tree (parse tree):** an **ordered rooted tree** that graphically represents the derivation. The **root** is the start symbol, **internal vertices** are non-terminals, and **leaves** are terminals or ε. The **yield** of the tree is the string obtained by reading the leaves left to right, ignoring nulls. It may be built **top-down** (start at S, go down to the leaves) or **bottom-up** (start at the leaves, proceed up to S).

**Example 1 — LMD and RMD.** Productions: **E → E + E, E → E − E, E → a | b**; input string **a − b + a**.

**LMD:** E ⇒ E+E ⇒ E−E+E ⇒ a−E+E ⇒ a−b+E ⇒ **a−b+a**
**RMD:** E ⇒ E−E ⇒ E−E+E ⇒ E−E+a ⇒ E−b+a ⇒ **a−b+a**

Because both a leftmost derivation starting with E → E+E **and** one starting with E → E−E exist for the same string, this grammar is **ambiguous**.

**Example 2 — proving ambiguity.** For **E → I | E+E | E\*E | (E), I → 0 | 1 | … | 9** and the string **3 \* 2 + 5**, two parse trees exist: one grouping **(3\*2)+5** and one grouping **3\*(2+5)**. Two parse trees for one string ⟹ **ambiguous**.

**Example 3.** **S → aSb | SS | ε** with the string **aabb** also has two distinct parse trees, hence it is ambiguous.

**Example 4.** For **S → SS | aSb | ε**, one derivation of "abaabb" is
S ⇒ SS ⇒ aSbS ⇒ abS ⇒ abaSb ⇒ abaaSbb ⇒ **abaabb**.

**Why ambiguity matters:** an ambiguous grammar gives a compiler **more than one parse tree**, hence more than one possible meaning for the same program statement, so ambiguity must be removed before parsing.

---

**Q8-E. Explain minimization (simplification) of a context free grammar with a suitable example.**

**Need.** Extra symbols unnecessarily **increase the length of the grammar**; simplification means **reducing the grammar by removing useless symbols**.

**Properties of a reduced grammar:**
1. Each **variable and each terminal appears in the derivation of some word** of L.
2. There is **no production X → Y** where both X and Y are non-terminals (no unit productions).
3. If **ε is not in L**, there need be **no production X → ε**.

**Step 1 — Removal of useless symbols.** A symbol is **useless** if it does not appear on the right-hand side of any production and does not take part in the derivation of any string.
Example: **T → aaB | abA | aaT, A → aA, B → ab | b, C → ad.**
Here **C is unreachable** from the start symbol, and **A → aA** can never produce a terminal string (**non-generating**). Removing both leaves **T → aaB | aaT, B → ab | b**.

**Step 2 — Elimination of ε-productions.** Productions of the form **A → ε** are null productions; they can be removed only from grammars that do not generate ε. Whenever a nullable variable appears on a right-hand side, add the version with that variable **omitted**.
Example: **S → XYX, X → 0X | ε, Y → 1Y | ε.**
Deleting X → ε and Y → ε and substituting ε for X and Y in every combination:
S → YX (first X = ε) · S → XY (last X = ε) · S → XX (Y = ε) · S → X (Y and one X = ε) · S → Y (both X = ε)
X → 0X | 0 and Y → 1Y | 1.
**Result: S → XY | YX | XX | X | Y, X → 0X | 0, Y → 1Y | 1.**

**Step 3 — Removing unit productions.** A **unit production** gives one non-terminal directly from another (X → Y).
**Step 1:** to remove X → Y, add X → a whenever Y → a occurs. **Step 2:** delete X → Y. **Step 3:** repeat until none remain.
Example: **S → 0A | 1B | C, A → 0S | 00, B → 1 | A, C → 01.**
S → C is a unit production, so S takes C's productions: **S → 0A | 1B | 01**.
B → A is a unit production, so B takes A's productions: **B → 1 | 0S | 00**.
**Result: S → 0A | 1B | 01, A → 0S | 00, B → 1 | 0S | 00.**

**Order to apply:** remove **ε-productions → unit productions → useless symbols**, and only then convert to CNF or GNF.

---

**Q8-F. Explain Chomsky Normal Form and Greibach Normal Form. Convert a suitable grammar into each.**

**Why normal forms?** To obtain the grammar in a **specific, standard order** — "normalising" it so that there is a **fixed number of terminals and non-terminals** on each right-hand side. The two normal forms are **CNF** and **GNF**.

**CHOMSKY NORMAL FORM (CNF).** A CFG is in CNF if every production satisfies one of:
1. the **start symbol generates ε** — A → ε
2. a non-terminal generates **exactly two non-terminals** — S → AB
3. a non-terminal generates **a single terminal** — S → a

Example of a CNF grammar: **{ S → AB, S → c, A → a, B → b }**.

**Procedure:** (a) remove null, unit and useless productions; (b) **replace every terminal in a long RHS by a new variable** — S → aA becomes **S → RA, R → a**; (c) **eliminate RHSs with more than two non-terminals** — S → ASB becomes **S → AR, R → SB**.

**Worked conversion — S → aAD, A → aB | bAB, B → b, D → d.**
Step 1: no null/unit/useless productions.
Step 2: introduce **Xa → a, Xb → b**:
S → Xa A D · A → Xa B | Xb A B · B → b · D → d
Step 3: break RHSs longer than two:
**S → Xa P1, P1 → A D**
**A → Xa B | Xb P2, P2 → A B**
**B → b, D → d, Xa → a, Xb → b** — this grammar is in **CNF**.

**GREIBACH NORMAL FORM (GNF).** A CFG is in GNF if every production satisfies one of:
1. the **start symbol generates ε** — A → ε
2. a non-terminal generates **a terminal** — A → a
3. a non-terminal generates **a terminal followed by any number of non-terminals** — S → aASB

Example of a GNF grammar: **G1 = { S → aAB | aB, A → aA | a, B → bB | b }**.

**Two lemmas are used to obtain GNF.**
**Lemma 1 (substitution):** if A → Bγ and B → β1 | β2 | … then replace A → Bγ by **A → β1γ | β2γ | …**, pushing a terminal to the front.
**Lemma 2 (removal of left recursion):** replace **A → Aα | β** by **A → βZ | β** and **Z → αZ | α**, where Z is a new variable.
Example of Lemma 2: **A → Aa | b** becomes **A → bZ | b, Z → aZ | a**.

**Worked conversion — S → AB, A → aA | b, B → b.**
A and B already start with terminals. Only S → AB violates GNF, so **substitute A** (Lemma 1):
**S → aAB | bB, A → aA | b, B → b** — this grammar is in **GNF**.

**Comparison:** CNF fixes the RHS **length** (two variables or one terminal); GNF fixes the RHS **shape** (must begin with one terminal). **GNF is what the CFG → PDA conversion requires**, and GNF guarantees that a string of length n is derived in exactly **n steps**.

---

### UNIT-3 (Q9 set)

---

**Q9-A. Write the procedure to convert a CFG to a PDA and convert the given CFG to a PDA.**

*(Full solution given in Section 2, Q9 above — the five-step procedure, removal of the useless symbol C, removal of the unit productions S → B and B → A, and the resulting one-state PDA with rules R1–R5.)*

**Second worked example — construct a PDA for S → 0BB, B → 0S | 1S | 0, and test whether 010⁴ is accepted.**

**M = {(q), (0, 1), (S, B, 0, 1), δ, q, S, ∅}**
**R1:** δ(q, ε, S) = {(q, 0BB)} · **R2:** δ(q, ε, B) = {(q, 0S), (q, 1S), (q, 0)} · **R3:** δ(q, 0, 0) = {(q, ε)} · **R4:** δ(q, 1, 1) = {(q, ε)}

**Testing 010000:**
(q, 010000, S) ⊢ (q, 010000, 0BB) [R1] ⊢ (q, 10000, BB) [R3] ⊢ (q, 10000, 1SB) [R2] ⊢ (q, 0000, SB) [R4] ⊢ (q, 0000, 0BBB) [R1] ⊢ (q, 000, BBB) [R3] ⊢ (q, 000, 0BB) [R2] ⊢ (q, 00, BB) [R3] ⊢ (q, 00, 0B) [R2] ⊢ (q, 0, B) [R3] ⊢ (q, 0, 0) [R2] ⊢ (q, ε, ε) [R3] → **ACCEPT**. Thus 010⁴ is accepted by the PDA.

**Third worked example — PDA for S → aSb, S → a | b | ε.**
**P = {(q), (a, b), (S, a, b, z0), δ, q, z0, q}** with
**R1:** δ(q, ε, S) = {(q, aSb)} · **R2:** δ(q, ε, S) = {(q, a), (q, b), (q, ε)} · **R3:** δ(q, a, a) = {(q, ε)} · **R4:** δ(q, b, b) = {(q, ε)} · **R5:** δ(q, ε, z0) = {(q, ε)}
**Simulation of "aaabb":** (q, aaabb, S) ⊢ (q, aaabb, aSb) ⊢ (q, aabb, Sb) ⊢ (q, aabb, aSbb) ⊢ (q, abb, Sbb) ⊢ (q, abb, abb) ⊢ (q, bb, bb) ⊢ (q, b, b) ⊢ (q, ε, z0) ⊢ (q, ε) → **ACCEPT**.

---

**Q9-B. Explain the pushdown automaton — definition, model, instantaneous description, and acceptance of a CFL — with a suitable example.**

**Definition.** A PDA is a **finite automaton with a stack** as auxiliary memory. It is a **7-tuple M = (Q, Σ, Γ, δ, q0, Z, F)** where **Q** = finite set of states, **Σ** = the input set, **Γ** = a stack symbol which can be pushed onto and popped from the stack, **q0** = the initial state, **Z ∈ Γ** = the start symbol of the stack, **F** = the set of final states, and **δ** = the mapping function used for moving from the current state to the next state.

**Model.**
DIAGRAM: [input tape: a1 a2 a3 … an] → read head → [Finite Control] ↔ [Stack, top at the left, Z0 at the bottom]
The finite control reads the current input symbol **and** the top of the stack, and then changes state, pushes or pops, and advances the head.

**Instantaneous Description (ID).** An ID is an informal notation of how the PDA computes an input string and decides that it is accepted or rejected. It is a **triple (q, w, α)** where **q** = the current state, **w** = the remaining input, **α** = the stack contents with the **top at the left**.

**Turnstile notation.** The **⊢** sign represents **one move** and **⊢\*** represents a **sequence of moves**. For example **(p, b, T) ⊢ (q, w, α)** — while moving from p to q the input symbol 'b' is consumed and the stack top T is replaced by the string α.

**Acceptance of a CFL.** A PDA can accept **by final state** (whole input consumed and the machine is in a state of F) or **by empty stack** (whole input consumed and the stack becomes empty). Both modes accept the **same class of languages — the context-free languages**.

**Example — design a PDA for L = {0ⁿ1ᵐ0ⁿ | m, n ≥ 1}.**
**Logic:** n 0's are followed by any number of 1's followed by n 0's. **Push all the 0's** of the first block onto the stack; on reading a 1 **do nothing**; then **pop one 0 for each 0** of the last block.

1. δ(q0, 0, Z) = (q0, 0Z)  — push the first 0
2. δ(q0, 0, 0) = (q0, 00)  — push the remaining 0's
3. δ(q0, 1, 0) = (q1, 0)  — first 1: change state, stack untouched
4. δ(q1, 1, 0) = (q1, 0)  — further 1's: do nothing
5. δ(q1, 0, 0) = (q1, ε)  — pop one 0 per trailing 0
6. δ(q1, ε, Z) = (q2, Z)  — **ACCEPT state**

**Simulation for "0011100":**
(q0, 0011100, Z) ⊢ (q0, 011100, 0Z) ⊢ (q0, 11100, 00Z) ⊢ (q1, 1100, 00Z) ⊢ (q1, 100, 00Z) ⊢ (q1, 00, 00Z) ⊢ (q1, 0, 0Z) ⊢ (q1, ε, Z) ⊢ (q2, Z) → **ACCEPT**.

---

**Q9-C. Explain the Turing machine — features, formal definition and basic model — and design a TM which accepts the string 'aba'.**

**Introduction.** The Turing machine was invented in **1936 by Alan Turing**. It is an **accepting device which accepts the recursively enumerable languages generated by Type-0 grammars**.

**Features.**
1. It has an **external memory** which remembers an arbitrarily long sequence of input.
2. It has **unlimited memory capability**.
3. The model can read the input **at the left or right on the tape** easily.
4. It can **produce an output** based on its input; the **distinction between input and output is removed**, so a common set of alphabets is used.

**Formal definition.** A TM is a collection of **7 components — (Q, Σ, T, δ, q0, B, F)**: **Q** the finite set of states, **Σ** the finite set of input symbols, **T** the tape symbols, **q0** the initial state, **F** the set of final states, **B** the **blank symbol** used as an end marker for the input, and **δ** the transition/mapping function.
The mapping function maps the state and the tape symbol to the **next state, the external symbol written, and the direction of head movement** — this triple is called a *program* for the TM. Example **δ(q0, a) = (q1, A, R)**: in state q0, on reading 'a', go to q1, replace a by A, and move right.

**Basic model.**
1. The **input tape** has an infinite number of cells, each holding one input symbol; the empty part of the tape is filled with **blank** characters.
2. The **finite control and the tape head** are responsible for reading the current input symbol; the head can move **left and right**.
3. A **finite set of states** through which the machine passes.
4. A **finite set of external symbols** used in building the logic of the machine.
DIAGRAM: … B | a | b | a | B … (tape) with the head under one cell, joined by a line to a box marked **Finite Control**.

**Design — TM accepting the string 'aba' over Σ = {a, b}.**
The string 'aba' is placed on the tape; the head reads it up to the blank. If it has read 'aba', the TM halts after reading B.

- **δ(q0, a) = (q1, A, R)** — replace a by A, move right
- **δ(q1, b) = (q2, B, R)** — replace b by B, move right
- **δ(q2, a) = (q3, A, R)** — replace a by A, move right
- **δ(q3, B) = (q4, B, S)** — go to **q4, the HALT state**, which is always an accept state for any TM

**Transition table:**

| State | a | b | B |
|---|---|---|---|
| →q0 | (q1, A, R) | — | — |
| q1 | — | (q2, B, R) | — |
| q2 | (q3, A, R) | — | — |
| q3 | — | — | (q4, B, S) |
| \*q4 | — | — | — |

---

**Q9-D. Construct a Turing machine for the language L = {0ⁿ1ⁿ | n ≥ 1} and show its working for the input 0011.**

**Comparison with the PDA solution.** This problem was already solved by a PDA, where a **stack** remembered the previous symbol. The **main advantage of the Turing machine** is that it has a **tape head which can move forward or backward**, so the input tape can be scanned repeatedly.

**Logic.** Read each **0**, mark it by **A**, move right along the tape until a **1** is found and convert it to **B**; then move back left to the leftmost unmarked 0 and repeat the process for all the 0's and 1's.

**Transitions.**
- δ(q0, 0) = (q1, A, R) — mark a 0 as A, move right
- δ(q1, 0) = (q1, 0, R) — skip the remaining 0's
- δ(q1, B) = (q1, B, R) — skip already-marked 1's
- δ(q1, 1) = (q2, B, L) — mark a 1 as B, move left
- δ(q2, 0) = (q2, 0, L) — move back left over the 0's
- δ(q2, B) = (q2, B, L) — move back left over the B's
- δ(q2, A) = (q0, A, R) — reached the last A, go right and repeat
- δ(q0, B) = (q3, B, R) — all 0's marked, now verify no 1 remains
- δ(q3, B) = (q3, B, R) — skip the B's
- δ(q3, Δ) = (q4, Δ, R) — **q4 is the HALT state → ACCEPT**

**Working for the input 0011.** Initially the state is q0 and the head points to the first 0.
1. δ(q0, 0) = (q1, A, R) → tape **A**011, head on the second 0
2. δ(q1, 0) = (q1, 0, R) → no change, head on the first 1
3. δ(q1, 1) = (q2, B, L) → tape A0**B**1, head moves left
4. δ(q2, 0) = (q2, 0, L) → no change, head moves left
5. δ(q2, A) = (q0, A, R) → back at the leftmost unmarked 0
6. δ(q0, 0) = (q1, A, R) → tape A**A**B1
7. δ(q1, B) = (q1, B, R) → skip the B, head on the last 1
8. δ(q1, 1) = (q2, B, L) → tape AAB**B**
9. δ(q2, B) = (q2, B, L) → move left; the symbol before B is A, so **all the 0's are marked**
10. δ(q2, A) = (q0, A, R) → move right to check that no 1 is left
11. δ(q0, B) = (q3, B, R) and δ(q3, B) = (q3, B, R) → skip the B's
12. δ(q3, Δ) = (q4, Δ, R) → **q4 = HALT state → the string 0011 is ACCEPTED**

**Related problems:** construct a TM for **L = {0ⁿ1ⁿ2ⁿ | n ≥ 1}** (mark 0 as A, 1 as B, 2 as C in each pass) and a TM for **checking a palindrome of even length** (match the first symbol against the last, erase both, and repeat).

---

**Q9-E. Explain DCFL and DPDA. Compare PDA with DPDA and with the Turing machine.**

**DPDA.** The **Deterministic Push Down Automata** is defined as M with **7 tuples: M = (Q, Σ, Γ, q0, Z, F, δ)** where **Q** is the finite set of states, **Σ** the input set, **Γ** a stack symbol which can be pushed and popped from the stack, **q0** the initial state, **Z** a start symbol which is in Γ, **F** a set of final states, and **δ** the mapping function used for moving from the current state to the next state.

**The machine M is deterministic if δ(q, a, Z) has at most one element** — that is, for any combination of state, input symbol and stack top there is **never more than one possible move**, and no choice between an ε-move and a symbol-move.

**DCFL.** A language L is a **Deterministic Context Free Language** if it is **accepted by a DPDA**. Examples: {aⁿbⁿ | n ≥ 1} and the language of balanced parentheses are DCFLs; the language of **even-length palindromes {wwᴿ}** is a CFL but **not** a DCFL, since the machine cannot deterministically find the middle of the string.

**PDA vs DPDA:**

| Point | PDA (NPDA) | DPDA |
|---|---|---|
| Moves | δ(q,a,Z) may have **many** elements | δ(q,a,Z) has **at most one** element |
| ε-moves | freely allowed | allowed only when no conflicting move exists |
| Languages accepted | **all CFLs** | only **DCFLs** |
| Power | **strictly more powerful** | **strictly less powerful** |
| Closure under complement | not closed | **closed** |

**Important contrast to remember:** for **finite automata** DFA = NFA in power, but for **pushdown automata DPDA ⊂ NPDA** — non-determinism genuinely adds power once a stack is present.

**PDA vs Turing machine:**

| Point | PDA | Turing machine |
|---|---|---|
| Auxiliary memory | a **stack** (LIFO) | an **infinite tape** |
| Head movement | input read left to right only | head moves **left and right** |
| Can rewrite memory? | only push/pop at the top | can **rewrite any cell** |
| Language class | context-free (Type 2) | recursively enumerable (Type 0) |

---

**Q9-F. Explain the Chomsky hierarchy of languages and recursively enumerable languages.**

**Chomsky hierarchy.** According to **Noam Chomsky**, who gave a mathematical model of grammar in **1956**, there are **four types of grammars — Type 0, Type 1, Type 2 and Type 3** — which differ in the restrictions placed on their productions.

| Type | Grammar accepted | Language accepted | Automaton | Production form | Example |
|---|---|---|---|---|---|
| **Type 0** | Unrestricted grammar | **Recursively enumerable** | **Turing Machine** | α → β with at least one non-terminal in α, α ≠ ε | S → ACaB ; Bc → acB ; CB → DB ; aD → Db |
| **Type 1** | Context-sensitive grammar | **Context-sensitive** | **Linear Bounded Automaton** | αAβ → αγβ, γ non-empty | AB → AbBc ; A → bcA ; B → b |
| **Type 2** | Context-free grammar | **Context-free** | **Pushdown Automaton** | A → γ, γ ∈ (T ∪ N)\* | S → Xa ; X → a ; X → aX ; X → abc ; X → ε |
| **Type 3** | Regular grammar | **Regular** | **Finite State Automaton** | X → a or X → aY | X → ε ; X → a \| aY ; Y → b |

In **Type 1 and Type 3**, the rule **S → ε is allowed if S does not appear on the right side of any rule**.

**Containment.** The four classes form a strict hierarchy: **Type 3 ⊂ Type 2 ⊂ Type 1 ⊂ Type 0**. Every regular language is context-free, every context-free language is context-sensitive, and every context-sensitive language is recursively enumerable — but not conversely.

**Recursively enumerable languages.** The Turing machine **accepts all the languages, even though they are recursively enumerable**. **Recursive** means repeating the same set of rules for any number of times and **enumerable** means a list of elements. These are exactly the languages generated by **Type-0 (unrestricted) grammars**. The TM also accepts the **computable functions** such as addition, multiplication, subtraction, division and the power function.

---
## 6. Quick-fire table — the 2-mark one-liners (Q10-type)

| Term | One-line answer to write |
|---|---|
| **Alphabet (Σ)** | A finite non-empty set of symbols, e.g. {0, 1}. |
| **String** | A finite sequence of symbols from Σ. |
| **Language** | A set of strings over Σ; L ⊆ Σ\*. |
| **ε** | The empty string — the string of length zero. |
| **Σ\* / Σ⁺** | Kleene closure — all strings over Σ **including** ε / **excluding** ε. |
| **Finite automaton** | A 5-tuple (Q, Σ, δ, q0, F) that accepts or rejects a string; no output. |
| **FSM** | A finite-state model that may **produce output** (Mealy / Moore). |
| **DFA** | δ : Q × Σ → Q — exactly one move per symbol, no ε-moves. |
| **NFA** | δ : Q × Σ → 2^Q — may move to any combination of states. |
| **ε-NFA** | δ : Q × (Σ ∪ {ε}) → 2^Q — changes state without reading input. |
| **ε-closure(q)** | q plus every state reachable from q by ε-transitions only. |
| **Trap / dead state** | A non-final state all of whose transitions loop back to itself. |
| **Unreachable state** | A state not reachable from q0 by any input; deleted in minimization. |
| **DFA minimization** | Removing unreachable states and merging equivalent states. |
| **Regular expression** | An expression describing the language accepted by a finite automaton. |
| **Regular set** | Any set that is the value of a regular expression. |
| **Regular language** | A language accepted by some finite automaton / regular expression. |
| **a\* vs a⁺** | a\* = zero or more a's (includes ε); a⁺ = one or more a's. |
| **rr\* = r\*r** | = **r⁺** (identity rule). |
| **ε + rr\*** | = **r\*** (identity rule). |
| **(r\*)\*** | = **r\*** (identity rule). |
| **∅\*** | = **ε** (identity rule). |
| **Arden's theorem** | If P has no null string, R = Q + RP has the unique solution **R = QP\***. |
| **Closure properties** | Regular sets are closed under union, intersection, complement, difference, reversal, closure, concatenation, homomorphism and inverse homomorphism. |
| **Grammar** | A 4-tuple (N, T, S, P). |
| **CFG** | A quadruple (N, T, P, S) with a **single non-terminal** on every LHS. |
| **L(G)** | { w \| w ∈ T\*, S ⇒\* w } — the language generated by G. |
| **Derivation / parse tree** | An ordered rooted tree representing a derivation; root = S, leaves = terminals or ε. |
| **Yield of a tree** | The string read off the leaves left to right, ignoring nulls. |
| **Sentential form** | A partial derivation tree that **contains the root S**. |
| **LMD** | Apply a production to the **leftmost** variable at each step. |
| **RMD** | Apply a production to the **rightmost** variable at each step. |
| **Ambiguous grammar** | A grammar with >1 LMD, >1 RMD, or >1 parse tree for the same string. |
| **Useless symbol** | A symbol that never appears in the derivation of any terminal string. |
| **Null production** | A → ε. |
| **Unit production** | X → Y where both X and Y are non-terminals. |
| **CNF** | A → BC or A → a (plus S → ε). |
| **GNF** | A → a followed by any number of non-terminals (plus A → a, S → ε). |
| **Lemma 2 (GNF)** | A → Aα \| β becomes A → βZ \| β, Z → αZ \| α (removes left recursion). |
| **Type 0** | Unrestricted → recursively enumerable → **Turing Machine**. |
| **Type 1** | Context-sensitive → CSL → **Linear Bounded Automaton**. |
| **Type 2** | Context-free → CFL → **Pushdown Automaton**. |
| **Type 3** | Regular → regular language → **Finite State Automaton**. |
| **PDA** | A 7-tuple (Q, Σ, Γ, δ, q0, Z, F) — an FA with a **stack**. |
| **ID of a PDA** | A triple (q, w, α): current state, remaining input, stack (top at the left). |
| **Turnstile ⊢ / ⊢\*** | One move / a sequence of moves. |
| **PDA acceptance** | By **final state** or by **empty stack** — equivalent in power. |
| **DPDA** | δ(q, a, Z) has **at most one** element. |
| **DCFL** | A language accepted by a DPDA. |
| **Z0** | The initial stack symbol marking the **bottom** of the stack. |
| **Turing machine** | A 7-tuple (Q, Σ, T, δ, q0, B, F); invented by **Alan Turing, 1936**. |
| **δ of a TM** | Q × T → Q × T × {L, R} — next state, symbol written, head direction. |
| **B (blank)** | The blank symbol used as the **end marker** of the input on the tape. |
| **HALT state** | The state where the TM stops; it is **always an accept state**. |
| **Recursively enumerable** | A language accepted by a Turing machine (Type-0 grammar). |
| **Recursive / enumerable** | Repeating the same rules any number of times / a list of elements. |

---

## 7. Revision sheet

### Count-lists — memorise the numbers

- **5-tuple of an FA:** (Q, Σ, δ, q0, F)
- **4-tuple of a grammar:** (N, T, S, P) · **4-tuple of a CFG:** (N, T, P, S)
- **7-tuple of a PDA / DPDA:** (Q, Σ, Γ, δ, q0, Z, F)
- **7 components of a TM:** (Q, Σ, T, δ, q0, B, F)
- **4 types in the Chomsky hierarchy:** Type 0, 1, 2, 3
- **5 rules for RE → NFA:** a · ε · ab · a+b · a\*
- **5 steps for CFG → PDA:** GNF → one state → start symbol on the stack → δ(q,ε,A)=(q,α) → δ(q,a,a)=(q,ε)
- **7 steps for DFA minimization**
- **4 steps for NFA → DFA** · **5 steps for ε-NFA → DFA**
- **9 closure properties of regular sets**
- **3 conditions of CNF** · **3 conditions of GNF**
- **2 lemmas used to obtain GNF**
- **4 features of a Turing machine** · **4 parts of the TM basic model**
- **2 modes of PDA acceptance:** final state, empty stack
- **13 identity rules of regular expressions**

### The identity rules (Part-A Q4 lives here)

ε + r = r + ε = r · εr = rε = r · ∅r = r∅ = ∅ · ∅\* = ε · r + r = r · r\*r\* = r\* · **rr\* = r\*r = r⁺** · (r\*)\* = r\* · **ε + rr\* = ε + r\*r = r\*** · (r+s)\* = (r\*s\*)\* = (r\*+s\*)\* · (r+s)ᵏ = rᵏ + sᵏ · (rs)\*r = r(sr)\* · (r1r2)r3 = r1(r2r3) but **r1r2 ≠ r2r1**.

**The two moves that solve almost every simplification:** **r\*r → r⁺** and then **r⁺ + r\* → r\***.

### Comparison tables

**DFA vs NFA**

| | DFA | NFA |
|---|---|---|
| δ | Q × Σ → Q | Q × Σ → 2^Q |
| Moves per symbol | exactly one | zero, one or many |
| ε-moves | no | yes (ε-NFA) |
| States needed | more | fewer |
| Construction | harder | easier |
| Power | **equal** | **equal** |

**DPDA vs NPDA vs FA vs TM**

| Machine | Memory | Language class | Grammar |
|---|---|---|---|
| FA (DFA = NFA) | none | Regular | Type 3 |
| DPDA | stack, deterministic | DCFL | subset of Type 2 |
| PDA (NPDA) | stack | Context-free | Type 2 |
| LBA | bounded tape | Context-sensitive | Type 1 |
| TM | infinite tape | Recursively enumerable | Type 0 |

**CNF vs GNF**

| | CNF | GNF |
|---|---|---|
| RHS form | **AB** or **a** | **a** followed by variables |
| Fixes | the **length** of the RHS | the **shape** (must start with a terminal) |
| Used for | CYK parsing, bounding derivation length | **CFG → PDA**, removing left recursion |
| Derivation length for \|w\| = n | 2n − 1 steps | exactly n steps |

### Commonly confused pairs — say the difference in one line

- **FSM vs FA** — an FSM may produce **output**; an FA only **accepts or rejects**.
- **NFA vs ε-NFA** — the ε-NFA can additionally change state **without consuming input**.
- **DFA = NFA in power**, but **DPDA ⊂ NPDA in power**. This asymmetry is a favourite question.
- **Ambiguous grammar vs ambiguous language** — ambiguity is a property of the **grammar**; some grammars can be rewritten unambiguously.
- **Useless symbol vs unreachable state** — the first is a grammar concept, the second an automaton concept.
- **Null production (A → ε) vs unit production (X → Y)** — do not mix up the removal procedures.
- **CNF vs GNF** — "**C**homsky = **C**ouple of variables", "**G**reibach = **G**ets a terminal first".
- **Acceptance by final state vs by empty stack** — different definitions, **same language class**.
- **Recursive vs recursively enumerable** — remember the PPT gloss: recursive = repeating the same rules, enumerable = a list of elements.
- **Σ (input symbols) vs Γ / T (stack or tape symbols)** — Σ ⊆ Γ and Σ ⊆ T, never the reverse.

### Standard DFA designs worth memorising cold

| Language over {0,1} | Trick | States |
|---|---|---|
| starts with 1, ends with 0 | fix the first symbol, then track the last | 3 + dead |
| ends with 00 | count trailing zeros: 0, 1, ≥2 | 3 |
| three consecutive 0's | count consecutive 0's, any 1 resets | 4 |
| no consecutive 1's | remember whether the last symbol was 1 | 2 + dead |
| **even # 0's and even # 1's** | **2 × 2 parity square, start = final** | **4** |
| odd number of 1's | parity of 1's | 2 |
| divisible by 3 (binary) | states = remainders 0, 1, 2; next = (2r + b) mod 3 | 3 |
| exactly one a | b\*ab\* | 2 + dead |
| at least one a | b\*a(a+b)\* | 2 |

### Exam-hall tactics

1. **Read the verb.** "Define" wants the tuple. "Design/Construct" wants a **diagram plus the tuple**. "Show that" wants a **proof with a concrete string**. "Explain the procedure" wants **numbered steps**.
2. **Draw the transition diagram AND write the transition table.** They are marked separately; the table costs 30 seconds.
3. **Always mark the start arrow (→) and the final states (double circle).** Marks are lost every year for this alone.
4. **A DFA must be complete** — if a state–symbol pair has no move, add a **dead state** and say so.
5. **Verify with two strings — one accepted, one rejected.** One extra line, and it proves the machine works.
6. **For PDA questions always show a trace using IDs and the ⊢ symbol**, ending with the word **ACCEPT**.
7. **For CFG → PDA, never skip the simplification.** Marks are given for spotting the **useless symbol** and the **unit productions** before GNF.
8. **For CNF, do the steps in order:** remove ε → remove unit → remove useless → replace terminals → break long RHSs. Name each step in the margin.
9. **In Part-A, answer both halves of the question** — 4 of the 6 questions ask two things.
10. **Attempt Q10 first in Part-B** — three short definitions for 6 marks is the best rate on the paper.
11. **Use the PPT's own terminology and spellings** — "Greibach Normal Form", "Instantaneous Description", "HALT state", "recursively enumerable", "turnstile notation".
12. **Never leave a Part-B question blank.** Even the formal definition plus the procedure steps, without the final diagram, earns 2–3 marks.
