#include "Weapon.h"



Weapon::Weapon()
{
	weaponType = "Default";
}


Weapon::~Weapon()
{
}
void Weapon::Shoot() {

	std::cout << "Bang Bang" << std::endl;
}
void Weapon::setWeaponType(std::string weapon) {
	weaponType = weapon;
}
std::string Weapon::getWeaponType() {
	return weaponType;
}
