#include "Zombie.h"

Zombie::Zombie() {}

Zombie::Zombie(std::string n) {
	name = n;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " has been effectively destroyed." << std::endl;
}