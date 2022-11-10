#include "BetterFixed.hpp"

BetterFixed::BetterFixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

BetterFixed::BetterFixed(BetterFixed &old) : value(old.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

BetterFixed::BetterFixed(int const val) : value(val) {
	std::cout << "Int constructor called" << std::endl;
}


BetterFixed::BetterFixed(float const val) {
	std::cout << "Float constructor called" << std::endl;
	value = (int)val;
}

void BetterFixed::operator=(BetterFixed &num) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = num.getRawBits();
}

int BetterFixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void BetterFixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

BetterFixed::~BetterFixed() {
	std::cout << "Destructor called" << std::endl;
}