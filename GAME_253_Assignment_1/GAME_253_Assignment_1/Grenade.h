#pragma once
#include "Weapon.h"
class Grenade: public Weapon
{
public:
	Grenade();
	~Grenade() override;
	void Shoot() override;

};

