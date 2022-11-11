#include "Sword.h"


Sword::Sword(int _damage, int _durabiliyty, std::string)
{
	damage = _damage;
	durabilityMax = _durabiliyty;
	durability = _durabiliyty;
}


void Sword::check()
{
	if (durability <= 0) {
		estatus = false;
	}
	
	switch (estatus)
	{
	case true:
		break;
		
	case false:
		std::cout << "The sword is broken" << std::endl;
		break;
	}

}

