#pragma once
#include "Food.h"
#include "Sword.h"
#include <iostream>
#include <string>
#include <vector>


class Inventory
{
private:
	bool estatus;
public:
	int weightMax;
	int weightTotal;
	Inventory(int);
	std::vector<Sword> inventorySwords{};
	std::vector<Food> inventoryFood{};
	std::vector<Mats> inventoryMats{};
	std::vector<Armor> inventoryArmor{};
	void inventoryPull();
	Sword equipedSword;
	void equipSword();
	void saveSword(Sword);
	void saveFood(Food);
	void saveMats(Mats);
	void saveArmor(Armor);
	bool weightCheck(int);
};


