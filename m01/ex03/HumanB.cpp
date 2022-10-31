#include "HumanB.hpp"

HumanB::HumanB(std::string n) {
	name = n;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *newWeapon) {
	weapon = newWeapon;
}

HumanB::~HumanB() {}