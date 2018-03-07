#include "PrimaryWeapon.h"



PrimaryWeapon::PrimaryWeapon()
{
	setWeaponType("Primary");
}


PrimaryWeapon::~PrimaryWeapon()
{
}

void PrimaryWeapon::Shoot() {
	std::cout << "Shoot Primary -PEW PEW" << std::endl;
}

