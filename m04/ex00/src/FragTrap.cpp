#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "default constructor called (FragTrap)" << std::endl;
	name = "steve";
	maxhp = 100;
	hp = 100;
	ep = 100;
	dmg = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n) {
	std::cout << "constructor with name called (FragTrap)" << std::endl;
	name = n;
	maxhp = 100;
	hp = 100;
	ep = 100;
	dmg = 30;
}

FragTrap::FragTrap(FragTrap &old) : ClapTrap(old) {
	std::cout << "copy constructor called (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests the highest of fives" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "destructor called (FragTrap)" << std::endl;
}