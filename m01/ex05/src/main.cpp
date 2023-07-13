#include "Harl.hpp"

int main()
{
	Harl newHarl;

	//Debug complaint
	std::cout << "input: DEBUG, output:" << std::endl;
	newHarl.complain("DEBUG");
	std::cout << std::endl;
	//Info complaint
	std::cout << "input: INFO, output:" << std::endl;
	newHarl.complain("INFO");
	std::cout << std::endl;
	//Warning complaint
	std::cout << "input: WARNING, output:" << std::endl;
	newHarl.complain("WARNING");
	std::cout << std::endl;
	//Error complaint
	std::cout << "input: ERROR, output:" << std::endl;
	newHarl.complain("ERROR");
	std::cout << std::endl;
	//Works regardless of case
	std::cout << "input: DeBUg, output:" << std::endl;
	newHarl.complain("DeBUg");
	std::cout << std::endl;
	//Invalid complaint
	std::cout << "input: BE NICE FOR ONCE, output:" << std::endl;
	newHarl.complain("BE NICE FOR ONCE");
	std::cout << std::endl;
	return 0;
}
