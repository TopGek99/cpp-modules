#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
	Zombie* zod = newZombie("zod");
	zod->announce();
	randomChump("chump");
	delete zod;
}