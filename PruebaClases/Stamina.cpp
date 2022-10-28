#include "Stamina.h"



int Stamina::counter() {

	return staminaValue;
}

void Stamina::staminaIncrease(int ammount) {

	staminaValue += ammount;
	Stamina::check();
}

void Stamina::staminaDecrease(int ammount) {

	staminaValue -= ammount;
	Stamina::check();
}

void Stamina::check() {
	switch (staminaValue){
	case 0:
		std::cout << "Sin estamina.\n";
		staminaEstatus = false;
	default:
		break;
	}

	if (staminaValue > staminaMax) {
		staminaValue = staminaMax;
	}
}