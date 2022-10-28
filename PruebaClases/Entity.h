#pragma once
#include "includeTotal.cpp"

class Entity {
private:
	Health entityHealth;
	Stamina entityStamina;
public:
	std::string name;
	Entity(int, int, std::string, int);
	int damage;
	void heal(int);
	void hit(int);
	void healthIncrease(int);
	void check();
	int counter(int);
	bool canInteract = true;
	void interact(int);
};