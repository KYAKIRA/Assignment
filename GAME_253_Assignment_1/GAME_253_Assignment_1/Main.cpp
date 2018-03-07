#include <iostream>
#include "Weapon.h"
#include "PrimaryWeapon.h"
#include "SecoundaryWeapon.h"
#include "Grenade.h"
#include "WeaponInventory.h"


int main(int args, char** argc) {

	
		std::vector<Weapon*> weaponList;
		WeaponInventory inventory;
		weaponList.push_back(new PrimaryWeapon());	
		weaponList.push_back(new SecoundaryWeapon());
		weaponList.push_back(new Grenade());
		weaponList[0]->setWeaponType("PRIMARY - M16");
		weaponList[1]->setWeaponType("SECONDARY - GLOCK");
		weaponList[2]->setWeaponType("GRENADE - FLASHBANG");
		inventory.setWeaponInventory(weaponList);
		inventory.print();
		inventory.getWeaponAttackType();
		inventory.~WeaponInventory();
		//std::cout << weaponLiIst[0]->getWeaponType()<<std::endl;



//	Engine e;
//	e.Print();

	std::cin.get();

	return 0;

}