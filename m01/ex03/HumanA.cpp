#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : weapon(w) {
	name = n;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}