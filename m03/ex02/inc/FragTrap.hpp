#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string n);
		FragTrap(FragTrap &old);
		void highFivesGuys(void);
		~FragTrap();
};

#endif