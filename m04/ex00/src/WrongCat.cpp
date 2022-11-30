#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &old) : WrongAnimal(old) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	type = old.type;
}

WrongCat &WrongCat::operator=(WrongCat &old) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	type = old.type;
	return (*this);
}

void WrongCat::makeSound(void) {
	std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}