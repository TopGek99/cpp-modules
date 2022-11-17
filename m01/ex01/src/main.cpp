#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
	// Should not work
	Zombie* bad = zombieHorde(-1, "zombo");
	delete bad;
	// Should work
	int N = 5;
	Zombie* good = zombieHorde(N, "zombo");
	// Horde announces themselves
	for (int i=0;i<N;i++)
		good[i].announce();
	// Destructor called for heap allocated zombies
	delete[] good;
}