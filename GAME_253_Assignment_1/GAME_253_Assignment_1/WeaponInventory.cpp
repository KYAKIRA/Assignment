#include "WeaponInventory.h"



WeaponInventory::WeaponInventory()
{
	
}


WeaponInventory::~WeaponInventory()
{

	for (int i = 0; i < weaponList.size(); i++) {
		delete weaponList[i];
		weaponList[i] = nullptr;

	}
	weaponList.clear();
	weaponList.shrink_to_fit();

}
void WeaponInventory::setWeaponInventory(std::vector<Weapon*> weaponList_) {
	weaponList = weaponList_;



}
void WeaponInventory::print() {


	for (int i = 0; i < weaponList.size(); i++) {
		std::cout << weaponList[i]->getWeaponType()<< std::endl;

	}
	

}


void WeaponInventory::getWeaponAttackType() {


	for (int i = 0; i < weaponList.size(); i++) {
		weaponList[i]->Shoot();

	}

}
