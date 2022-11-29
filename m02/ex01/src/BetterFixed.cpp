#include "BetterFixed.hpp"

BetterFixed::BetterFixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

BetterFixed::BetterFixed(const BetterFixed &old) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

BetterFixed::BetterFixed(int const val) {
	std::cout << "Int constructor called" << std::endl;
	value = val << bits;
}


BetterFixed::BetterFixed(float const val) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(val * (1 << bits));
}

BetterFixed &BetterFixed::operator=(const BetterFixed &num) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = num.getRawBits();
	return (*this);
}

int BetterFixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void BetterFixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int BetterFixed::toInt(void) const {
	return (value >> bits);
}

float BetterFixed::toFloat(void) const {
	return ((float)value / (float)(1 << bits));
}

std::ostream& operator<< (std::ostream& stream, const BetterFixed& Fixed) {
	stream << Fixed.toFloat();
	return (stream);
}

BetterFixed::~BetterFixed() {
	std::cout << "Destructor called" << std::endl;
}