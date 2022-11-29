#include "BestFixed.hpp"

BestFixed::BestFixed() {
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

BestFixed::BestFixed(const BestFixed &old) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

BestFixed::BestFixed(int const val) {
	// std::cout << "Int constructor called" << std::endl;
	value = val << bits;
}


BestFixed::BestFixed(float const val) {
	// std::cout << "Float constructor called" << std::endl;
	value = roundf(val * (1 << bits));
}

BestFixed &BestFixed::operator=(const BestFixed &num) {
	// std::cout << "Copy assignment operator called" << std::endl;
	value = num.getRawBits();
	return (*this);
}

bool BestFixed::operator>(const BestFixed &num) const {
	// std::cout << "Greater-than comparison operator called" << std::endl;
	return (value > num.getRawBits());
}

bool BestFixed::operator<(const BestFixed &num) const {
	// std::cout << "Less-than comparison operator called" << std::endl;
	return (value < num.getRawBits());
}

bool BestFixed::operator>=(const BestFixed &num) const {
	// std::cout << "Greater-than-equal-to comparison operator called" << std::endl;
	return (value >= num.getRawBits());
}

bool BestFixed::operator<=(const BestFixed &num) const {
	// std::cout << "Less-than-equal-to comparison operator called" << std::endl;
	return (value <= num.getRawBits());
}

bool BestFixed::operator==(const BestFixed &num) const {
	// std::cout << "Equal-to comparison operator called" << std::endl;
	return (value == num.getRawBits());
}

bool BestFixed::operator!=(const BestFixed &num) const {
	// std::cout << "Equal-to comparison operator called" << std::endl;
	return (value != num.getRawBits());
}

BestFixed BestFixed::operator+(const BestFixed &num) const {
	// std::cout << "Plus arithmetic operator called" << std::endl;
	BestFixed res;
	res.setRawBits(value + num.getRawBits());
	return (res);
}

BestFixed BestFixed::operator-(const BestFixed &num) const {
	// std::cout << "Plus arithmetic operator called" << std::endl;
	BestFixed res;
	res.setRawBits(value - num.getRawBits());
	return (res);
}

BestFixed BestFixed::operator*(const BestFixed &num) const {
	// std::cout << "Plus arithmetic operator called" << std::endl;
	BestFixed res;
	res.setRawBits((value * num.getRawBits()) >> bits);
	return (res);
}

BestFixed BestFixed::operator/(const BestFixed &num) const {
	// std::cout << "Plus arithmetic operator called" << std::endl;
	BestFixed res;
	res.setRawBits((value << bits)/ num.getRawBits());
	return (res);
}

BestFixed &BestFixed::operator++(void) {
	// std::cout << "pre-increment operator called" << std::endl;
	value++;
	return (*this);
}

BestFixed BestFixed::operator++(int) {
	// std::cout << "post-increment operator called" << std::endl;
	BestFixed temp = *this;
	value++;
	return (temp);
}

BestFixed &BestFixed::operator--(void) {
	// std::cout << "pre-increment operator called" << std::endl;
	value--;
	return (*this);
}

BestFixed BestFixed::operator--(int) {
	// std::cout << "post-increment operator called" << std::endl;
	BestFixed temp = *this;
	value--;
	return (temp);
}

BestFixed BestFixed::min(BestFixed &a, BestFixed &b) {
	if (a < b)
		return (a);
	return (b);
}

BestFixed BestFixed::min(BestFixed const &a, BestFixed const &b) {
	if (a < b)
		return (a);
	return (b);
}

BestFixed BestFixed::max(BestFixed &a, BestFixed &b) {
	if (a > b)
		return (a);
	return (b);
}

BestFixed BestFixed::max(BestFixed const &a, BestFixed const &b) {
	if (a > b)
		return (a);
	return (b);
}

int BestFixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void BestFixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int BestFixed::toInt(void) const {
	return (value >> bits);
}

float BestFixed::toFloat(void) const {
	return ((float)value / (float)(1 << bits));
}

BestFixed::~BestFixed() {
	// std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream& stream, const BestFixed& Fixed) {
	stream << Fixed.toFloat();
	return (stream);
}