#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie newChump;
	newChump.setName(name);
	newChump.announce();
}