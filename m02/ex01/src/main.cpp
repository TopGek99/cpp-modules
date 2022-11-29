#include "BetterFixed.hpp"


int main(void) {
	BetterFixed a;
	//int constructor
	BetterFixed const b( 10 );
	//float constructor
	BetterFixed const c( 42.42f );
	BetterFixed const d( b );

	//float constructor
	a = BetterFixed( 1234.4321f );

	//insertion operator (<<) overload (includes use of the toFloat method)
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	//toInt method
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}