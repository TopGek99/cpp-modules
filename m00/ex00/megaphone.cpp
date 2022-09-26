#include <iostream>
#include <string>

std::string str_to_upper(std::string s) {
	for (int i=0;i < (int)s.length();i++)
		s.at(i) = toupper(s.at(i));
	return (s);
}

int main(int argc, char *argv[]) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i=1;argv[i];i++)
			std::cout << str_to_upper(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}