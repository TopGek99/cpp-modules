#include "Fixed.hpp"

int main(void) {
	//Default constructor
	Fixed a;
	//Copy constructor
	Fixed b( a );
	//Default constructor
	Fixed c;
	//setRawBits
	b.setRawBits(8);
	//Copy assignment operator overload
	c = b;
	//getRawBits
	std::cout << "raw bits of a:\n" << a.getRawBits() << std::endl;
	std::cout << "raw bits of b:\n" << b.getRawBits() << std::endl;
	std::cout << "raw bits of c:\n" << c.getRawBits() << std::endl;
	return 0;
}