#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a;
	ClapTrap b("john");
	ClapTrap c(a);

	//
	a.attack("john");
	b.takeDamage(0);

	b.attack("steve");
}