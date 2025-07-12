# 🎮 SIMPLE TURN-BASED COMBAT SYSTEM DEMO

A basic **turn-based combat simulator** implemented in C++.  
This educational mini-project practices fundamental C++ programming concepts.

---

## 📋 Description

The player and enemy take turns attacking until one side is defeated:

- **Player actions**:
  - Normal attack (random damage 5-10)
  - Special attack (random damage 8-15, with critical hit chance)
  - Defense (reduces enemy attack by half)

- **Enemy actions**:
  - Automatic attack each round (random damage 7-12)

---

## 🧩 Features demonstrated:

✅ `while` loop for main game loop  
✅ `switch-case` control structure for action selection  
✅ Random number generation (`rand()`, `srand()`)  
✅ Conditionals (`if`, `else`) for combat logic  
✅ Basic input/output interaction (`cin`, `cout`)  
✅ Simple simulation of combat mechanics

---

## 🔧 How to run

1️⃣ Compile with a C++ compiler that supports C++11 or later (e.g., `g++` or Visual Studio).  
2️⃣ Run the executable and follow console prompts.

---

## 👤 Author

**Dawid Chrobak**  
Aspiring Game Developer  
[LinkedIn](https://www.linkedin.com/in/dawid-chrobak-9511a0373/) | [GitHub](https://github.com/dChrobakDev)

---

## 📝 Example output

```text
Choose action (1-3)

1. Normal attack.
2. Special attack.
3. Defence.

10 Normal Attack!
Player HP: 85
Enemy HP: 92
...
VICTORY!
