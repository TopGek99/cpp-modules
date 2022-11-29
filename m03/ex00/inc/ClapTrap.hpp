#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(ClapTrap &old);
		ClapTrap &operator=(ClapTrap &old);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
	private:
		std::string name;
		int hp = 10;
		int ep = 10;
		int dmg = 0;
};

#endif