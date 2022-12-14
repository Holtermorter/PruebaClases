
#include "Entity.h"






Entity::Entity(int _entityHealth, int _entityStamina, std::string _name, int _damage) {
	entityHealth.healthValue = _entityHealth;
	entityStamina.staminaValue = _entityStamina;
	name = _name;
	damage = _damage;
	level = 1;
}

void Entity::heal(int ammount) {
	entityHealth.healthValue += ammount;
	Entity::check();
}

void Entity::hit(int damage) {
	entityHealth.healthValue -= damage;
	Entity::check();
}

void Entity::check() {
	entityHealth.check();
	entityStamina.check();

	switch (entityStamina.staminaEstatus){
	case true:
		canInteract = true;
		break;
		
	case false:
		canInteract = false;
		break;
	}
}

void Entity::healthIncrease(int ammount) {
	entityHealth.entityHealthSave += ammount;
	Entity::check();
	entityHealth.healthValue = entityHealth.entityHealthSave;
}

int Entity::counter(int type) {
	switch (type){
	case 0:
		return entityHealth.counter();

	case 1:
		return entityStamina.counter();
	default:
		break;
	}
}

void Entity::interact(int staminaDecrase) {
	Entity::check();
	if (entityStamina.staminaEstatus = true) {
		entityStamina.staminaValue -= staminaDecrase;
		Entity::check();
	}
	if (entityStamina.staminaEstatus = false) {
		std::cout << "No puede interactuar ahora mismo, no tiene la energia suficiente.\n";
	}
	Entity::check();
}


void Entity::staminaIncrease(int ammount)
{
	entityStamina.staminaMax += ammount;
	Entity::check();
	entityStamina.staminaValue = entityStamina.staminaMax;
	Entity::check();
}

void Entity::levelUp()
{
	level++;
	entityInventory.weightMax += 10;
	healthIncrease(10);
	staminaIncrease(10);
}

