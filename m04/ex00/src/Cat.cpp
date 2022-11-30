#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat &old) : Animal(old) {
	std::cout << "Cat copy constructor called" << std::endl;
	type = old.type;
}

void Cat::makeSound(void) {
	std::cout << "Meow" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}