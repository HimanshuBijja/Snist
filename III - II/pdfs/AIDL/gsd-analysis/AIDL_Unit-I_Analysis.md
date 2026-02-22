# Analysis: AI & Deep Learning Unit-I

## 8-Mark Important Questions

### 1. Explain the four categories of AI definitions.
**Answer:**
AI definitions fall into four categories based on two dimensions: Thinking vs. Acting and Human-like vs. Rational behavior.
1. **Acting Humanly (Turing Test approach):** Focuses on whether a computer can behave intelligently enough to fool a human interrogator (The Imitation Game).
2. **Thinking Humanly (Cognitive Modeling approach):** Focuses on how computers can be made to think like humans by modeling the internal activities of the brain (Cognitive Science).
3. **Thinking Rationally (Laws of Thought approach):** Focuses on using logical deliberation (Syllogisms) to govern the operation of the mind.
4. **Acting Rationally (Rational Agent approach):** Focuses on designing agents that act so as to achieve the best outcome (or best expected outcome under uncertainty). This is the most general and widely adopted approach in AI.

<button onclick="navigator.clipboard.writeText(`AI definitions are grouped into four views:
1. Acting Humanly: Turing Test approach.
2. Thinking Humanly: Cognitive modeling/psychology.
3. Thinking Rationally: Logic-based/Laws of thought.
4. Acting Rationally: Rational Agent approach (maximizing goal achievement).`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 2. Describe the PEAS framework with examples.
**Answer:**
PEAS stands for **P**erformance measure, **E**nvironment, **A**ctuators, and **S**ensors. It is used to specify the task environment of an agent.
**Example: Automated Taxi Driver**
- **Performance Measure:** Safe, fast, legal, comfortable trip, maximize profits.
- **Environment:** Roads, other traffic, pedestrians, customers.
- **Actuators:** Steering, accelerator, brake, signal, horn, display.
- **Sensors:** Cameras, sonar, speedometer, GPS, odometer, engine sensors, keyboard.
**Example: Vacuum Cleaner Agent**
- **Performance Measure:** Cleanliness, efficiency, battery life.
- **Environment:** Floors, furniture, obstacles.
- **Actuators:** Wheels, suction motor, brushes.
- **Sensors:** Dirt sensor, bump sensor, infrared range finder.

<button onclick="navigator.clipboard.writeText(`PEAS (Performance, Environment, Actuators, Sensors) defines the task environment. 
Taxi Driver Example:
P: Safety, profit, speed.
E: Roads, traffic, pedestrians.
A: Steering, brake, signal.
S: Cameras, GPS, speedometer.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

### 3. Explain the architecture of a Learning Agent.
**Answer:**
A learning agent can be divided into four conceptual components:
1. **Learning Element:** Responsible for making improvements to the agent's behavior by observing the performance element.
2. **Performance Element:** Responsible for selecting external actions (this is what we previously considered the entire agent).
3. **Critic:** Provides feedback to the learning element by evaluating how well the agent is doing against a fixed performance standard.
4. **Problem Generator:** Responsible for suggesting actions that will lead to new and informative experiences (exploration), even if they are suboptimal in the short term.
Learning allows the agent to operate in initially unknown environments and become more competent than its initial knowledge allowed.

<button onclick="navigator.clipboard.writeText(`Learning Agent Components:
1. Learning Element: Improves the agent.
2. Performance Element: Takes actions.
3. Critic: Gives feedback based on standards.
4. Problem Generator: Suggests exploratory actions.
Learning enables autonomy in unknown environments.`).then(() => alert('8-Mark Answer Copied!'))">Copy Answer</button>

---

## 2-Mark Important Questions (Grouped)

1. **What is the Turing Test?** An operational test for intelligent behavior where a computer must fool an interrogator into thinking it is human.
2. **Define a Rational Agent.** An entity that perceives its environment and acts to achieve the best outcome or maximize goal achievement.
3. **What is the Agent Function?** An abstract mathematical description that maps any given percept sequence to an action: `f: P* -> A`.
4. **What is the Agent Program?** A concrete implementation of the agent function that runs on a physical architecture.
5. **List the five components of a problem.** Initial state, Actions, Transition model, Goal test, and Path cost.
6. **What is a Toy Problem?** A simplified problem intended to illustrate or exercise various problem-solving methods (e.g., 8-puzzle).
7. **Define State Space.** The set of all possible states reachable from the initial state by any sequence of actions.
8. **What is an Optimal Solution?** A solution that has the lowest path cost among all possible solutions.
9. **Name three ways to represent states.** Atomic (black box), Factored (vector of attributes), and Structured (objects with relationships).
10. **Define Cognitive Science.** An interdisciplinary field that brings together computer models from AI and experimental techniques from psychology to construct theories of the human mind.

<button onclick="navigator.clipboard.writeText(`1. Turing Test: Fooling an interrogator.
2. Rational Agent: Acts to maximize goal achievement.
3. Agent Function: Map(Percept Sequence -> Action).
4. Agent Program: Implementation of agent function.
5. Problem Components: Initial state, Actions, Transition, Goal test, Path cost.
6. Toy Problem: Simplified method-exercise problem.
7. State Space: All reachable states.
8. Optimal Solution: Lowest path cost.
9. State Representations: Atomic, Factored, Structured.
10. Cognitive Science: AI models + Psychology techniques.`).then(() => alert('All 2-Mark Answers Copied!'))">Copy All 2-Mark Answers</button>
