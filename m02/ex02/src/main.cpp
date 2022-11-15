#include "BestFixed.hpp"

int main(void) {
	BestFixed const b( 16777215 );
	BestFixed const c( 42.42f );
	std::cout << b + c << std::endl;
	return 0;
}