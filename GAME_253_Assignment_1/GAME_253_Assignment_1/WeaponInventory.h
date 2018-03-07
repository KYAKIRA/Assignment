#pragma once
#include "Weapon.h"
#include <vector>
class WeaponInventory
{
public:
	WeaponInventory();
	~WeaponInventory();
	void setWeaponInventory(std::vector<Weapon*> weaponList_);
	void print();
	void getWeaponAttackType();
private:
	int weaponListSize;
	std::vector<Weapon*> weaponList;

};

