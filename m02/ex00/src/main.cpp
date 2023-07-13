#include "Fixed.hpp"

int main(void) {
	//Default constructor
	Fixed a;
	//Copy constructor
	Fixed b( a );
	//Default constructor
	Fixed c;
	//setRawBits method
	b.setRawBits(8);
	//Copy assignment operator overload
	c = b;
	//getRawBits method
	std::cout << "raw bits of a:" << std::endl << a.getRawBits() << std::endl;
	std::cout << "raw bits of b:" << std::endl << b.getRawBits() << std::endl;
	std::cout << "raw bits of c:" << std::endl << c.getRawBits() << std::endl;
	return 0;
}