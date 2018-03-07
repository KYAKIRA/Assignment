#pragma once
#include "Weapon.h"
class SecoundaryWeapon : public Weapon
{
public:
	SecoundaryWeapon();
	~SecoundaryWeapon()override;
	void Shoot() override;
};

