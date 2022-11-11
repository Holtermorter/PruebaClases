#include "Inventory.h"

Inventory::Inventory(int _weightMax) {
	estatus = true;
	weightMax = _weightMax;
}

void Inventory::inventoryPull() {
	std::cout << "Inventory:" << std::endl;
	std::cout << "Swords:" << std::endl;
	for (int i = 0; i < inventorySwords.size(); i++) {
		std::cout << inventorySwords[i].name << std::endl;
	}
	std::cout << "Food:" << std::endl;
	for (int i = 0; i < inventoryFood.size(); i++) {
		std::cout << inventoryFood[i].name << std::endl;
	}
	std::cout << "Mats:" << std::endl;
	for (int i = 0; i < inventoryMats.size(); i++) {
		std::cout << inventoryMats[i].name << std::endl;
	}
	std::cout << "Armor:" << std::endl;
	for (int i = 0; i < inventoryArmor.size(); i++) {
		std::cout << inventoryArmor[i].name << std::endl;
	}
}

void Inventory::equipSword()
{
	std::cout << "Which sword do you want to equip?" << std::endl;
	std::string swordName;
	std::cin >> swordName;
	for (int i = 0; i < inventorySwords.size(); i++) {
		if (swordName == inventorySwords[i].name) {
			equipedSword = inventorySwords[i];
		}
	}
}

void Inventory::saveSword(Sword sword)
{
	if (weightCheck(sword.weight)) {
		inventorySwords.push_back(sword);
	}
	else {
		std::cout << "You can't carry more weight" << std::endl;
	}
}

void Inventory::saveFood(Food food)
{
	if (weightCheck(food.weight)) {
		inventoryFood.push_back(food);
	}
	else {
		std::cout << "You can't carry more weight" << std::endl;
	}
}

void Inventory::saveMats(Mats mats)
{
	if (weightCheck(mats.weight)) {
		inventoryMats.push_back(mats);
	}
	else {
		std::cout << "You can't carry more weight" << std::endl;
	}
}
void Inventory::saveArmor(Armor armor)
{
	if (weightCheck(armor.weight)) {
		inventoryArmor.push_back(armor);
	}
	else {
		std::cout << "You can't carry more weight" << std::endl;
	}
}

bool Inventory::weightCheck(int weight)
{
	if ((weightTotal + weight) > weightMax) {
		return false;
	}
	else {
		return true;
	}
}