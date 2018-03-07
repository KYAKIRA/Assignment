#pragma once
#include <string>
#include <iostream>
class Weapon
{
public:
	Weapon();
	virtual ~Weapon();
	virtual void Shoot();
	void setWeaponType(std::string weapon);
	std::string getWeaponType();
private:
	std::string weaponType;
};

