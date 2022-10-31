#include "Zombie.h"

int main(void) {
	Zombie* zod = newZombie("zod");
	zod->announce();
	randomChump("chump");
	zod->~Zombie();
}