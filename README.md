# 🎮 SIMPLE TURN-BASED COMBAT SYSTEM DEMO

A basic **turn-based combat simulator** implemented in C++.  
This educational mini-project was created to practice fundamental C++ programming concepts and basic game logic.  

---

## 📖 Description

The player and enemy take turns attacking until one side is defeated:  

- **Player actions**:
  - Normal attack (random damage 5-10)
  - Special attack (random damage 8-15, with critical hit chance)
  - Defense (reduces enemy attack by half)

- **Enemy actions**:
  - Automatic attack each round (random damage 7-12)

The combat loop runs until either the player or enemy's HP reaches 0.

---

## 🔧 Features demonstrated:
✅ `while` loop for main game loop  
✅ `switch-case` control structure for action selection  
✅ Random number generation (`rand()`, `srand()`)  
✅ Conditionals (`if`, `else`) for combat logic  
✅ Basic input/output interaction (`cin`, `cout`)  
✅ Simple simulation of combat mechanics

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
