#include "SecoundaryWeapon.h"



SecoundaryWeapon::SecoundaryWeapon()
{
	setWeaponType("Secondary");
}


SecoundaryWeapon::~SecoundaryWeapon()
{
}

void SecoundaryWeapon::Shoot() {

	std::cout << "Shoot Secondary - BRRT BRRT" << std::endl;
}