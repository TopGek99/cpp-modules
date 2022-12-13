#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	type = "Generic";
}

Animal::Animal(Animal &old) {
	std::cout << "Animal copy constructor called" << std::endl;
	type = old.type;
}

Animal &Animal::operator=(Animal &old) {
	std::cout << "Animal assignment operator called" << std::endl;
	type = old.type;
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "<insert animal sound here>" << std::endl;
}

std::string Animal::getType(void) {
	return (type);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}