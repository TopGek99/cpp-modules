#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	public:
		HumanB(std::string n);
		void attack(void);
		void setWeapon(Weapon &newWeapon);
		~HumanB();
	private:
		Weapon *weapon;
		std::string name;
};

#endif