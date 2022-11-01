#include "Harl.hpp"

Harl::Harl() {
	l[0].lvlName = "debug";
	l[0].f = &Harl::debug;
	l[1].lvlName = "info";
	l[1].f = &Harl::info;
	l[2].lvlName = "warning";
	l[2].f = &Harl::warning;
	l[3].lvlName = "error";
	l[3].f = &Harl::error;
}

void Harl::debug(void) {
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

std::string strToLower(std::string str) {
	for (int i=0;i<(int)str.length();i++)
		str[i] = tolower(str[i]);
	return (str);
}

void Harl::complain(std::string level) {
	for (int i=0;i<4;i++)
		if (strToLower(level) == l[i].lvlName) (this->*l[i].f)(); 
}

Harl::~Harl() {}