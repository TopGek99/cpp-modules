#include "Zombie.h"

Zombie* newZombie(std::string name) {
	Zombie* newGuy = new Zombie;
	newGuy->setName(name);
	return(newGuy);
}