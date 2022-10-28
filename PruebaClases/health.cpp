#include "include.cpp"
#include "Health.h"



void Health::heal(int ammount) {

	healthValue += ammount;

	Health::check();
}
void Health::hit(int damage) {

	healthValue -= damage;

	Health::check();
}
void Health::healthIncrease(int ammount) {

	entityHealthSave += ammount;

	Health::check();
}


void Health::check() {
	switch (healthValue){

	case 0:
		healthEstatus = false;

	default:
		break;
	}


	switch (healthEstatus){

	case false:
		//gameOver();

	case true:
		break;
	}

	if (healthValue > entityHealthSave) {
		healthValue = entityHealthSave;
	}
}




int Health::counter(){
		Health::check();
		return healthValue;
	
}