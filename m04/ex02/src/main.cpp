#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Animal *animals[10];
	Dog a;
	Cat b;

	// does not work, comment out to run compile correctly
	Animal c;

	for (int i=0;i<10;i++) {
		if (i < 5)
			animals[i] = new Dog(a);
		else
			animals[i] = new Cat(b);
	}
	for (int i=0;i<10;i++)
		delete animals[i];
}