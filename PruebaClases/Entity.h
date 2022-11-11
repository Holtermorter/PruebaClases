#pragma once
#include "includeall.cpp"
#include <vector>
#

class Entity {
private:
	Health entityHealth;
	Stamina entityStamina;
	
public:
	Inventory entityInventory = Inventory(100);
	int level;
	std::string name;
	Entity(int, int, std::string, int);
	int damage;
	void heal(int);
	void hit(int);
	void healthIncrease(int);
	void staminaIncrease(int);
	void check();
	int counter(int);
	bool canInteract = true;
	void interact(int);
	void levelUp();
};