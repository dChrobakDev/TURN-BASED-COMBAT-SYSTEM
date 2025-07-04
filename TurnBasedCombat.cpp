/*
-------------------------------------------------
	SIMPLE TURN-BASED COMBAT SYSTEM DEMO
	Author: Dawid Chrobak
	Language: C++
	Description:
		This program simulates a simple
		turn-based combat system. The player 
		fights an enemy using normal attacks,
		special attacks (with may crit), or
		defense actions that reduce damage.

		Demonstartes:
		- random number generation (rand, srand)
		- switch-case control flow
		- use of loops conditionals
		- basic combat logic
-------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// Initalize random seed
	srand(time(0));

	// Initialize player and enemy health points
	int hpPlayer = 100, hpEnemy = 100;

	// Main combat loop - continues until one side loses 
	while (hpPlayer > 0 && hpEnemy > 0) {
		
		// Generate attack values for this turn
		int normalAttack = rand() % 6 + 5;	// Normal attack damage: 5-10
		int specialAttack = rand() % 8 + 8; // Special attack damage: 8-15
		int defend = 0;						// Deffence doesn`t deal damage
		
		int enemyAttack = rand() % 6 + 7;		// Enemy attack damage: 7-12

		int action;
		cout << "\n\nChoose action (1-3)\n\n";
		cout << "1. Normal attack." << endl;
		cout << "2. Special attack." << endl;
		cout << "3. Defence.\n" << endl;
		cin >> action;

		switch (action) {

		case 1:
			// Player chooses normal attack
			cout << normalAttack << " Normal Attack!" << endl;

			hpPlayer -= enemyAttack;
			hpEnemy -= normalAttack;

			cout << "Player HP: " << hpPlayer << endl;
			cout << "Enemy HP: " << hpEnemy << endl;
			break;
		case 2:
			// Player chooses special attack
			if (specialAttack >= 12 && specialAttack <= 15) {
				// Critical hit if random value is 12-15
				specialAttack *= 1.5;
				cout << specialAttack << " CRITICAL HIT with Special Attack!" << endl;
			}
			else {
				cout << specialAttack << " Special Attack damage! " << endl;
			}
			hpPlayer -= enemyAttack;
			hpEnemy -= specialAttack;

			cout << "Player HP: " << hpPlayer << endl;
			cout << "Enemy HP: " << hpEnemy << endl;
			break;
		case 3:
			// Player chooses to defend - takes half damage
			cout << defend << "Defending! Enemy attack is reduced." << endl;
			hpPlayer -= enemyAttack / 2;
			cout << "Player HP: " << hpPlayer << endl;
			cout << "Enemy HP: " << hpEnemy << endl;
			break;

		default: 
			cout << "Invalid choice"; break;
		}
		
		} 
	// Check victory conditions
	if (hpPlayer <= 0) {
		cout << "Defeat!";
	}
	else if (hpEnemy <= 0) {
		cout << "VICTORY!";
	}
	
	return 0;
}

