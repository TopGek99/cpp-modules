#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::Fixed(Fixed &old) {
	value = old.value;
}

Fixed &Fixed::operator=(const Fixed &num) {
	value = num.value;
}

Fixed::~Fixed() {}