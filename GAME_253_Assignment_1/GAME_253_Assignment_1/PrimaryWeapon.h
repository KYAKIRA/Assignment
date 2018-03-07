#pragma once
#include "Weapon.h"
class PrimaryWeapon: public Weapon
{
public:
	PrimaryWeapon();
	~PrimaryWeapon() override;
	void Shoot() override;
	
};

