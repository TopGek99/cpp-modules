#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	b = new Brain();
}

Cat::Cat(Cat &old) : Animal(old) {
	std::cout << "Cat copy constructor called" << std::endl;
	type = old.type;
	b = new Brain(*old.b);
}

Cat &Cat::operator=(Cat &old) {
	std::cout << "Cat assignment operator called" << std::endl;
	type = old.type;
	b = new Brain(*old.b);
	return (*this);
}

void Cat::makeSound(void) {
	std::cout << "Meow" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete b;
}