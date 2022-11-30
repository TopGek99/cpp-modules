#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	// Animal pointers created using the heap
	Animal *a = new Animal();
	Animal *c = new Cat();
	Animal *d = new Dog();

	// showing each Animal's type based on which class/subclass they were instantiated as
	std::cout << "a type: " << a->getType() << std::endl;
	std::cout << "c type: " << c->getType() << std::endl;
	std::cout << "d type: " << d->getType() << std::endl;

	// each Animal makes their sound
	std::cout << "a sound: ";
	a->makeSound();
	std::cout << "c sound: ";
	c->makeSound();
	std::cout << "d sound: ";
	d->makeSound();

	delete a;
	delete c;
	delete d;

	// creating animals using classes that don't have virtual "makeSound" functions
	WrongAnimal *wa = new WrongAnimal();
	WrongAnimal *wc = new WrongCat();

	// each wrong animal makes their sound (wrong cat makes wrong sound)
	std::cout << "wrong a sound: ";
	wa->makeSound();
	std::cout << "wrong c sound: ";
	wc->makeSound();

	delete wa;
	delete wc;
	return (0);
}