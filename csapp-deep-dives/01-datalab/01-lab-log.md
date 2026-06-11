# Data Lab: Tactical Log & Problem Breakdowns

This log captures my personal engineering reflections, blockers, and paradigm shifts while navigating the strict constraints of the CS:APP Data Lab environment.

*Note: In accordance with academic integrity guidelines, no code solutions or direct gate derivations are hosted here.*

---

## Puzzle 1: `bitXor`

 While grinding through this ques, i stood blank for a while as i didn't knew how to manipulate the bitwise operators to work like a specific bitwise operator.

 So in order to understand how to manipulate and use them, i used AI to provide me the notes stating what every operator does and also few important laws like the "De Morgan's Law". Now i've preserved those notes in the [02-concepts.md](./02-concepts.md) file for fututre reference.

---

## Puzzle 2: `tmin`

### 💡 The `tmin` Optimization Milestone

When I first attacked the minimum signed integer puzzle, my initial breakthrough was a bit messy. It completely passed the test suite, but the logic was clumsy and burned through 2 operators to get the job done. 

Instead of settling for a heavy solution, I pushed myself to optimize the register pathways. By rethinking how constants align in hardware, I refactored the logic and managed to smash the operator count down to just **1 single operator**. 

It was a massive lesson in writing lean, high-performance systems code rather than just stopping at the first working answer.