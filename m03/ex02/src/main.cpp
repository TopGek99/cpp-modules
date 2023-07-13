#include "FragTrap.hpp"

int main(void) {
	FragTrap a;
	FragTrap b("john");
	FragTrap c(a);
	FragTrap d;

	d = b;
	// attack member function
	a.attack("john");
	// take 30 damage from attack and repair damage
	b.takeDamage(30);
	b.beRepaired(30);
	// try repair but cannot as already full
	b.beRepaired(1);

	// takes 100 damage to reach 0 HP, attack and beRepaired methods no longer do anything
	c.takeDamage(100);
	c.attack("john");
	c.beRepaired(10);

	// attacks 100 times, expending all energy points and then attack and beRepaired no longer do anything
	for (int i=0;i<100;i++) d.attack("someone");
	d.attack("guy");
	d.beRepaired(0);

	// highFivesGuys member function
	d.highFivesGuys();
}