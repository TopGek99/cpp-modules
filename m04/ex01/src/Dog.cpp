#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	b = new Brain();
}

Dog::Dog(Dog &old) : Animal(old) {
	std::cout << "Dog copy constructor called" << std::endl;
	type = old.type;
	b = old.b;
}

Dog &Dog::operator=(Dog &old) {
	std::cout << "Dog assignment operator called" << std::endl;
	type = old.type;
	b = old.b;
	return (*this);
}

void Dog::makeSound(void) {
	std::cout << "Woof" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete b;
}