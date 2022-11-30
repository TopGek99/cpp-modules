#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal *a = new Animal();
	Animal *c = new Cat();
	Animal *d = new Dog();

	std::cout << "a type: " << a->getType() << std::endl;
	std::cout << "c type: " << c->getType() << std::endl;
	std::cout << "d type: " << d->getType() << std::endl;

	std::cout << "a sound: ";
	a->makeSound();
	std::cout << "c sound: ";
	c->makeSound();
	std::cout << "d sound: ";
	d->makeSound();

	WrongAnimal *wa = new WrongAnimal();
	WrongAnimal *wc = new WrongCat();

	std::cout << "wrong a sound: ";
	wa->makeSound();
	std::cout << "wrong c sound: ";
	wc->makeSound();
	return (0);
}