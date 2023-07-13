#include "BestFixed.hpp"

int main(void) {
	// COMPARISON OPERATORS
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
	BestFixed const d( 15 );
	BestFixed const e( -3 );
	std::cout << "d + e = " << d + e << std::endl;
	std::cout << "d - e = " << d - e << std::endl;
	std::cout << "e - d = " << e - d << std::endl;
	std::cout << "d * e = " << d * e << std::endl;
	std::cout << "d / e = " << d / e << std::endl;
	std::cout << "e / d = " << e / d << std::endl;

	// INCREMENT OPERATORS
	BestFixed f;
	BestFixed g( 2 );
	std::cout << "++f = " << ++f << std::endl;
	std::cout << "g++ = " << g++ << std::endl;
	std::cout << "g++ = " << g << " (after post-increment)" << std::endl;
	BestFixed h;
	BestFixed i( 2 );
	std::cout << "--h = " << --h << std::endl;
	std::cout << "i-- = " << i-- << std::endl;
	std::cout << "i-- = " << i << " (after post-decrement)" << std::endl;

	// MIN AND MAX MEMBER FUNCTIONS
	BestFixed j( 5 );
	BestFixed k( 13.34f );
	std::cout << "min: " << j.min(j, k) << std::endl;
	std::cout << "max: " << j.max(j, k) << std::endl;
	BestFixed const l( 25 );
	BestFixed const m( 6.54f );
	std::cout << "min: " << l.min(l, m) << std::endl;
	std::cout << "max: " << l.max(l, m) << std::endl;
	return 0;
}