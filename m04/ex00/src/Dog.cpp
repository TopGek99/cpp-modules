#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog &old) : Animal(old) {
	std::cout << "Dog copy constructor called" << std::endl;
	type = old.type;
}

void Dog::makeSound(void) {
	std::cout << "Woof" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}