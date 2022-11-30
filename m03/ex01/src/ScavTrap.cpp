#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "default constructor called (ScavTrap)" << std::endl;
	name = "steve";
	maxhp = 100;
	hp = 100;
	ep = 50;
	dmg = 20;
}

ScavTrap::ScavTrap(std::string n) {
	std::cout << "constructor with name called (ScavTrap)" << std::endl;
	name = n;
	maxhp = 100;
	hp = 100;
	ep = 50;
	dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap &old) : ClapTrap(old) {
	std::cout << "copy constructor called (ScavTrap)" << std::endl;
}

// ScavTrap &ScavTrap::operator=(ScavTrap &old) {
// 	std::cout << "assignment operator called" << std::endl;
	
// 	return (*this);
// }

void ScavTrap::attack(const std::string &target){
	if (hp > 0 && ep > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
		ep--;
	} else if (hp <= 0)
		std::cout << "ScavTrap " << name << " is dead and cannot attack!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " has insufficient energy to attack!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "destructor called (ScavTrap)" << std::endl;
}