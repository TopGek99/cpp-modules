#include "BetterFixed.hpp"

int main(void) {
	BetterFixed a;
	BetterFixed b( a );
	BetterFixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}