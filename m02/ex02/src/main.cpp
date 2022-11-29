#include "BestFixed.hpp"

int main(void) {
	// COMPARISON OPERATORS
	// change b and c value so that:
	// 1. they are equal
	// 2. b is greater than c
	// 3. b is less than c
	// 4. use different arrangements of float and int as input to test accuracy (initial values do this)
	BestFixed const b( 167 );
	BestFixed const c( 167.2f );
	if (b > c)
		std::cout << "b wins" << std::endl;
	if (b < c)
		std::cout << "c wins" << std::endl;
	if (b >= c)
		std::cout << "b wins or tie" << std::endl;
	if (b <= c)
		std::cout << "c wins or tie" << std::endl;
	if (b == c)
		std::cout << "tie" << std::endl;
	if (b != c)
		std::cout << "not tie" << std::endl;

	// ARITHMETIC OPERATORS
	BestFixed d( 3 );
	BestFixed e( 2 );
	std::cout << "d + e = " << d + e << std::endl;
	std::cout << "d - e = " << d - e << std::endl;
	std::cout << "e - d = " << e - d << std::endl;
	std::cout << "d * e = " << d * e << std::endl;
	std::cout << "d / e = " << d / e << std::endl;
	std::cout << "e / d = " << e / d << std::endl;
	std::cout << "++d = " << ++d << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e++ = " << e << " (after post-increment)" << std::endl;
	return 0;
}