#include "Zombie.h"

Zombie* newZombie(std::string name) {
	Zombie* newGuy = new Zombie(name);
	return(newGuy);
}