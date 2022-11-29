#include "BestFixed.hpp"

int main(void) {
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
	return 0;
}