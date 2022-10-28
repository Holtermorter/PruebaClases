#pragma once
#include "include.cpp"
class Stamina{
private:
	
public:
	int staminaValue = 0;
	int staminaMax = 100;
	bool staminaEstatus = true;
	void check();
	int counter();
	void staminaIncrease(int);
	void staminaDecrease(int);
};

