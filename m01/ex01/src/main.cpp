#include "../inc/Zombie.h"

int main(void) {
	Zombie* zod = zombieHorde(5, "zombo");
	for (int i=0;i<5;i++)
		zod->announce();
	delete[] zod;
}