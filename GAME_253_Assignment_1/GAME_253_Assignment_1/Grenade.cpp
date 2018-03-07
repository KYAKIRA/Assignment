#include "Grenade.h"



Grenade::Grenade()
{
	setWeaponType("Grenade");
}


Grenade::~Grenade()
{
}

void Grenade::Shoot() {

	std::cout << "Throw Grenade - BOOM" << std::endl;

}