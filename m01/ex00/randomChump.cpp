#include "Zombie.h"

void randomChump(std::string name) {
	Zombie newChump = Zombie(name);
	newChump.announce();
}