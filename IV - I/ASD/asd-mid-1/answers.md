# Agile Software Development (9FC16) — Mid-1 Answer Book
**B.Tech IV Year I Sem · CSE & DS · 2 Hours · Max Marks 30 · Units I, II, III**

---

## 1. Exam Pattern Analysis

### 1.1 Structure (from the September-2025 First Mid paper)

| Part | Questions | Attempt | Marks | Total |
|---|---|---|---|---|
| **Part-A** | 6 short answers | **All compulsory** | 2 each | 12 |
| **Part-B** | 4 questions (Q7, Q8, Q9, Q10) | **Any THREE of FOUR** | 6 each | 18 |
| | | | | **30** |

### 1.2 Question → Unit map

**Part-A (compulsory, 6 × 2 = 12)**

| S.No | Unit | Question | BCLL | CO |
|---|---|---|---|---|
| 1 | Unit-I | Define Agile? | L1 | CO1 |
| 2 | Unit-I | Name some agile models? | L2 | CO1 |
| 3 | Unit-II | What are the values of ASD? | L1 | CO2 |
| 4 | Unit-II | Define Pair Programming? | L1 | CO2 |
| 5 | Unit-III | Write Phases in XP Project? | L2 | CO3 |
| 6 | Unit-III | Define refactoring? | L1 | CO3 |

**Part-B (any 3 of 4, 3 × 6 = 18)**

| S.No | Unit | Question | BCLL | CO |
|---|---|---|---|---|
| 7 | Unit-I | What is Agile Manifesto? Explain in detail | L2 | CO1 |
| 8 | Unit-II | Explain XP life cycle with neat diagram | L2 | CO2 |
| 9 | Unit-III | Explain how iterative development is practiced in both AM and XP | L3 | CO3 |
| 10 a) | Unit-I | Write about SCRUM? | L1 | CO1 |
| 10 b) | Unit-II | Name some Practices of XP? | L2 | CO2 |
| 10 c) | Unit-III | Define the Fit? | L1 | CO3 |

### 1.3 Pattern observations

- **Exactly two Part-A questions per unit.** Units are weighted equally — do not skip a unit.
- **Part-A questions here are single-topic** (unlike some papers that ask two things at once). Each answer needs one crisp definition + 2–3 supporting points. Do not write a page.
- **Part-B gives one question per unit plus a three-part mixed question.** Q10 is the safety net: its parts are 2-mark, L1/L2 recall, one from each unit — if you know the short answers you already have 6 marks.
- **BCLL distribution:** L1 = 6 questions (pure recall), L2 = 6, L3 = 1 (Q9). Only Q9 demands genuine analysis (compare/apply across AM and XP).
- **The verbs matter:**
  - *"Define…"* (Q1, Q4, Q6, Q10c) → one-sentence textbook definition, then one line of elaboration.
  - *"Name some…"* / *"Write Phases…"* (Q2, Q5, Q10b) → a **list**. Marks come from the number of correct named items, not prose.
  - *"What are the values…"* (Q3) → the four Agile Manifesto values, stated in the "X **over** Y" form.
  - *"Explain in detail"* (Q7) → definition + all four values + principles + why it matters.
  - *"with neat diagram"* (Q8) → **a diagram is compulsory.** No diagram = lost marks even if the prose is perfect.
  - *"Explain how … is practiced in both …"* (Q9) → must cover **both** sides and connect them. Answering only XP loses half the marks.

### 1.4 Strategy

- **Time budget (120 min):** Part-A 30 min (5 min each) → Part-B 80 min (~26 min per question) → 10 min review.
- **Which Part-B to skip:** attempt **Q10 + two of {Q7, Q8, Q9}**. Q7 (Agile Manifesto) and Q8 (XP lifecycle) are the most memorisable and both are L2. **Skip Q9** unless you are confident on the AM↔XP mapping — it is the only L3 and needs comparison, not recall.
- **Diagram discipline:** Q8 needs the XP lifecycle diagram. Draw it *first*, label it, then write around it.
- **Answer shape for 6 marks:** definition → labelled diagram → numbered points → one example. Bold/underline the keyword the examiner scans for.
- **Terminology:** use the book's exact spelling — *Agile Modelling* (double-l), *eXtreme Programming*, *timeboxing*, *MoSCoW*, *architectural spike*, *planning game*.

---

## 2. Solved Blueprint Paper

### PART – A (6 × 2 = 12 Marks) — Compulsory

---

**Q1. Define Agile? [Unit-I, L1, 2M]**

**Agile** literally means *nimble, quick-moving*. In software development, **agile methods** are methods that aim to be nimble and quick-moving in response to changes in requirements, to the people who make up the development teams, and to issues that arise during the development process.

An **agile methodology** is a method that tries to be responsive to the needs of the software development process, that is based on **practice and experience**, and that focuses on being **effective** (producing working, defect-free software) and **sufficient** (meeting requirements in both the short and long term).

---

**Q2. Name some agile models? [Unit-I, L2, 2M]**

The core agile methods covered are:

1. **XP** – eXtreme Programming
2. **DSDM** – Dynamic Systems Development Method
3. **SCRUM**
4. **FDD** – Feature-Driven Development
5. **AM** – Agile Modelling (an approach/philosophy applied to modelling, not a full methodology on its own)

---

**Q3. What are the values of ASD? [Unit-II, L1, 2M]**

The **Agile Manifesto** proposed four values for Agile Software Development:

1. **Individuals and interactions** over processes and tools
2. **Working software** over comprehensive documentation
3. **Customer collaboration** over contract negotiation
4. **Responding to change** over following a plan

*(If the question is read as "the core values of XP", they are: **Communication, Simplicity, Feedback, Courage**.)*

---

**Q4. Define Pair Programming? [Unit-II, L1, 2M]**

**Pair programming** is the XP practice in which **all code is developed by two developers working together at a single machine**. One developer, the **driver**, controls the mouse and keyboard; the other, the **navigator**, monitors and questions what the driver is doing.

The idea is that *"two heads are better than one"* — all code is **always reviewed by at least one other person** as it is written, giving constant code review and constant feedback.

---

**Q5. Write Phases in XP Project? [Unit-III / Unit-I, L2, 2M]**

The phases of the **XP project lifecycle** are:

1. **Architectural Spike** (exploration / risk reduction)
2. **Release Planning** (release-planning meeting → release plan)
3. **Iterations** (iteration planning meeting + implementation)
4. **Acceptance Testing** (customer-specified tests from user stories)
5. **Release** ("small releases", "release often")

---

**Q6. Define refactoring? [Unit-III / Unit-II, L1, 2M]**

**Refactoring** means **changing existing code so that it is better than it was before, but without providing any new functionality.**

It is one of the **twelve XP practices** — improving the system (for example, to aid simplicity, clarity or to remove duplication) **without changing its behaviour**. XP says you need *courage* to refactor, and you should never refactor when you have no clear plan of how you will improve the code.

---

### PART – B (Answer any THREE of FOUR, 3 × 6 = 18 Marks)

---

### **Q7. What is Agile Manifesto? Explain in detail. [Unit-I, L2, 6M]**

**Definition.** The **Agile Manifesto** is the statement produced by the **Agile Software Development Alliance**, embracing the philosophies its members commonly supported and which they believed help to produce better software. From this manifesto they defined a set of **principles** for Agile Software Development.

**DIAGRAM:**
```
                    AGILE MANIFESTO
                          |
      +---------+---------+---------+---------+
      |         |         |         |
  Individuals  Working  Customer  Responding
      &       software  collab-   to change
 interactions    OVER   oration      OVER
     OVER      compre-   OVER    following a
 processes &   hensive  contract     plan
    tools      docum-   negoti-
              entation   ation
      +---------+---------+---------+
                          |
              set of AGILE PRINCIPLES
                          |
        XP  ·  DSDM  ·  SCRUM  ·  FDD  ·  AM
```

**The four values, in detail:**

1. **Individuals and interactions over processes and tools.**
   It is the **people involved and how they communicate** that typically has the largest bearing on the success (or failure) of a software project. Processes, methodologies and tools can help, but they are **not the overriding influence**. Therefore you should encourage the best people and the best group interactions.

2. **Working software over comprehensive documentation.**
   At the end of the day it is **the software** produced by the project that will be used by a user, **not the documentation**. Documentation should therefore not be a major goal in and of itself; it should be a **supporting medium** for the actual product — the software.

3. **Customer collaboration over contract negotiation.**
   Time should be spent **working with customers** and getting them involved in the development, rather than on detailed contract negotiations. *Example:* on many projects the legal or financial department imposes a contract and lengthy negotiations purely so that they "have something to hit us with" if things go wrong — effort that produces no software.

4. **Responding to change over following a plan.**
   Agile development **embraces change** rather than saying *"it's not in the requirements or the plan, so we can't do it."* Development progresses in **response to user feedback**, rather than as a reaction to a fixed plan.

**Important point about the word "over":** these are **values, not absolutes**. The items on the right still have value — the manifesto simply says the items on the **left have more value**.

**Consequence (fixed vs flexible):** in an agile method the **time available and the resources available are fixed**, while the **functionality is flexible**. The aim is to set a fixed delivery date at which something *will* be delivered, prioritise the functionality that must be implemented, and accept that not everything may be delivered.

---

### **Q8. Explain XP life cycle with neat diagram. [Unit-II, L2, 6M]**

**Definition.** **eXtreme Programming (XP)** is a lightweight agile method designed to support small development teams working with **uncertain and changing requirements**, focused on the **timely delivery of software that meets users' requirements**. Its lifecycle is a series of planning stages and implementation stages driven by **user stories**.

**DIAGRAM: The XP Project Lifecycle**
```
        User Stories
             |
             v
   +---------------------+       Architectural
   |  Initial Project    | <---  SPIKE (research /
   |     Planning        |       risk reduction)
   +---------------------+
             |
             v
   +---------------------+
   |  RELEASE PLANNING   |  --> Release Plan
   |     (meeting)       |      (which stories,
   +---------------------+       which release,
             |                   how many iterations)
             v
   +---------------------+
   | ITERATION PLANNING  | <-------------+
   |    (meeting)        |               |
   +---------------------+               |
             |                           |
             v                           | next
   +---------------------+               | iteration
   |   IMPLEMENTATION    |               |
   | (pair programming,  |               |
   |  test-first, CI,    |               |
   |   refactoring)      |               |
   +---------------------+               |
             |                           |
             v                           |
   +---------------------+               |
   |  ACCEPTANCE TESTS   | -- fail ------+
   |  (from user stories)|
   +---------------------+
             |  pass
             v
   +---------------------+
   |   SMALL RELEASE     | --> to customer --> feedback
   +---------------------+          |
             ^                      |
             +----------------------+
```

**The phases explained:**

1. **Architectural Spike.**
   A **spike** is an attempt to **reduce the risk** associated with an unknown area of the system, technology or application domain. It may involve investigation, research and possibly throw-away software to evaluate the problem. The result of most explorations is **not good enough to keep and should be thrown away**. Early on, resolving the overall architecture is important, so this research is fed into the release-planning meeting. Other spikes are used during project planning to settle unresolved issues.

2. **Release Planning.**
   A **release-planning meeting** creates the **release plan**, which lays out the overall project: **which user stories** will be implemented, **in which release**, **how many iterations** are planned, and **when each iteration will be delivered**. It is done by negotiation between the interested parties, using estimates derived from the user stories; the estimates are produced by the **technical members** of the team with input from users.

3. **Iterations.**
   Each iteration **adds to the agility** of the team: at the start of each iteration, changes can be made to what will be done and when. **The shorter the iteration, the quicker the team can respond to change** — XP recommends iterations lasting only a matter of **weeks**. At the beginning of each iteration an **Iteration Planning meeting** determines exactly what will happen (which programming tasks, and when). If it looks like the iteration will not achieve all that was planned, further iteration-planning meetings are called during the iteration.

4. **Acceptance Testing.**
   **Acceptance tests are created from the user stories** written at the start of the project. Each iteration implements one or more user stories, and those stories are translated into a series of acceptance tests during the iteration. The **customer must specify the scenarios** that test whether a story has been correctly implemented. A story is **not limited to one acceptance test** — it may relate to many, depending on the complexity of the scenario.

5. **Release.**
   XP promotes **"small releases"** and **"release often."** The release-planning meeting identifies meaningful **"chunks" of system functionality** that make business sense to users and to the state of the system. These are made available to users as soon as available, giving **early and frequent feedback** instead of a "big bang" delivery followed by worrying about the consequences.

**Example.** For an online bookstore, a spike investigates whether MySQL can carry the load; the release plan puts *"search for a book"* and *"add to basket"* into Release 1 across two 2-week iterations; the customer writes acceptance tests such as *"searching for 'Java' returns 12 titles"*; Release 1 ships with only search and basket working, and the customer's feedback reshapes Release 2.

---

### **Q9. Explain how iterative development is practiced in both AM and XP. [Unit-III, L3, 6M]**

**Definition.** Both **Agile Modelling (AM)** and **eXtreme Programming (XP)** belong to the agile movement, and both are motivated by the desire to **produce better software faster**. Neither does "big up-front" work: both work in **small increments with rapid feedback**, and this is what makes them **complementary rather than contradictory**.

**DIAGRAM: One iteration, with AM inside XP**
```
   USER STORY
        |
        v
  [ AM: model to understand / model to communicate ]
        |            (whiteboard, index card, sketch)
        v
   WRITE A TEST  -----------------------------+
        |                                     |
        v                                     |
  [ AM: MODEL THE SOLUTION ]  <-- small,      | repeat
        |                        temporary    | until
        v                                     | finished
   IMPLEMENT THE SOLUTION (pair programming)  |
        |                                     |
        v                                     |
   RUN THE TEST / GET THE CODE TO WORK        |
        |                                     |
        v                                     |
  [ AM: DISCARD TEMPORARY MODELS ]  ----------+
        |
        v
   REFACTOR  -->  INTEGRATE  -->  SMALL RELEASE  --> feedback
```

**How XP practises iterative development:**

1. **Short iterations.** Each iteration is deliberately short, allowing **rapid and frequent feedback**; a minimal system may be produced and even put into production quickly, then grown in whatever direction proves most valuable.
2. **Small releases, release often.** A software system is developed **iteratively with small releases**, each adding features and enabling rapid feedback.
3. **The planning game repeats every iteration.** Its **steering phase** exists precisely to **update the plan as things change** — iteration planning, project recovery, new stories, re-estimation.
4. **Continuous integration and test-first coding** make the inner loop iterative too: new code is integrated and the system rebuilt every time a task is completed, possibly many times a day.
5. **Don't anticipate — code for current needs**, leaving tomorrow's functionality to tomorrow.

**How AM practises iterative development:**

1. **Model in small increments.** AM explicitly rejects **BMUF (Big Modelling Up-Front)**; its practices *"Model in Small Increments"* and *"Prove it with Code"* mean a small model is built, proved by code, then the next one.
2. **Modelling is done as and when required**, throughout the life of the project — not once at the start.
3. **Discard temporary models.** Models created to elaborate a task or clarify a story may be **thrown away** once they have served their purpose; **"Update only when it hurts."**
4. **Use the simplest tools** — a whiteboard, index cards or post-it notes are legitimate models, which makes each modelling increment cheap enough to repeat every iteration.
5. **Models are just barely good enough**: sufficiently accurate, sufficiently consistent, sufficiently detailed — and no more.

**Where the two meet (the fit):**

| XP iterative practice | AM equivalent in the same iteration |
|---|---|
| Short iterations / small releases | Model in small increments |
| Simple design | Create simple content; depict models simply |
| Rapid feedback from tests | Prove it with code; rapid feedback |
| Refactoring | Model to understand the code before you refactor it |
| Test-first coding cycle | Insert *"model the solution"* and *"discard temporary models"* into the cycle |
| Planning game / iteration planning | Model to break user stories into tasks (not up-front design) |

**Worked example.** In iteration 3 of a membership website, the pair picks the story *"user submits registration"*. They sketch the screen and its submit behaviour **on a whiteboard** (AM: model to communicate) — enough to identify three tasks. They then write the failing test, model the two classes involved on the same whiteboard, implement them in pairs, run the test, **wipe the whiteboard** (discard the temporary model), refactor, and integrate. Next iteration the cycle repeats with a fresh, equally small model.

**Conclusion.** XP supplies the **iterative rhythm** (plan → test → code → integrate → release); AM supplies **just enough modelling inside that rhythm** to understand and communicate — never so much that it becomes a burden. Iterative development is therefore the common backbone of both.

---

### **Q10. (2 + 2 + 2 = 6 Marks)**

**a) Write about SCRUM? [Unit-I, L1, 2M]**

**SCRUM** is a set of **rules, procedures and practices** that are all inter-related and that work together to **improve the development environment, reduce organisational overheads, and ensure that iterative deliverables match the end users' requirements**. Interestingly, SCRUM aims to help produce a **"product"**, of which software is just one example.

**Key features:** an iterative cycle of only **30 days** between iterative deliveries, plus **daily reviews** of about **15 minutes**, in which each member states: (1) what has been done since the last meeting, (2) whether anything is causing a problem or obstructing their tasks, and (3) what they will do before the next meeting.

**b) Name some Practices of XP? [Unit-II, L2, 2M]**

The **twelve XP practices** are:

1. The planning game
2. Small releases
3. Simple design
4. Testing
5. Refactoring
6. Pair programming
7. Collective ownership
8. Continuous integration
9. On-site customer
10. Coding standards
11. 40-hour week
12. System metaphor

*(If you have not adopted all twelve, you are not truly doing XP.)*

**c) Define the Fit? [Unit-III, L1, 2M]**

**"The Fit"** refers to how **Agile Modelling fits into XP**. Many AM practices **fit straight into XP** because they are simply the **modelling equivalent of XP's programming-oriented practices**.

AM needs to be applied **with some other development methodology** to be of any real benefit — it brings a suite of agile techniques to the process of modelling. **XP does do modelling** (contrary to what some alleged XP practitioners believe), but it does **not do "big up-front modelling"**: modelling is performed **as and when required** during the lifetime of the project. That is the fit.

---

## 3. Syllabus Map

| Topic | Source file |
|---|---|
| What is Agile / agile methodology | `ASD_UNIT-1.pdf` |
| Agile Manifesto (4 values) | `ASD_UNIT-1.pdf` |
| What are Agile Methods (fixed time/resources vs flexible functionality) | `ASD_UNIT-1.pdf` |
| Agile Modelling — 3 goals, 5 criteria | `ASD_UNIT-1.pdf` |
| XP overview, 4 basic principles, key ideas | `ASD_UNIT-1.pdf` |
| XP Project Lifecycle (Spike, Release Planning, Iterations, Acceptance Testing, Release) | `ASD_UNIT-1.pdf` |
| DSDM — 9 principles, 7 phases, timeboxing, MoSCoW | `ASD_UNIT-1.pdf` |
| SCRUM — definition, benefits, 30-day cycle, daily review | `ASD_UNIT-1.pdf` |
| Feature-Driven Development — features, attributes, 5 processes, iterative feature lifecycle | `ASD_UNIT-1.pdf` |
| Modelling Misconceptions (9) | `ASD_UNIT-1.pdf` |
| Tool Misconceptions (5) | `ASD_UNIT-1.pdf` |
| XP introduction and misunderstandings | `ASD_UNIT-2.pdf` |
| Core XP Values — Communication, Simplicity, Feedback, Courage | `ASD_UNIT-2.pdf` |
| User Stories | `ASD_UNIT-2.pdf` |
| The Twelve XP Practices | `ASD_UNIT-2.pdf` |
| What is so extreme about XP (knob analogy) | `ASD_UNIT-2.pdf` |
| Planning XP Projects; agile influences on planning | `ASD_UNIT-2.pdf` |
| The Planning Game (players, goal, strategy, pieces, 3 phases) | `ASD_UNIT-2.pdf` |
| Initial vs Release planning game; elaboration; iteration planning | `ASD_UNIT-2.pdf` |
| Test First Coding — 9 steps, what to test | `ASD_UNIT-2.pdf` |
| Making Pair Programming Work — workflow + 9 tips | `ASD_UNIT-2.pdf` |
| Agile Modelling and XP — Introduction, The Fit | `ASD_UNIT-3.pdf` |
| Common Practices (Tables 7.1, 7.2) | `ASD_UNIT-3.pdf` |
| Modelling Specific Practices — model with a purpose, multiple models, know your models | `ASD_UNIT-3.pdf` |
| Model to Understand / Model to Communicate | `ASD_UNIT-3.pdf` |
| XP Objections to Agile Modelling | `ASD_UNIT-3.pdf` |
| AM and Planning XP Projects | `ASD_UNIT-3.pdf` |
| XP Implementation Phase — refactoring, test-first, simple design, pair programming | `ASD_UNIT-3.pdf` |

---

## 4. Part-A Bank (2-mark Q&As)

### UNIT-I

**Q. Define Agile.**
Agile means *nimble, quick-moving*. Agile methods aim to be nimble and quick-moving in response to changes in requirements, in the people forming the team, and in issues arising during development. Their primary goal is the creation of **working, defect-free software**.

**Q. What is an Agile Methodology?**
A method that tries to be **responsive to the needs of the software development process**, that is **based on practice and experience**, and that focuses on being **effective and sufficient**.

**Q. What is meant by "effective" and "sufficient" in agile?**
**Effective** = producing working, defect-free software (as far as possible). **Sufficient** = meeting requirements in both the short term and the long term — e.g. a long-lived project needs more documentation than a short-lived one.

**Q. Name some agile models/methods.**
XP (eXtreme Programming), DSDM, SCRUM, FDD (Feature-Driven Development), and Agile Modelling.

**Q. What is the Agile Manifesto?**
A manifesto produced by the **Agile Software Development Alliance** embracing the philosophies its members commonly supported. It proposes **four values**, from which a set of **agile principles** was derived.

**Q. State the four values of the Agile Manifesto.**
1. Individuals and interactions **over** processes and tools. 2. Working software **over** comprehensive documentation. 3. Customer collaboration **over** contract negotiation. 4. Responding to change **over** following a plan.

**Q. In agile methods, what is fixed and what is flexible?**
The **time available and the resources available are fixed**; the **functionality is flexible**. A fixed delivery date is set, functionality is prioritised, and it is accepted that not everything may be delivered.

**Q. What is Agile Modelling?**
Agile Modelling applies the philosophy of the agile movement to the **software modelling process**, finding the balance between **too little and too much modelling** at design stage. It is **not a methodology in its own right** — it is an approach or philosophy.

**Q. State the three main goals of Agile Modelling.**
1. Define and promote a set of **values, principles and practices** that help produce appropriate models. 2. Guidance on applying modelling to **agile software development**. 3. Guidance on applying agile modelling to **other software processes** (such as RUP).

**Q. List the criteria an agile model should meet.**
Agile models: (1) provide **positive value**, (2) **fulfil their purpose and no more**, (3) are **sufficiently accurate**, (4) are **sufficiently consistent**, (5) are **sufficiently detailed** — and are as **simple as possible** and **understandable** to their intended audience.

**Q. What is XP?**
**eXtreme Programming** — originally designed to support **small development teams** working with **uncertain and changing requirements**, based on software engineering principles but focused on the **timely delivery of software that meets users' requirements**.

**Q. What are the four basic principles underlying XP?**
**Communication** (it is good to talk), **Simplicity** (keep it simple and grow the system as required), **Feedback** (let users give feedback early and often), and **Courage** (to go with such an approach).

**Q. What is an architectural spike in XP?**
A **spike** is an attempt to **reduce the risk** associated with an unknown area of the system, technology or application domain. It involves investigation, research and possibly throw-away software; **the result is usually not good enough to keep and should be thrown away**.

**Q. What is a release plan in XP?**
The output of the **release-planning meeting**. It lays out the overall project: which **user stories** go into which **release**, how many **iterations** are planned, and when each iteration will be delivered.

**Q. How are acceptance tests created in XP?**
They are **created from the user stories** written at the start of the project. The **customer specifies the scenarios** that test whether a story has been correctly implemented. One story may map to **many** acceptance tests.

**Q. What is DSDM?**
The **Dynamic Systems Development Method** — a framework of **controls and best practice for Rapid Application Development (RAD)**, suited to developing **complex business solutions within tight timeframes**. It is time, quality and cost sensitive — *"rapid and right."*

**Q. State the central tenet of DSDM.**
That **"high quality demands fitness for purpose as well as technical robustness"**, rather than matching every requirement in the requirements document to the nth degree — not least because many requirements documents are at best flawed.

**Q. How many principles does DSDM have? Name any three.**
**Nine.** Examples: active user involvement is imperative; the team must be empowered to make decisions; the focus is on frequent delivery of products; **fitness for business purpose** is the essential acceptance criterion; all changes during development are **reversible**; testing is integrated throughout the lifecycle.

**Q. List the seven phases of the DSDM lifecycle.**
1. Pre-Project Phase 2. Feasibility Study 3. Business Case Study 4. Functional Model Iteration (FMI) 5. Design and Build Iteration (DBI) 6. Implementation Phase 7. Post-Project Phase. The **3 core phases** are FMI, DBI and Implementation.

**Q. What are the three outputs of the DSDM Business Study phase?**
**Business Area Definition (BAD)** — high-level requirements and process description of the end product; **System Architecture Definition (SAD)** — sketch of the end system's architecture; **Outline Prototyping Plan** — the prototyping strategy to be adopted.

**Q. What is timeboxing in DSDM?**
DSDM refines timeboxing by **nesting shorter timeboxes of 2–6 weeks** within the overall time frame. Each timebox passes through three phases: **Investigation**, **Refinement** and **Consolidation**.

**Q. What does MoSCoW stand for?**
**M**ust haves — fundamental to the project's success "on time"; **S**hould haves — important, but success does not rely on them; **C**ould haves — can be left out without impact, "on budget"; **W**on't have this time round — can be done at a later date.

**Q. Define SCRUM.**
A set of **rules, procedures and practices**, all inter-related, that work together to improve the development environment, reduce organisational overheads, and ensure that **iterative deliverables match the end users' requirements**.

**Q. What are the three questions asked in a SCRUM daily review?**
(1) What has been **done** since the last meeting? (2) Is there anything **causing a problem** / any obstacle to completing tasks? (3) What will each member **do before the next meeting**? The review lasts about **15 minutes**; the iterative cycle is **30 days**.

**Q. List any three benefits of SCRUM.**
It manages and controls development work in an agile manner; it explicitly acknowledges that **requirements may change rapidly**; existing engineering practices can still be used within it; it is **team-based** and improves communication; it **scales** from small to very large projects; it helps identify and remove obstacles.

**Q. Define a "feature" in FDD.**
A **schedulable requirement** associated with the activity used to realise it. It may be a **user requirement**, an **application behaviour requirement**, or an **internal requirement**. Each feature has a **priority** and a **cost**, so a feature mixes units of requirements with units of management.

**Q. List the attributes of a feature in FDD.**
Features should be **small and useful in the eyes of stakeholders**; can be **grouped** into feature sets / work packages; **focus developers** on elements of tangible benefit; are **prioritised**; are **schedulable**; have an **estimated cost**; and can be grouped into short iterations (possibly as short as two weeks).

**Q. Name the five processes of FDD.**
1. Develop an overall **model** of the domain and create an initial feature list. 2. Build a **detailed, prioritised feature list**. 3. **Plan** by feature. 4. **Design** by feature. 5. **Build** by feature.

**Q. Why are iterative lifecycles more complex than linear ones?**
They require more **planning and re-planning**, more **assessment** of where the project has got to, more **judgment** of what should happen now, more **monitoring of progress**, and the ability to **respond more quickly** to the current situation.

**Q. List any four modelling misconceptions.**
(1) Models equal documentation. (2) Modelling implies a heavyweight process. (3) You must "freeze" the requirements. (4) Your design is carved in stone. (5) You must use a CASE tool. (6) All developers know how to model. (7) You can think of everything from the start. (8) Modelling is a waste of time. (9) The world revolves around the data model.

**Q. List the tool misconceptions.**
(1) UML requires CASE tools. (2) Modelling requires the use of CASE tools. (3) Agile modellers don't use CASE tools. (4) UML is all you need. (5) The CASE tool is master. *(In truth the CASE tool should be the **servant, not the master**.)*

**Q. Why is "models equal documentation" wrong?**
A model is **part of** the documentation, but it is **not sufficient as documentation** — a UML model cannot adequately represent all the functional, non-functional, behavioural and structural information needed to describe how a system is implemented.

---

### UNIT-II

**Q. What is XP, in terms of what it focuses on?**
XP is part of the agile movement that focuses on the **writing of the software that will implement the required system** — e.g. Java, Smalltalk, C++, C# code, database tables, XML files.

**Q. How has XP been misunderstood?**
It is often wrongly associated with **hacking, a lack of planning, avoiding documentation**, and programmers "wildly attacking code while working in pairs." (One company even banned all code comments in the name of XP.)

**Q. State the core XP values.**
**Communication, Simplicity, Feedback and Courage.**

**Q. Explain the value of Communication in XP.**
Many problems or defects within software systems can be **traced back to poor communication** during development — between programmers, and between end users and the development team. XP therefore makes communication an explicit value.

**Q. Explain the value of Simplicity in XP.**
Aim for the **simplest solution that does the job**. The simpler the implementation, the easier it is to implement, test, understand and maintain — and therefore the easier it is to **find and correct bugs**.

**Q. Explain the value of Feedback in XP.**
Projects should get feedback **early and often** — from the customer, the team, real end users and other stakeholders. It identifies problems early, deals with unknowns and clarifies issues, avoiding nasty shocks later. Example: running unit tests every time new code is integrated identifies problems immediately.

**Q. Why is Courage a core XP value?**
You need courage to **refactor** code, to **throw away** code, to **code for now and leave tomorrow to tomorrow**, and to move management to adopt XP's way of working.

**Q. What is a user story?**
A description **in the customers' own words** of what the system needs to do. Each story has a **name**, a **short paragraph** describing its purpose, an **estimate** of how long it will take, and a **relative importance** ("must have", "should have", "nice to have").

**Q. Who writes and who validates user stories?**
They are conceptually **written by the customers** (though in practice a developer may write down what the customer says). Crucially, it is **customers, not developers, who can validate (and reject) stories**.

**Q. When are user stories developed?**
At any time by customers, but particularly during the **planning game** — the process that occurs at the start of an XP project.

**Q. List the twelve XP practices.**
Planning game; small releases; simple design; testing; refactoring; pair programming; collective ownership; continuous integration; on-site customer; coding standards; 40-hour week; system metaphor.

**Q. What is collective ownership?**
**Everyone owns all the code**, so anyone has the right to change any code at any time in order to improve it. XP does not support a culture of blame — everyone is responsible for fixing a problem when they find it.

**Q. What is continuous integration?**
New code is **integrated and the system rebuilt every time a task is completed** — which may be many times a day.

**Q. What is the on-site customer practice?**
Have a **real customer as part of the team**, so that they are **always available to answer questions**.

**Q. What is the 40-hour week practice?**
Work **no more than 40 hours a week**, so that developers are always **fresh and ready** for the challenges facing them.

**Q. What is the system metaphor?**
A **metaphor for how the system operates**, used to guide the whole development. It is similar to the architecture of the system but typically **simpler**.

**Q. What is so "extreme" about Extreme Programming?**
XP is **very lightweight** (it really only focuses on programming), and it **takes best practices to their ultimate conclusions**. Kent Beck pictured each practice as a **knob on a control board and turned every knob to maximum** — what happened was XP.

**Q. Give examples of "turning the knob to maximum."**
If code reviews are good → review code **all the time** (pair programming). If testing is good → **everybody tests all the time** (unit + acceptance testing). If designing is good → make it a **daily** activity (refactoring). If integration testing is good → integrate **daily or hourly** (continuous integration). If short iterations are good → make them **hours or days** (the planning game).

**Q. What are the agile influences on planning an XP project?**
**Plan for now** (detailed planning only for the next release/iteration), **Responsibility** (developers must own the plan, not have it imposed top-down), **Dependencies** (ignore them; focus on highest business priority first), and **Simplicity** (plan only in the detail the current purpose needs).

**Q. Who are the two players in the planning game, and what is its goal?**
The players are **"Business"** (stakeholders who can specify the operation of the system) and **"Development"** (members of the development team relevant to the features discussed). The goal is to **maximise the value of the software produced by the team**.

**Q. What is the strategy of the planning game?**
To **invest as little as possible** to put the **most valuable functionality into production as quickly as possible**, but **without compromising the required product quality**.

**Q. What are the game pieces in the planning game?**
The **user stories**, written on **index cards** and moved around during the game. (Whiteboards, scraps of paper or software tools may be used instead of index cards.)

**Q. Name the three phases of the planning game.**
**Exploration** (determine new user stories), **Commitment** (decide which features go into a release), and **Steering** (update the plan as development progresses).

**Q. What are the steps of the exploration phase?**
**Write a story** (Business writes a user story), **Estimate a story** (Development estimates it; if it can't be estimated or is too big they ask for clarification), and **Split/Break a story up** (Business breaks it into smaller chunks).

**Q. What are the steps of the commitment phase?**
**Sort by value** (Business sorts stories into must have / should have / nice to have), **Sort by risk** (Development sorts into precisely estimable / roughly estimable / not estimable), **Set (project) velocity**, and **Choose scope**.

**Q. What are the steps of the steering phase?**
**Iteration planning**, **Project recovery**, **Identifying a new story**, and **Project re-estimation**.

**Q. What decisions belong to the customer and to the development team?**
**Customer/Business:** scope (what is in and out), priority, composition of releases, release dates. **Development:** estimates, consequences of technology choices, team and project organisation, risks associated with features, detailed scheduling.

**Q. What are the two forms of the planning game?**
The **initial planning game** (focuses on what the system as a whole should do; considers all in-scope stories) and the **release/iteration planning game** (focuses on the contents of a release — same steps, much greater detail).

**Q. What is the elaboration process?**
Research carried out after the planning game to clarify user stories, requirements or technical issues. Its aims: **lower the risk of bad estimates**, **experiment/prototype** different solutions, **improve the team's understanding** of the domain/technology, and **ensure required procedures and processes are in place**.

**Q. What two issues are considered when planning an iteration?**
(1) **Determining the size of the iteration** — big enough either to create a new release that adds business value or to make significant progress. (2) **Determining what should be done** within it to implement the user stories.

**Q. List the phases of iteration planning.**
Evaluation of the last iteration's lessons learned; review of user stories to incorporate; **task exploration** (tasks written for stories); **task commitment** (tasks estimated, load factors determined, balancing); finally the iteration plan is **verified**.

**Q. Define test-first coding.**
An approach in which developers **write the unit test before the code to be tested**. The argument: if you can't write the test — i.e. you don't know what the inputs and outputs should be — then you shouldn't be writing the code.

**Q. Why should a newly written test fail at first?**
Because it is run against **stub code** before the methods are implemented. Seeing it fail is an **important step** — it proves the test is actually exercising the code and is not passing by accident.

**Q. Give any three XP guidelines on what to test.**
Write tests for **any task being implemented**; for **non-trivial classes** that could easily be broken; **avoid** tests for methods that just delegate to an already-tested method; assume **more tests are better than fewer**; write tests that **instil confidence** in heavily used subsystems; add tests when **refactoring** or when a suite appears to be missing tests.

**Q. Define pair programming.**
Two developers working together at a **single machine**: the **driver** controls the mouse and keyboard, the **navigator** monitors and questions. All code is **always reviewed by at least one other person** — "two heads are better than one."

**Q. Are pairs permanent in pair programming?**
**No.** Pairs are **not permanent and should be changed regularly** — typically at the start of a new task. If a task spans several areas, one driver may pair with several navigators to benefit from their different expertise.

**Q. Describe the pair programming workflow.**
A pair forms for a task → **brief meeting** to discuss what they will do and how → work **test-first** (propose a test, implement the classes, run the test) → if it passes move to the next test, if it fails review the code → **integrate** with the current build → if system tests fail, revise → finish integrating only when **all tests pass** → task complete, **pair breaks up**.

**Q. Give any three tips for making pair programming work.**
**Engage in a dialogue** (driver explains, navigator questions); **listen to each other**; **take frequent breaks** (it is intensive — and don't discuss code during the break); **make it practical** (desks big enough for two); **don't be a back-seat driver**; **use a common environment**; build a **shared language and vocabulary**; allow **occasional non-pair time**; **change partners often**.

**Q. What is the "back seat driver" problem?**
When the navigator (often the more experienced one) **tells the driver what to do all the time**. That is not navigating — it is being a virtual driver using someone else's fingers. Instead, swap roles, or stop and discuss the proposed solution and let the driver run with it.

**Q. When is solo (non-pair) work acceptable in XP?**
Only as a **rare exception**: when **exploring completely alternative solutions**, or when **following multiple competing lines of investigation during debugging** (but not bug fixing).

---

### UNIT-III

**Q. What is the relationship between Agile Modelling and XP?**
Both are from the agile movement and both are motivated by the desire to **produce better software faster**. They are **complementary, not contradictory** — Agile Modelling can actually **enhance** an XP project.

**Q. Define "The Fit."**
The way **Agile Modelling fits into XP**: many AM practices fit straight into XP because they are the **modelling equivalent of XP's programming-oriented practices**. AM must be applied **with another methodology** to be of benefit; XP **does** model, but **not big up-front modelling** — it models **as and when required**.

**Q. Does XP do modelling?**
**Yes.** XP does do modelling, although this comes as a shock to some alleged XP practitioners. It does **not** do "big up-front modelling"; modelling is performed as and when required during the project's lifetime.

**Q. Name the modelling-specific AM practices that appear to have no place in XP.**
**Model with a purpose**, **using multiple models**, and **know your models**. They appear alien because XP has little to say about the act of modelling — the main exception being **stand-up modelling meetings** where existing code is analysed or new code explored with diagrams.

**Q. What is "Model with a Purpose"?**
The principle that every model must have a reason to exist. Two relevant motivational practices are **"Model to Understand"** and **"Model to Communicate"**.

**Q. Explain "Model to Understand."**
Before you **refactor or extend** code you must **understand** it. Individual methods or classes may be understandable in isolation, but a generated class diagram (e.g. via the **Omondo plug-in for Eclipse**) gives a much better feel for the structure of a package than merely looking at its contents.

**Q. Explain "Model to Communicate."**
Source code is the end result we are trying to produce, but it is **not the best way to explain your ideas to other people**. A model communicates design intent to others far better than code.

**Q. What does "Know Your Models" mean?**
Whether you are an Agile modeller or an XP developer, you must **know the tools available to you** — the **strengths and weaknesses of different types of models**. This helps keep models as simple as possible and apply the appropriate model to understand the system.

**Q. What is BMUF and does AM promote it?**
**BMUF = Big Modelling Up-Front.** AM **clearly does not promote it** — this is shown by practices such as **"Model in Small Increments"** and **"Prove it with Code."**

**Q. State any three XP objections to Agile Modelling and the AM reply.**
(1) *"Modelling is all about BMUF"* → AM says model in small increments, prove it with code. (2) *"All models are permanent documents that must be updated"* → AM says **discard temporary models**, **use the simplest tools**, **update only when it hurts**. (3) *"You need a complex tool like Rational Rose"* → AM says use whatever medium is appropriate: whiteboards, index cards, post-it notes. (4) *"You must know and use UML"* → AM does not mandate any representation. (5) *"XP does not encourage modelling"* → wrong: index cards and whiteboard diagrams **are** models. (6) *"Models are unnecessary documentation"* → documentation must suit its reader; code suits programmers, but not end users, non-programmers or support staff.

**Q. Why is "all models are permanent documents" wrong?**
Because AM's own practices contradict it: **"Discard temporary models," "Use the simplest tools"** and **"Update only when it hurts."**

**Q. Does an Agile modeller need precise UML?**
No. An Agile modeller **will not worry about creating a precise and complete UML diagram**. They focus on the **audience** of what they are creating and make sure it is **comprehensible to that audience**.

**Q. Where does AM fit into initial project planning of an XP project?**
Two steps: the **initial planning game** — modelling helps clarify user stories (e.g. a **UI mock-up with simple flow charts** to prototype behaviour); and the **elaboration process** — models help developers understand what is required, producing **better estimates**.

**Q. Where does AM fit into iteration/release planning?**
**Release planning game** — AM focuses the modelling used to clarify user requirements. **Elaboration process** — shorter, but AM ensures modelling does not become a burden. **Iteration planning** — modelling how stories might be implemented (initial class structures, behaviour) lets tasks be **identified, clarified or split**. This is **not large up-front design**; the models may be discarded.

**Q. What is the XP implementation phase?**
The phase where the **code actually gets written**. AM can complement several **implementation-oriented** XP practices — **refactoring, test-first coding, simple design and pair programming** — as opposed to process-oriented practices like the planning game or the 40-hour week.

**Q. Define refactoring.**
Changing **existing code so that it is better than it was before**, but such that it **does not provide any new functionality**. It is primarily a **code improvement technique**.

**Q. What must you make sure of before and after refactoring?**
Before: **make sure you know how to improve the code.** After: **make sure what you have done has improved the code.** In short — *"know what you are doing!"*

**Q. When should you NOT refactor?**
**"When you haven't got a clear plan of how you will improve the code."**

**Q. Is modelling relevant to refactoring?**
**Yes** — you must understand code before you can improve it, so a model (even a whiteboard sketch of a UI design showing what fields are needed and what happens on submit) supports refactoring.

**Q. State the basic test-first coding cycle.**
1. Write a test. 2. Write the code to be tested. 3. Run the test / get the code to work. 4. If the test passed, return to step 1 until finished.

**Q. State the AM-enhanced test-first coding cycle.**
1. Write a test. 2. **Model the solution.** 3. Implement the solution. 4. Run the test / get the code to work. 5. **Discard temporary models.** 6. If the test passed, return to step 1. This maximises the XP practice while supporting AM's principle of **rapid feedback**.

**Q. What does the XP practice of simple design aim to produce?**
The simplest implementation that: **runs all the tests**, has **no duplicate code**, **makes it clear to any reader what it is meant to do**, and has the **fewest possible classes and methods**.

**Q. Which AM practices promote simplicity?**
**Create simple content**, **depict models simply**, **apply patterns gently**, and **formalize contract models**.

**Q. Describe the roles within a pair in the XP implementation phase.**
The **driver** controls the mouse and keyboard; the **navigator** monitors what the driver is doing. It is essential that the pair **communicates** and that both understand what they are trying to achieve — and that the navigator understands **how** the driver intends to achieve it.

**Q. Why is Agile Modelling called a "fit" rather than a replacement for XP?**
Because AM is **not a complete methodology** — it must be added to another method. It supplies the modelling techniques XP lacks, mapping onto XP's existing practices rather than replacing them.

---

## 5. Part-B Long Answers (6-mark)

### UNIT-I

---

**Q7-A. What is Agile Manifesto? Explain in detail.**
→ **See the fully solved answer in Section 2, Q7.**

---

**Q7-B. What are Agile methods and how do they differ from traditional methodologies?**

**Definition.** **Agile methods** are methods that aim to be **nimble and quick-moving** in response to changes in requirements, in the people who make up the development team, and in issues arising during development. Their primary goal is the **creation of working, defect-free software**.

**DIAGRAM: Emphasis of traditional vs agile methods**
```
   TRADITIONAL                        AGILE
  +-------------+                  +-------------+
  | FUNCTIONALITY|  <-- FIXED      |  TIME       | <-- FIXED
  +-------------+                  |  RESOURCES  | <-- FIXED
  | TIME        |  <-- flexible    +-------------+
  | RESOURCES   |  <-- flexible    | FUNCTIONALITY| <-- FLEXIBLE
  +-------------+                  +-------------+
  "deliver everything,             "deliver on the date;
   whenever it is ready"            deliver what matters most"
```

**Key differences:**

1. **What is fixed.** In an agile method, **time and resources are fixed** and **functionality is flexible**. Traditional methods fix functionality and let time and cost slip.
2. **Delivery.** Agile sets a **fixed delivery date** at which *something* will be delivered, **prioritises** the functionality that must be implemented, and **acknowledges that not everything may be delivered**.
3. **Attitude to change.** Agile **embraces change** — development progresses in response to **user feedback**, not as a reaction to a fixed plan. Traditional methods say *"it's not in the requirements, so we can't do it."*
4. **People over process.** Agile holds that the **people and how they communicate** have the largest bearing on success; processes and tools help but are not the overriding influence.
5. **Documentation.** Agile treats documentation as a **supporting medium** for the software, not a goal in itself. Enough documentation is produced to be **sufficient** — a long-lived project needs more than a short-lived one.
6. **Customer relationship.** Agile values **collaboration with the customer** over contract negotiation, often placing a customer representative in the team.

**Example.** In a traditional project, a change request after sign-off triggers a change-control board and a re-negotiated contract. In an XP project the same change is written as a **new user story on an index card**, prioritised by the customer in the next planning game, and scheduled into the next iteration.

---

**Q7-C. Explain DSDM: its principles and lifecycle.**

**Definition.** **DSDM (Dynamic Systems Development Method)** provides a framework of **controls and best practice for Rapid Application Development (RAD)**. It is particularly suitable for projects that must develop **complex business solutions within tight timeframes**. Designed by a worldwide consortium of developers (from 1995, now Version 4.1), it evolved into an agile model that is **time, quality and cost sensitive** — *"rapid and right."* Its central tenet is that **"high quality demands fitness for purpose as well as technical robustness."**

**DIAGRAM: DSDM lifecycle**
```
  Pre-Project --> Feasibility --> Business Study     [sequential]
                                        |
                                        v
                        +------> FUNCTIONAL MODEL ITERATION (FMI)
                        |               |
                        |               v
              3 CORE    |       DESIGN & BUILD ITERATION (DBI)
              PHASES    |               |
                        |               v
                        +------- IMPLEMENTATION PHASE
                                        |
                                        v
                                  Post-Project
```

**The nine principles of DSDM:**
1. **Active user involvement is imperative.**
2. The team must be **empowered to make decisions**.
3. The focus is on **frequent delivery of products**.
4. **Fitness for business purpose** is the essential criterion for acceptance of deliverables.
5. **Iterative and incremental development** is necessary to converge on an accurate business solution.
6. All **changes during development are reversible**.
7. **Requirements are baselined at a high level.**
8. **Testing is integrated throughout the lifecycle.**
9. **Collaboration and cooperation** between all stakeholders is essential.

**The seven phases:**
1. **Pre-Project Phase**, 2. **Feasibility Study**, 3. **Business Case Study** — done **sequentially**; they set the ground rules and let users and teams understand the world in which the application must execute.
   - The **Feasibility Study** lasts only a few weeks and outputs a **feasibility report** assessing whether to use DSDM at all, plus an outline plan.
   - The **Business Study** produces three outputs: **Business Area Definition (BAD)**, **System Architecture Definition (SAD)** and the **Outline Prototyping Plan**.
4. **FMI** — analysis of features, producing the **Functional Model** (may include prototype code and analysis models); coding and prototyping.
5. **DBI** — designing and building the features; reviewing designs and functional prototypes; the primary output is the **tested system** meeting all requirements marked essential for that iteration.
6. **Implementation Phase** — transfer of the completed system from the development environment to production, plus **user training, user manual and Project Review Report**. If issues arise the project can **reiterate back** to the appropriate phase.
7. **Post-Project Phase.**

**Timeboxing and MoSCoW.** DSDM nests **timeboxes of 2–6 weeks**, each passing through **Investigation → Refinement → Consolidation**. Because timeboxes are fixed, deliverables vary with time remaining, so the **MoSCoW rules** decide what is dropped: **Must haves**, **Should haves**, **Could haves**, **Won't have this time round**.

---

**Q7-D. Write about SCRUM in detail.**

**Definition.** **SCRUM** is a set of **rules, procedures and practices** that are all inter-related and that work together to **improve the development environment, reduce organisational overheads and ensure that iterative deliverables match the end users' requirements**. An interesting aspect is that SCRUM aims to help produce a **"product"** — of which software is just one example.

**DIAGRAM: The SCRUM cycle**
```
   Requirements (may change rapidly)
            |
            v
   +--------------------------+
   |    30-DAY ITERATION      |
   |                          |
   |  DAILY REVIEW (15 min)   |  <-- every day
   |   1. What was done?      |
   |   2. Any obstacles?      |
   |   3. What is next?       |
   +--------------------------+
            |
            v
     Iterative deliverable  --> matches user requirements
            |
            +--> obstacles identified and REMOVED
```

**Benefits put forward by proponents of SCRUM:**
1. The **management and control of development work in an agile manner**.
2. It **explicitly acknowledges that requirements may be changing rapidly** within its iterative and incremental approach.
3. It is possible to **still use existing engineering practices** within SCRUM — which helps introduce agile methods into an organisation.
4. It is inherently **team-based** and improves **communication and cooperation**.
5. It **scales** from small projects up to very large projects.
6. It helps to **identify and then remove any obstacle** to smooth development.

**Process basis.** SCRUM is based on **current process control theories** and specifically aims to produce the **best end result given the current resources and time available**.

**Rhythm.** As well as an iterative cycle of only **30 days** between iterative deliveries, SCRUM employs **daily reviews**. These should be short (about **15 minutes**) and force team members to address the basics: what has been done since the last meeting, whether anything is causing a problem or obstructing their tasks, and what each member will do before the next meeting.

**Example.** A 12-person team building an insurance portal commits to a 30-day iteration containing the claims-entry feature. Each morning a 15-minute stand-up surfaces that the test database is unavailable — an **obstacle**, which the team then removes rather than silently absorbing as delay.

---

**Q7-E. Explain Feature-Driven Development (FDD).**

**Definition.** **FDD** is a feature-centric agile method. A **feature** is a **schedulable requirement associated with the activity used to realise it** — it may be a **user requirement** (be able to open a bank account), an **application behaviour requirement** (make a backup every 10 minutes) or an **internal requirement** (turn on debugging for system support). Each feature has a **priority** and a **cost**, so a feature **mixes units of requirements with units of management**.

**DIAGRAM: Iterative feature-based lifecycle**
```
  Requirements (use cases / spec / user stories)
            |
            v
   PRIORITISED FEATURE LIST
            |
            v
   PLAN OF ITERATIONS (each with a TIMEBOX)
            |
            v
   +--> PLAN THE ITERATION IN DETAIL
   |        (which features still relevant,
   |         revised priorities, ordering)
   |            |
   |            v
   |    WORK FEATURES BY PRIORITY
   |            |
   |            v
   |    TIMEBOX ENDS --> TEST current version
   |            |
   +---- not final iteration (may still deliver
              to users for early feedback)
                |
             final iteration --> DELIVER FINAL SYSTEM
```

**Attributes a feature should have:**
- Small and **"useful in the eyes of system stakeholders."**
- Can be **grouped** into business-related groupings (**feature sets** or **work packages**).
- **Focus developers** on producing elements of tangible benefit to stakeholders.
- **Prioritised**, **schedulable**, and with an **associated estimated cost**.
- Can be grouped into **short iterations** (possibly as short as two weeks).

**The five FDD processes (Coad 1999; Palmer and Felsing 2002):**
1. Develop an **overall model of the domain** and create an **initial feature list**.
2. Build a **detailed, prioritised feature list**.
3. **Plan by feature.**
4. **Design by feature.**
5. **Build by feature.**

**Why feature-centric?** Iterative lifecycles are **more complex than linear ones**: they require more planning and re-planning, more assessment of progress, more judgment of what should happen now, more monitoring, and quicker response to the current situation. Feature-centric management supplies the **element of control** needed to answer: how are we progressing against the overall goal? What are the priorities now and how have they changed? What issues and risks does the project face, and how can they be addressed or mitigated?

**Example.** For a banking system, *"open a bank account"* is a feature with priority "must have" and an estimated cost of 4 person-days; it is grouped into the *Account Management* work package and scheduled into a two-week timeboxed iteration.

---

**Q7-F. What is Agile Modelling? Explain its goals, criteria and the common modelling misconceptions.**

**Definition.** **Agile Modelling (AM)** applies the philosophy of the agile movement to the **software modelling process**. It tries to find an appropriate balance between **too little modelling and too much modelling** at the design stage — the point at which you have modelled enough to explore and document your system effectively, but **not so much that it becomes a burden**. It is **not a methodology in its own right**; it is an **approach or philosophy** towards the modelling stage of a project — an **add-on** to a method such as the Unified Process or XP.

**DIAGRAM: The AM balance**
```
   too little  <----------|----------> too much
   modelling         AGILE MODELLING       modelling
   (system not        "just enough"     (modelling becomes
    understood)                            a burden)
```

**Three main goals of AM:**
1. The **definition and promotion of a set of values, principles and practices** that help produce the appropriate models.
2. Guidance on how to apply modelling to an **agile software development**.
3. Guidance on how to apply agile modelling to **other software processes** (such as RUP).

**Criteria an agile model should meet — agile models should:**
1. Provide **positive value** (someone should need them).
2. **Fulfil their purpose and no more** — if a model clarifies how some classes fit together, that is all it should clarify.
3. Be **understandable** to their intended audience (but not necessarily to everyone).
4. Be **sufficiently accurate**, **sufficiently consistent** and **sufficiently detailed** for that audience.
5. Be **as simple as possible**.

**Modelling misconceptions that AM corrects:**
1. **Models equal documentation** — a model is *part* of documentation, but not sufficient as documentation.
2. **Modelling implies a heavyweight process** — it does not; modelling ≠ a formal software process.
3. **You must "freeze" the requirements** — in reality requirements change: details were missed, users' needs change, or the project is greenfield.
4. **Your design is carved in stone** — a leftover from waterfall thinking; it does not work in reality.
5. **You must use a CASE tool** — tools may help but are not mandatory (Visio, or even hand-drawn diagrams, are models).
6. **All developers know how to model** — producing appropriate, correct, well-formed models is not trivial.
7. **You can think of everything from the start** — UML models are **static** (you cannot execute them), so you cannot tell whether they cover enough.
8. **Modelling is a waste of time** — the extreme opposite myth to the waterfall position.
9. **The world revolves around the data model.**

**Tool misconceptions:** UML requires CASE tools; modelling requires CASE tools; agile modellers don't use CASE tools; UML is all you need; the CASE tool is master. The correct view is that the **CASE tool should be the servant, not the master**, and you should use the **simplest appropriate** medium — a whiteboard for a quick discussion, a CASE tool for a complex structure referenced by many developers across locations.

---

### UNIT-II

---

**Q8-A. Explain XP life cycle with neat diagram.**
→ **See the fully solved answer in Section 2, Q8.**

---

**Q8-B. Explain the twelve XP practices.**

**Definition.** Given XP's four values (**Communication, Simplicity, Feedback, Courage**), **twelve practices** were developed that translate those values into a way of working. They are the twelve "best practices" that let you fully adopt XP — and **if you have not adopted all twelve, you are not truly doing XP** (though you may be near XP on some agile continuum).

**DIAGRAM: Values → Practices**
```
  COMMUNICATION   SIMPLICITY   FEEDBACK   COURAGE
        \             |           |          /
         +------------+-----------+---------+
                          |
                12 XP PRACTICES
     planning game · small releases · simple design
     testing · refactoring · pair programming
     collective ownership · continuous integration
     on-site customer · coding standards
     40-hour week · system metaphor
```

**The twelve practices:**
1. **The planning game** — focuses on planning the next release.
2. **Small releases** — the system is developed **iteratively with small releases**, adding features and allowing **rapid feedback**.
3. **Simple design** — keep things **as simple as possible, but not simpler**.
4. **Testing** — **unit tests and acceptance tests** must be continually developed, and the code **must pass unit tests for development to continue**.
5. **Refactoring** — improving the system (e.g. to aid simplicity) **without changing the functionality**.
6. **Pair programming** — all code is developed by developers **working in pairs at a single machine**.
7. **Collective ownership** — **everyone owns all the code**, so anyone may change any code at any time to improve it.
8. **Continuous integration** — new code is integrated and the system **rebuilt every time a task is completed**, which may be many times a day.
9. **On-site customer** — have a **real customer as part of the team**, always available to answer questions.
10. **Coding standards** — **have them and use them.**
11. **40-hour week** — work no more than 40 hours a week so developers are **always fresh**.
12. **System metaphor** — a metaphor for **how the system operates**, guiding the whole development; similar to the architecture but typically simpler.

**Example.** On a payroll project the pair (practice 6) writes the failing test for tax deduction first (4), implements the simplest calculation that passes (3), tidies the duplicated rounding logic without changing behaviour (5), checks in and triggers a full rebuild the same hour (8), and asks the on-site payroll clerk (9) to confirm the rule — all inside a two-week iteration ending in a small release (2).

---

**Q8-C. Explain the Planning Game in detail.**

**Definition.** The **planning game** relies on **user (customer) stories** to drive the iterations of the project. The stories determine which features go into which iterations, from which appropriate releases can be identified. Its primary output is **the plan**, but it also **allows customers to make business decisions and developers to make technical decisions**, combining the results into an iteration-oriented plan.

**DIAGRAM: The three phases of the planning game**
```
              USER STORIES (index cards)
                        |
   +-------------------- EXPLORATION --------------------+
   |  Write a story (Business)                           |
   |  Estimate a story (Development)                     |
   |  Split / break a story up (Business)                |
   +-----------------------------------------------------+
                        |
   +-------------------- COMMITMENT ---------------------+
   |  Sort by value (Business: must/should/nice to have) |
   |  Sort by risk (Dev: precise / rough / can't est.)   |
   |  Set project velocity (Development)                 |
   |  Choose scope (Business)                            |
   +-----------------------------------------------------+
                        |
   +-------------------- STEERING -----------------------+
   |  Iteration planning · Project recovery              |
   |  Identifying a new story · Project re-estimation    |
   +-----------------------------------------------------+
                        |
                 ITERATION-ORIENTED PLAN
```

**1. The players.** Only two: **"Business"** — the stakeholders who can specify the operation of the system; and **"Development"** — the members of the development team relevant to the features being discussed. Both are usually **teams**, not individuals.

**2. The goal.** To **maximise the value of the software produced by the team**.

**3. The strategy.** To **invest as little as possible** to put the **most valuable functionality into production as quickly as possible**, **without compromising the required product quality**. That means (a) getting the job done without unnecessary overheads — not implementing features that may never be required; (b) recognising that few projects have unlimited time or resources; (c) still producing software that does its job without causing users difficulties.

**4. The game pieces.** The **user stories**, written on **index cards** and moved around during the game (whiteboards, scraps of paper or a software system can be used instead).

**5. Division of decisions.**
- **Business determines:** scope (what is in and out), priority (must haves vs nice to haves), composition of releases, release dates.
- **Development decides:** estimates of how long features will take; consequences of technology choices (Linux vs Windows XP, Java vs C#, J2EE vs .Net); team and project organisation; risks associated with features (e.g. will MySQL give the required performance, or is Oracle needed); detailed scheduling.

**6. The phases in detail.**
- **Exploration** — identify what the system should do: **write a story**, **estimate a story** (if it cannot be estimated or is too big, ask for clarification or break it up), **split a story**.
- **Commitment** — Business identifies what will be in the current iteration and when the next release will be; Development commits to the agreed duration and content. If agreement is impossible, **either the timescale changes, the content changes, or more developers are added**. Steps: **sort by value**, **sort by risk**, **choose scope**, **set project velocity**.
- **Steering** — allows the plan to be **updated as things change**: changing requirements, new requirements, changing priorities, incorrect estimates, changing resources. Steps: **iteration planning**, **project recovery**, **identifying a new story**, **project re-estimation**.

**7. Two forms of the game.** The **initial planning game** (whole-system scope, at project start, revisited periodically) and the **release/iteration planning game** (same steps, far greater detail: stories fleshed out and broken down, detailed estimates obtained, story list confirmed or revised, **project velocity revised** as the team gains experience).

---

**Q8-D. Explain Test First Coding, with its steps.**

**Definition.** **Test-first coding** is the XP practice in which developers **write the unit tests before the code to be tested**. Part of the argument is that **if you cannot write the test — i.e. you do not know what the inputs and outputs should be — then you should not be writing the code.** Testing is then automated so tests can be re-run regularly to ensure nothing new breaks earlier results.

**DIAGRAM: The test-first cycle**
```
  1 Think WHAT the code should do (ignore HOW)
            |
  2 Write the TEST using classes/methods that don't exist yet
            |
  3 Write the STUB code for the classes being tested
            |
  4 Put test + code into the code REPOSITORY (add to JUnit)
            |
  5 RUN the test against the stub  --> IT SHOULD FAIL (that's OK)
            |
  6 Write JUST ENOUGH implementation to pass the test <---+
            |                                             |
  7 Re-run the tests --- fail ---------------------------+
            |  pass
  8 Re-run tests for the ENTIRE system --- fail ---------+
            |  pass -> commit to repository
  9 REFACTOR for clarity and to remove duplication
            |
        back to step 1 for the next test
```

**The nine steps:**
1. **Think about what the code should do** and ignore, for the moment, **how** it will do it. This is difficult for programmers whose focus has always been "how" — it can feel like a leap of faith.
2. **Write a test that uses the classes and methods you have not yet implemented.**
3. **Write the stub code** for the classes being tested (tools such as **Eclipse** may generate this for you; with Emacs you do it yourself).
4. **Put the code into the project repository**, including the test code; if using a framework such as **JUnit**, add the test to it.
5. **Run the test against the stub code — it should fail**, and that is fine; the methods are not implemented yet. This is an important step even though it may look redundant.
6. **Write the implementation** of the methods being tested, writing **only enough code to pass the test**. This focuses effort on exactly what is needed and produces the simplest code meeting the requirements.
7. **Re-run the tests** against the newly implemented methods; if any fail, return to step 6.
8. **Re-run the tests for the entire system**; if all pass, commit the changes and test suite. If any fail, return to step 6 — your changes must have caused it.
9. **Refactor** the code for clarity and to remove duplication. Return to step 7; if no refactoring is required you have finished this test — return to step 1 for the next.

**Worked example (Eclipse).** A test class `TestForLabels` is created with no behaviour. A statement is added creating an instance of a class `Labels` that does not exist; **Eclipse prompts to create the class**. Then `labels.setText("John Hunt");` is written — `setText` does not exist, so Eclipse offers to **generate the method**, producing a method that takes a String and does nothing. A `getText` method is added the same way, auto-generated with a **default return value**. None of this is correct yet, but it is **enough to let the test class compile** so the test can be run and fail.

**What to test (XP guidelines).** Write tests for any **task being implemented**; for **non-trivial classes** that could easily be broken (e.g. a complex algorithm class); **avoid** tests for pure delegate methods whose target is already tested; assume **more tests are better than fewer**; write tests that **instil confidence** in widely used subsystems (e.g. data access management); add tests to cover areas being **modified or refactored**; add any tests you notice are **missing** from a suite.

---

**Q8-E. Explain Pair Programming and how to make it work.**

**Definition.** **Pair programming** is the XP practice of **two developers working together at a single machine**. One is the **driver** (controls mouse and keyboard); the other is the **navigator** (monitors what the driver is doing and asks questions). The idea is simply that **"two heads are better than one"** most of the time — and that **all code is always reviewed by at least one other person** who is focused on what the code needs to do.

**DIAGRAM: Pair programming workflow**
```
  PAIR FORMS for a task (pairs are NOT permanent)
            |
  BRIEF MEETING: what are we doing? what are the options?
            |
            v
   +--> PROPOSE A TEST
   |          |
   |    IMPLEMENT the business classes for that test
   |          |
   |     RUN THE TEST
   |        /      \
   |     pass      fail --> review code, find what's wrong --+
   |       |                                                 |
   +-------+ next test <--------------------------------------+
            |
     tests completed
            |
     INTEGRATE with current build
            |
     whole-system tests fail? --> revise code, find why --+
            |  all pass                                    |
            +----------------------------------------------+
            |
     TASK COMPLETE --> PAIR BREAKS UP
```

**Key features of the workflow:**
- **Pairs are not permanent** and should be **changed regularly**; a pair forms to carry out a **particular task**.
- At the **start** of the task they hold a **brief meeting** to discuss what they are about to do, how they might approach it and what the options are — this ensures **no one is along just for the ride**.
- They work **test-first**: propose a test, implement the business classes meeting that test, run the test. Pass → next test. Fail → review the code and determine what is wrong.
- Once tests are complete they **integrate with the current build**; if whole-system tests fail they must revise and determine why. They **can only finish integrating once all tests pass**, at which point the task is complete and the pair breaks up.

**Nine things that help make pair programming work:**
1. **Engage in a dialogue** — the driver explains what they are doing; the navigator asks questions to understand.
2. **Listen to each other** — if one person is doing all the talking, it probably isn't working. Swap roles, break, or review.
3. **Take frequent breaks** — pair programming is intensive both mentally and interpersonally. **Don't discuss the code during the break.**
4. **Make it practical** — desks big enough for two, or special double-size workstations.
5. **Don't be a back-seat driver** — if the navigator is telling the driver what to do all the time, they are acting as a **virtual driver using someone else's fingers**. Swap roles, or discuss the solution and let the driver run with it.
6. **Use a common environment** — different favourite IDEs (JCreator, JBuilder, NetBeans, Eclipse, Emacs) make pairing harder; pick one for all.
7. **Shared language and vocabulary** — a shared vocabulary of design and programming concepts avoids *"what do you mean by Factory Method?"*
8. **Allow non-pair time** — rarely, and only for **exploring completely alternative solutions** or **following multiple competing lines of investigation during debugging** (not bug fixing).
9. **Change partners often** — typically at the start of a new task; a driver may pair with several navigators across a task spanning many areas.

**Note.** Ideally one of any pair should be an **experienced pair programmer**; where that is not possible, the key thing is to **stick with it** — pair programming takes practice.

---

**Q8-F. Explain the core values of XP and what makes XP "extreme."**

**Definition.** XP is part of the agile movement that focuses on the **writing of the software** that will implement the required system. It has been widely misunderstood and wrongly associated with **hacking, lack of planning and avoidance of documentation**. In fact XP rests on four explicit **core values**, from which its twelve practices are derived.

**DIAGRAM**
```
   COMMUNICATION --> defects traced to poor communication
   SIMPLICITY    --> simplest solution that does the job
   FEEDBACK      --> early and often, from everyone
   COURAGE       --> to refactor, to throw code away
            |
            v
   Turn every "best practice" knob to MAXIMUM
            |
            v
      = EXTREME PROGRAMMING
```

**The four core values:**
1. **Communication.** Many problems or defects in software systems can be **traced back to poor communication** during development — between programmers, and between end users and the development team. So obvious it is often ignored, and often not adopted in practice.
2. **Simplicity.** Aim for the **simplest solution that does the job**. The simpler the implementation, the easier it is to implement, test, understand and maintain — and therefore the easier to **find and correct bugs**.
3. **Feedback.** Get feedback **early and often** — from the customer, the team, real end users and other stakeholders. It identifies problems early, handles unknowns and clarifies issues, avoiding nasty shocks later. Feedback exists at many levels: running unit tests on every integration identifies new problems immediately.
4. **Courage.** You need courage to **refactor** code, to **throw away** code, to **code for now and leave tomorrow to tomorrow**, and to move management to adopt XP's way of working.

**What is so extreme about XP?** Looking at the twelve practices, very little is new — most already appear in existing software engineering methodologies. The difference lies in:
- XP is **very lightweight** — it really only focuses on the **programming** of a software system.
- XP **takes best practices to their ultimate conclusions**. Kent Beck pictured **each practice as a knob on a control board and turned every knob up to maximum** — what happened was XP.

**The "knobs" turned to maximum:**
- If **code reviews** are good → review code **all the time** = **pair programming**.
- If **testing** is good → everybody tests all the time (**unit testing**), even customers (**acceptance testing**).
- If **designing** is good → make it part of what everyone does every day = **refactoring**.
- If **simplicity** is good → always strive for the **simplest effective solution**.
- If **architecture** is important → involve everyone in creating and refining it all the time = **system metaphor**.
- If **integration testing** is good → integrate and test **daily or hourly** = **continuous integration**.
- If **short iterations** are good → make them **hours or days, not weeks and months** = **the planning game**.

---

### UNIT-III

---

**Q9-A. Explain how iterative development is practised in both AM and XP.**
→ **See the fully solved answer in Section 2, Q9.**

---

**Q9-B. Explain "The Fit" between Agile Modelling and XP, and their common practices.**

**Definition.** **"The Fit"** is the question of how **Agile Modelling (AM)** relates to **eXtreme Programming (XP)**. Both are from the agile movement, both are motivated by the desire to **produce better software faster** — and in fact **many AM practices fit straight into XP**, because in many cases they are the **modelling equivalent of XP's programming-oriented practices**.

**DIAGRAM: The fit**
```
        AGILE MOVEMENT
       /              \
   AGILE MODELLING     XP
   (how to model)   (how to program)
        \              /
         \            /
      AM is an ADD-ON: it must be applied WITH
      another methodology to be of real benefit
        |
        v
   XP DOES model -- but NOT "big up-front modelling."
   Modelling happens AS AND WHEN REQUIRED during
   the lifetime of the XP project.
```

**Key points:**
1. **AM is not standalone.** Agile Modelling **needs to be applied with some other development methodology** to be of any real benefit. It brings a **suite of agile techniques to the process of modelling**.
2. **XP does do modelling** — although this may come as a shock to some alleged XP practitioners. What it does **not** do is **big up-front modelling**.
3. **At first sight there appears to be a fundamental conflict**, but examined closely, AM and XP practices **represent the same or similar intention, expressed from the modelling perspective instead of the programming perspective**.
4. **Common practices** pair up as equivalents or near-equivalents. Examples of the pairing:

| Agile Modelling practice | XP counterpart |
|---|---|
| Model in small increments | Small releases / short iterations |
| Create simple content; depict models simply | Simple design |
| Prove it with code | Testing / test-first coding |
| Model to understand | Refactoring (understand before you improve) |
| Use the simplest tools | Keep it simple; travel light |
| Active stakeholder participation | On-site customer |
| Collective ownership of models | Collective code ownership |
| Consider testability while modelling | Testing / acceptance tests |

5. **Consider testability while modelling.** When performing Agile Modelling you should consider **how what you are modelling might be tested**, and **how you can model to facilitate testing** — and by implication, what those tests are.
6. **Modelling-specific practices** — **model with a purpose**, **use multiple models** and **know your models** — at first appear to have no place in XP, because XP says little about the act of modelling. The main XP activity that touches them is the **stand-up modelling meeting**, where existing code is analysed or new code explored using diagrams — which **are** a form of model.

---

**Q9-C. What are the XP objections to Agile Modelling? How does AM answer them?**

**Definition.** Some XP practitioners raise objections to Agile Modelling, believing modelling is contrary to XP's focus on working code. Each objection rests on a **misunderstanding of what AM actually says**.

**DIAGRAM**
```
   XP OBJECTION                 AM ANSWER (practice that refutes it)
   ------------------------------------------------------------
   "It's all BMUF"        -->  Model in Small Increments;
                               Prove it with Code
   "Models are permanent  -->  Discard Temporary Models;
    documents"                 Use the Simplest Tools;
                               Update Only When It Hurts
   "You need Rational     -->  Whiteboards, index cards,
    Rose"                      post-it notes are fine
   "You must know UML"    -->  No representation is mandated
   "XP doesn't model"     -->  Index cards & whiteboard
                               diagrams ARE models
   "Models = unnecessary  -->  Documentation must suit its
    documentation"             READER, not just programmers
```

**The objections and answers:**

1. **"Modelling is all about big up-front design (BMUF — Big Modelling Up-Front)."**
   Agile Modelling **clearly does not promote this**, as shown by the practices **"Model in Small Increments"** and **"Prove it with Code."**

2. **"All models are permanent documents that must be updated whenever any change is made."**
   Clearly not what AM says. The practices **"Discard temporary models," "Use the simplest tools"** and **"Update only when it hurts"** contradict this view.

3. **"You need a complex modelling tool such as Rational Rose to do any modelling."**
   AM **explicitly debunks that myth**, stating you should use **whatever modelling medium is appropriate** — which may include tools like Rational Rose, but equally **white boards, index cards and post-it notes**.

4. **"You need to know, and use, UML to create models."**
   AM says you should know how to apply **whatever representation you are using**, and UML is one example — but AM **does not mandate any particular representation**. Agile modellers know UML does not cover all modelling situations. Moreover, an agile modeller **will not worry about creating a precise and complete UML diagram**; they focus on the **audience** and ensuring the model is comprehensible to them.

5. **"XP does not encourage modelling."**
   Actually **wrong** — XP **does promote the creation and use of models**. The use of **index cards for user stories and classes** is a form of modelling, and XP practitioners often **draw diagrams on white boards** while considering how to address a problem or refactor code. These too are models.

6. **"XP does not create any documentation, and models are a form of unnecessary documentation."**
   XP promotes **code as the core form of documentation**, since only code is in sync with code. However, **documentation needs to be appropriate for its reader**. Source code is a good reference **for programmers**, but is unlikely to be appropriate for **end users, non-programmers or support personnel** — for whom models may be a very useful form of documentation.

---

**Q9-D. How does Agile Modelling assist in planning XP projects?**

**Definition.** An XP project is planned at a **number of levels and at various points during its lifetime**. This means **Agile Modelling practices may be more or less relevant at different stages** of the planning process. AM's role is to keep whatever modelling is done **controlled, focused and lightweight**.

**DIAGRAM: Where AM plugs into XP planning**
```
   INITIAL PROJECT PLANNING
     |-- Initial planning game  --> AM: clarify user stories
     |                               (UI mock-ups, simple
     |                                flow charts)
     +-- Elaboration process    --> AM: models to understand
                                     requirements => BETTER
                                     ESTIMATES
            |
            v
   ITERATION / RELEASE PLANNING
     |-- Release planning game  --> AM: focus modelling used
     |                               to clarify requirements
     |-- Elaboration process    --> AM: shorter; keep modelling
     |                               from becoming a burden
     +-- Iteration planning     --> AM: model how stories might
                                     be implemented => identify,
                                     clarify or SPLIT TASKS
                                     (models may be DISCARDED)
            |
            v
   XP IMPLEMENTATION PHASE (code gets written)
```

**1. Initial project planning.** Two primary steps:
- **Initial planning game.** Business and development **may resort to modelling to help clarify the user stories**. By applying AM practices this modelling can be **controlled and focused**. Example: a **User Interface mock-up** with **some simple flow charts** to prototype system behaviour, as a way of elaborating a user story.
- **Elaboration process.** Various models may be created to help developers **understand what will be required of the system**, which helps produce **better estimates**. AM practices are of great help here.

**2. Iteration/release planning.** Modelling is again important:
- **Release planning game.** As with the initial planning game, AM practices **focus the modelling activities** used to clarify user requirements.
- **Elaboration process.** Typically shorter than in initial planning, but some modelling still takes place; AM ensures modelling **does not become a burden**.
- **Iteration planning.** To break user stories into **tasks**, it may be necessary to model **how the stories might be implemented** — initial class structures, behaviour, etc. This allows tasks to be **identified, clarified or split up**. **Note: this is not large up-front design** — the models may be **discarded** and may only be intended to help elaborate the tasks.

**Example.** While planning iteration 1 of a membership website, the team sketches the registration screen on a **whiteboard** — which fields are needed and what happens when the user selects *submit*. That sketch splits the story into three tasks, is estimated, and is then **wiped off the board**; it was never intended to survive.

---

**Q9-E. Explain the XP Implementation Phase and how Agile Modelling complements it.**

**Definition.** The **XP implementation phase** is **where the code actually gets written** within an XP project. There are various points at which a model may be relevant — for example, in helping to **understand code in order to refactor it** — and therefore Agile Modelling practices may be applied. The practices considered are the **implementation-oriented** ones (**refactoring, test-first coding, simple design, pair programming**) rather than **process-oriented** ones such as the planning game or the 40-hour week rule.

**DIAGRAM: AM inside the XP implementation phase**
```
   XP IMPLEMENTATION PHASE
   +--------------------------------------------------+
   | REFACTORING      <-- AM: model to UNDERSTAND the  |
   |                       code before improving it    |
   |--------------------------------------------------|
   | TEST-FIRST       <-- AM: insert "model the        |
   | CODING               solution" + "discard         |
   |                      temporary models"            |
   |--------------------------------------------------|
   | SIMPLE DESIGN    <-- AM: create simple content,   |
   |                      depict models simply,        |
   |                      apply patterns gently,       |
   |                      formalize contract models    |
   |--------------------------------------------------|
   | PAIR PROGRAMMING <-- AM: shared model helps the   |
   |                      navigator understand HOW     |
   |                      the driver intends to work   |
   +--------------------------------------------------+
```

**1. Refactoring.** Refactoring is primarily a **code improvement technique** — changing existing code so it is better than before **without adding new functionality**. Is modelling relevant to it? **Yes.** The issues when refactoring are: **make sure you know how to improve the code**, and **make sure what you have done has improved the code** — in short, **"know what you are doing!"** You should **not refactor "when you haven't got a clear plan of how you will improve the code."** A model — even a **whiteboard diagram of a UI design** showing what fields are needed and what happens on submit — supplies that understanding.

**2. Test-first coding.** At first sight modelling seems superfluous or contradictory here, because the cycle is: **write a test → write the code to be tested → run the test / get the code to work → if passed, return to step 1**. But if the cycle is modified to:
   **write a test → model the solution → implement the solution → run the test / get the code to work → discard temporary models → if passed, return to step 1**,
   then you are **maximising this XP practice while supporting AM's principle of rapid feedback**.

**3. Simple design.** The XP practice of simple design promotes the simplest implementation that: **runs all the tests**, has **no duplicate code**, **makes it clear to anyone reading the code what it is meant to do**, and has the **fewest possible classes and methods**. AM has matching practices that promote simplicity in modelling: **create simple content**, **depict models simply**, **apply patterns gently**, and **formalize contract models**.

**4. Pair programming.** Two developers at a single machine — the **driver** controls the mouse and keyboard, the **navigator** monitors what the driver is doing. It is essential that the pair **communicates and understands what they are trying to achieve**, and that the **navigator understands how the driver intends to achieve their goals**. A quick shared model makes that intention visible.

---

**Q9-F. Explain the modelling-specific practices of Agile Modelling: Model with a Purpose, Multiple Models, Know Your Models.**

**Definition.** Some Agile Modelling practices appear, at first, to have **no place within XP at all** — because they are very clearly **specific to the act of modelling**, and because **XP does not have much to say about the act of modelling** or the models that might be created. These practices are **model with a purpose**, **using multiple models**, and **know your models**.

**DIAGRAM**
```
   MODELLING-SPECIFIC AM PRACTICES
   +---------------------------------------------+
   | MODEL WITH A PURPOSE                        |
   |   +-- Model to UNDERSTAND (before you       |
   |   |     refactor or extend code)            |
   |   +-- Model to COMMUNICATE (code is not the |
   |         best way to explain ideas to people)|
   |---------------------------------------------|
   | USE MULTIPLE MODELS                         |
   |   different views of the same system        |
   |---------------------------------------------|
   | KNOW YOUR MODELS                            |
   |   know the strengths and weaknesses of      |
   |   each type of model available to you       |
   +---------------------------------------------+
        ^
        |  In XP these surface as STAND-UP MODELLING
           MEETINGS: existing code analysed, or new
           code explored, through diagrams.
```

**1. Model with a Purpose.** Many XP practitioners see no place for modelling at all, so this point may seem self-defeating to them — but **it is very wrong to say there is no purpose to modelling in XP**. AM's **motivational category** includes two directly relevant practices:

- **Model to understand the software.** **Before you refactor or extend your code you must understand it.** Individual methods or classes may be understandable in isolation, but the structure of a whole package is not. *Example:* to become familiar with the main spell-checking engine of the *Clear Spell* spell checker, a class diagram was generated using the **Omondo plug-in for Eclipse**. Omondo finds the classes and interfaces in the selected package, presents a **selection dialog** to choose which classes and relationship types to include, and generates the class diagram. Although you must still determine what each element does, you have **a much better feel for the structure** than by merely listing the package contents. Equally, **merely drawing the structure on a white board may be more than sufficient**.

- **Model to communicate.** **Source code is the end result** we are all trying to produce — it is not a model, and it is what will be delivered as an executable. **However, it is not the best way to explain your ideas to one or more other people.** A model communicates design intent far better.

**2. Using multiple models.** Different models give different **views** of the same system; no single model captures everything, so an agile modeller keeps several kinds available and picks the one that answers the current question.

**3. Know your models.** Whether you are an **agile modeller or an XP developer**, you need to **know the tools available to you**. XP developers need to understand the models available to them just as much as an agile modeller does — that is, they should understand the **strengths and weaknesses of different types of models**. This helps them **keep models as simple as possible** and **apply the appropriate model** to understand the system under consideration.

---

## 6. Quick-Fire Table (2-mark one-liners for Q10-type parts)

| Term | One-line answer |
|---|---|
| **Agile** | Nimble, quick-moving — responsive to changing requirements, people and issues. |
| **Agile methodology** | Responsive, practice-based, effective and sufficient method. |
| **Agile Manifesto** | The 4-value statement of the Agile Software Development Alliance. |
| **4 Manifesto values** | Individuals/interactions; working software; customer collaboration; responding to change. |
| **Agile Modelling** | Agile philosophy applied to modelling — enough, but not too much. |
| **AM's 3 goals** | Promote values/principles/practices; apply modelling to agile; apply AM to other processes. |
| **XP** | Lightweight agile method for small teams with changing requirements, focused on coding. |
| **XP's 4 values** | Communication, Simplicity, Feedback, Courage. |
| **12 XP practices** | Planning game, small releases, simple design, testing, refactoring, pair programming, collective ownership, continuous integration, on-site customer, coding standards, 40-hour week, system metaphor. |
| **XP lifecycle phases** | Architectural Spike → Release Planning → Iterations → Acceptance Testing → Release. |
| **Architectural spike** | Investigation to reduce risk in an unknown area; usually thrown away. |
| **User story** | Customer's own-words description of what the system must do; name + paragraph + estimate + importance. |
| **Planning game** | Story-driven planning with two players, three phases (exploration, commitment, steering). |
| **Planning game players** | "Business" and "Development". |
| **Planning game goal** | Maximise the value of the software produced by the team. |
| **Project velocity** | How quickly development can achieve its (idealised-time) estimates; set in the commitment phase. |
| **Test-first coding** | Write the unit test before the code; if you can't write the test, don't write the code. |
| **Pair programming** | Two developers, one machine, driver + navigator; constant code review. |
| **Driver** | The developer who controls the mouse and keyboard. |
| **Navigator** | The developer who monitors, questions and reviews what the driver does. |
| **Refactoring** | Improving existing code without changing its functionality. |
| **Collective ownership** | Everyone owns all the code and may change any of it to improve it. |
| **Continuous integration** | Integrate and rebuild every time a task is completed — many times a day. |
| **On-site customer** | A real customer in the team, always available to answer questions. |
| **System metaphor** | A simple metaphor for how the system operates, guiding development. |
| **40-hour week** | Work no more than 40 hours so developers stay fresh. |
| **Small releases** | Iterative development with frequent small, meaningful releases. |
| **Simple design (4 aims)** | Runs all tests; no duplicate code; intent clear to any reader; fewest classes/methods. |
| **DSDM** | Framework of controls and best practice for RAD — "rapid and right". |
| **DSDM principles** | Nine — active user involvement, empowered team, frequent delivery, fitness for business purpose, iterative/incremental, reversible changes, high-level baselined requirements, integrated testing, collaboration. |
| **DSDM phases** | Pre-Project, Feasibility, Business Study, FMI, DBI, Implementation, Post-Project. |
| **DSDM core phases** | FMI, DBI, Implementation. |
| **Timebox** | A fixed 2–6 week slot; Investigation → Refinement → Consolidation. |
| **MoSCoW** | Must have, Should have, Could have, Won't have this time round. |
| **BAD / SAD** | Business Area Definition / System Architecture Definition — Business Study outputs. |
| **SCRUM** | Inter-related rules, procedures and practices improving the development environment and matching deliverables to user needs. |
| **SCRUM cycle** | 30-day iterations plus 15-minute daily reviews. |
| **SCRUM daily 3 questions** | What was done? Any obstacles? What is next? |
| **FDD** | Feature-Driven Development — feature-centric planning, design and build. |
| **Feature** | A schedulable requirement with a priority and a cost. |
| **FDD 5 processes** | Develop overall model; build feature list; plan by feature; design by feature; build by feature. |
| **The Fit** | How AM fits into XP — AM practices are the modelling equivalents of XP practices; XP models, but not up-front. |
| **BMUF** | Big Modelling Up-Front — what Agile Modelling explicitly rejects. |
| **Model to understand** | Model the code before refactoring or extending it. |
| **Model to communicate** | Code is not the best way to explain ideas to other people. |
| **Know your models** | Understand the strengths and weaknesses of each model type. |
| **Discard temporary models** | Throw away models once they have served their purpose. |
| **Stand-up modelling meeting** | XP meeting where code is analysed or explored using diagrams. |
| **Modelling misconceptions** | Nine — starting with "models equal documentation". |
| **Tool misconceptions** | Five — ending with "the CASE tool is master" (it should be the servant). |

---

## 7. Revision Sheet

### 7.1 Count-lists (memorise the numbers)

| Count | List |
|---|---|
| **4** | Agile Manifesto values |
| **4** | XP core values — Communication, Simplicity, Feedback, Courage |
| **4** | XP basic principles (Unit-I wording) — same four |
| **4** | Agile influences on XP planning — Plan for now, Responsibility, Dependencies, Simplicity |
| **4** | Simple-design criteria — all tests pass, no duplication, intent clear, fewest classes/methods |
| **4** | AM simplicity practices — create simple content, depict models simply, apply patterns gently, formalize contract models |
| **4** | XP implementation-phase practices AM complements — refactoring, test-first coding, simple design, pair programming |
| **5** | XP project lifecycle phases — Spike, Release Planning, Iterations, Acceptance Testing, Release |
| **5** | Agile model criteria — positive value, fulfil purpose, sufficiently accurate, consistent, detailed |
| **5** | FDD processes |
| **5** | Tool misconceptions |
| **3** | AM goals |
| **3** | Planning game phases — Exploration, Commitment, Steering |
| **3** | Modelling-specific AM practices — model with a purpose, multiple models, know your models |
| **3** | Timebox phases — Investigation, Refinement, Consolidation |
| **3** | SCRUM daily-review questions |
| **3** | Business Study outputs — BAD, SAD, Outline Prototyping Plan |
| **3** | DSDM core phases — FMI, DBI, Implementation |
| **6** | SCRUM benefits |
| **6** | XP objections to Agile Modelling |
| **7** | DSDM lifecycle phases |
| **9** | DSDM principles |
| **9** | Modelling misconceptions |
| **9** | Test-first coding steps |
| **9** | Tips for making pair programming work |
| **12** | XP practices |
| **15 min** | SCRUM daily review |
| **30 days** | SCRUM iteration cycle |
| **2–6 weeks** | DSDM timebox |
| **40 hours** | XP working week |

### 7.2 Comparison tables

**Agile vs Traditional**

| Aspect | Traditional | Agile |
|---|---|---|
| Fixed | Functionality | Time and resources |
| Flexible | Time and cost | Functionality |
| Change | Resisted ("not in the plan") | Embraced (user feedback drives development) |
| Documentation | A goal in itself | A supporting medium for the software |
| Customer | Contract negotiation | Collaboration, on-site customer |
| Delivery | Big bang | Small releases, release often |

**AM vs XP**

| | Agile Modelling | XP |
|---|---|---|
| What it is | An approach/philosophy for **modelling** | A full **development method** for programming |
| Standalone? | **No** — must be added to another method | **Yes** |
| Scope | The design/modelling stage | The whole coding lifecycle |
| Does it model? | Yes, that is its subject | Yes, but **as and when required**, never up-front |
| Artefacts | Whiteboards, sketches, class diagrams, index cards | Code, tests, user stories, index cards |

**Initial vs Release planning game**

| | Initial planning game | Release planning game |
|---|---|---|
| Focus | What the **system as a whole** should do | Contents of **one release/iteration** |
| Detail | Rough | Much greater |
| When | Start of project (revisited) | Start of each release |
| Stories | All in-scope stories | Fleshed out, broken into finer-grained stories |
| Velocity | Not yet known | May need to be **revised** |

**Driver vs Navigator**

| Driver | Navigator |
|---|---|
| Controls mouse and keyboard | Monitors what the driver is doing |
| Explains what they are doing | Asks questions to understand |
| Writes the code | Reviews the code as it is written |
| Must not be dictated to | Must not become a "back seat driver" |

### 7.3 Commonly confused pairs

- **Agile Manifesto values (4)** vs **XP core values (4)** — Manifesto: individuals/working software/customer collaboration/responding to change. XP: communication/simplicity/feedback/courage. **Q3 in the paper asks for the ASD (Manifesto) values.**
- **Refactoring** vs **Rewriting** — refactoring **improves code without changing functionality**; rewriting changes what it does.
- **Spike** vs **Prototype** — a spike is **research to reduce risk and is usually thrown away**; DSDM prototypes may **evolve into the delivered system**.
- **Unit tests** vs **Acceptance tests** — unit tests are written by **developers before the code**; acceptance tests are derived from **user stories** with scenarios specified by the **customer**.
- **Exploration** vs **Elaboration** — *exploration* is a **phase of the planning game** (write/estimate/split a story); the *elaboration process* is the **research step after** the planning game that lowers estimate risk.
- **Iteration planning** vs **Release planning** — release planning says **what** features go in; iteration planning says **how** those features will be achieved (tasks).
- **Modelling misconceptions (9)** vs **Tool misconceptions (5)** — the first is about modelling itself, the second about CASE tools and UML.
- **DSDM FMI** vs **DBI** — FMI outputs the **Functional Model**; DBI outputs the **tested system**.
- **MoSCoW "Must have"** vs **"Should have"** — must = project's success on time depends on it; should = important but success does not rely on it.
- **AM "model to understand"** vs **"model to communicate"** — the first is for **you** (before refactoring); the second is for **other people**.

### 7.4 Exam-hall tactics

1. **Do Part-A first, in order, in 30 minutes.** They are compulsory and each is worth as much as a third of a long answer. Do not write more than 4–5 lines each.
2. **In Part-B, attempt Q10 first** — three 2-mark recall parts, the fastest 6 marks on the paper.
3. **Then pick two of Q7/Q8/Q9.** Q7 (Manifesto) and Q8 (XP lifecycle) are the safest. Q9 is L3 and needs a genuine both-sides comparison.
4. **Draw the diagram before writing** for Q8 (and for Q9 if you attempt it). Label every box. An unlabelled diagram earns nothing.
5. **Number your points.** "The nine principles of DSDM are: 1… 2… 3…" scores better than a paragraph.
6. **Bold or underline the keywords** — *refactoring, pair programming, timebox, MoSCoW, spike, velocity, BMUF*. Examiners scan for them.
7. **When a question says "name some", give a numbered list and stop.** Do not explain each item unless marks allow.
8. **When a question says "in detail" or "explain",** use the shape: **definition → diagram → numbered points → one example**.
9. **Attempt every question you start completely** — a half-written 6-mark answer scores worse than a complete 4-point one.
10. **Keep 10 minutes at the end** to add a missing diagram label, an example, or the fourth Manifesto value you skipped.
