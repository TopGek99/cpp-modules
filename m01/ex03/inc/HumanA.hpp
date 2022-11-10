#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	public:
		HumanA(std::string n, Weapon &w);
		void attack(void);
		~HumanA();
	private:
		Weapon &weapon;
		std::string name;
};

#endif