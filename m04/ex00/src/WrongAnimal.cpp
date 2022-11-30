#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	type = "Generic";
}

WrongAnimal::WrongAnimal(WrongAnimal &old) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	type = old.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &old) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	type = old.type;
	return (*this);
}

void WrongAnimal::makeSound(void) {
	std::cout << "<insert WrongAnimal sound here>" << std::endl;
}

std::string WrongAnimal::getType(void) {
	return (type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}