#pragma once
#include <iostream>

class Sword
{
private:
	int durabilityMax;
public:
	Sword(int, int, std::string);
	std::string name;
	int damage;
	int durability;
	
	bool estatus = true;
	void check();
};
	




