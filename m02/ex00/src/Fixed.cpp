#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed &old) {
	std::cout << "Copy constructor called" << std::endl;
	value = old.getRawBits();
}

Fixed &Fixed::operator=(Fixed &num) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = num.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}