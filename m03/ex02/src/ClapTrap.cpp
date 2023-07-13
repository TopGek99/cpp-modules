#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "default constructor called" << std::endl;
	name = "steve";
	maxhp = 10;
	hp = 10;
	ep = 10;
	dmg = 0;
}

ClapTrap::ClapTrap(std::string n) {
	std::cout << "constructor with name called" << std::endl;
	name = n;
	maxhp = 10;
	hp = 10;
	ep = 10;
	dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap &old) {
	std::cout << "copy constructor called" << std::endl;
	name = old.name;
	hp = old.hp;
	ep = old.ep;
	dmg = old.dmg;
}

ClapTrap &ClapTrap::operator=(ClapTrap &old) {
	std::cout << "assignment operator called" << std::endl;
	name = old.name;
	hp = old.hp;
	ep = old.ep;
	dmg = old.dmg;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (hp > 0 && ep > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
		ep--;
	} else if (hp <= 0)
		std::cout << "ClapTrap " << name << " is dead and cannot attack!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has insufficient energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp > 0) {
		hp -= amount;
		std::cout << "ClapTrap " << name << " took " << amount << " points of damage! It now has " << hp << " HP." << std::endl;
		if (hp <= 0)
			std::cout << "ClapTrap " << name << " died!" << std::endl;
	} else
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hp > 0 && ep > 0 && hp < maxhp) {
		hp += amount;
		if (hp > maxhp)
			hp = maxhp;
		std::cout << "ClapTrap " << name << " was repaired for " << amount << " points of hp! It now has " << hp << " HP." << std::endl;
		ep--;
	} else if (hp <= 0)
		std::cout << "ClapTrap " << name << " is dead and cannot repair itself!" << std::endl;
	else if (ep <= 0)
		std::cout << "ClapTrap " << name << " has insufficient energy to repair!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " is at full HP!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor called" << std::endl;
}