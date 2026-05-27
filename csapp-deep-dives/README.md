# 🚀 CS:APP Deep Dives - Low-Level Logic & Systems Theory

Welcome to my personal notebook for exploring low-level systems architecture, inspired by the legendary *Computer Systems: A Programmer's Perspective* (CS:APP) curriculum. 

This repository serves as a permanent reference guide for bit-level manipulation, memory architecture, and data representation. No solutions are hosted here—just the core mathematical theory, optimization tricks, and low-level laws required to master systems engineering.

---

## 🛠️ The Bitwise Toolbox (Permanent Reference)

When engineering at the raw bit layer under strict operational constraints, these are the foundational laws used to manipulate bit streams.

### 1. De Morgan's Laws (The Operator Shifters)
*Used to convert between logical operations when specific gates are restricted.*

* **Eliminating OR (`|`):** `A | B` => `~(~A & ~B)`
    * *Intuition:* An OR operation is just an AND gate with all inputs and outputs inverted.
* **Eliminating AND (`&`):** `A & B` => `~(~A | ~B)`
    * *Intuition:* An AND operation is just an OR gate with everything inverted.

### 2. Identity & Annihilation Laws (The Bit Anchors)
*How unknown bit streams interact with a constant stream of zeros (`0`) or ones (`~0`, which is all 1s).*

#### With AND (`&`)
* **Identity:** `A & ~0` => `A`  
    * *Use case:* ANDing bits with a mask of all `1`s preserves the original values perfectly. Essential for bit extraction.
* **Annihilation:** `A & 0` => `0`  
    * *Use case:* Force-clearing specific bit fields to zero.

#### With OR (`|`)
* **Identity:** `A | 0` => `A`  
    * *Use case:* Preserves the bit stream exactly as it was.
* **Annihilation:** `A | ~0` => `~0`  
    * *Use case:* Overwriting a bit field to force all bits high.

### 3. Idempotence & Complement Laws (The Self-Evaluators)
* **Idempotence:** `A & A = A` | `A | A = A`
    * *Intuition:* Combining a bit pattern with itself changes absolutely nothing.
* **Complement:** `A & (~A) = 0` | `A | (~A) = ~0`
    * *Intuition:* A bit and its exact opposite can never both be `1` (yielding 0), but one of them is *guaranteed* to be `1` (forcing all 1s).

### 4. The Magic of Exclusive-OR (`^`) 
*XOR acts like binary addition without carrying, offering unique traits for optimization.*

* **Self-Inverse:** `A ^ A` => `0`  
    * *The Equality Trick:* Because identical bit patterns cancel each other out to zero, this is the ultimate way to check if two values match without using comparison operators (`==`). If `x ^ y == 0`, they are identical.
* **Identity:** `A ^ 0` => `A`  
    * *Use case:* Passes the bits through completely untouched.
* **Bit-Flipping:** `A ^ ~0` => `~A`  
    * *Use case:* Acts exactly like a bitwise NOT (`~`), flipping every single bit in the stream.