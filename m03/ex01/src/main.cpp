#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a;
	ScavTrap b("john");
	ScavTrap c(a);
	ScavTrap d;

	d = b;
	// attack member function
	a.attack("john");
	// take 0 damage from attack and try repair but cannot as already full HP
	b.takeDamage(20);
	b.beRepaired(1);
	// take 1 damage and repair 1 HP normally
	b.takeDamage(1);
	b.beRepaired(1);

	// takes 10 damage to reach 0 HP, attack and beRepaired methods no longer do anything
	c.takeDamage(10);
	c.attack("john");
	c.beRepaired(10);

	// attacks 10 times, expending all energy points and then attack and beRepaired no longer do anything
	for (int i=0;i<50;i++) d.attack("someone");
	d.attack("guy");
	d.beRepaired(0);
}