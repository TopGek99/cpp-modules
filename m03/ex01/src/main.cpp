#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a;
	ScavTrap b("john");
	ScavTrap c(a);
	ScavTrap d;

	d = b;
	// attack member function
	a.attack("john");
	// take 20 damage from attack and repair damage
	b.takeDamage(20);
	b.beRepaired(20);
	// try repair but cannot as already full
	b.beRepaired(1);

	// takes 100 damage to reach 0 HP, attack and beRepaired methods no longer do anything
	c.takeDamage(100);
	c.attack("john");
	c.beRepaired(10);

	// attacks 50 times, expending all energy points and then attack and beRepaired no longer do anything
	for (int i=0;i<50;i++) d.attack("someone");
	d.attack("guy");
	d.beRepaired(0);
}