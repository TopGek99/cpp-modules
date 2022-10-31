#include <iostream>
#include "PhoneBook.hpp"

int main(void) {
	std::string command;
	std::string f, l, n, p, d;
	int index = -1;
	PhoneBook book = PhoneBook();

	while (1) {
		std::cout << "ADD, SEARCH or EXIT: ";
		std::cin >> command;
		if (command.compare("EXIT") == 0)
		{
			book.~PhoneBook();
			return (0);
		} else if (command.compare("ADD") == 0) {
			std::cout << "First Name: ";
			std::cin >> f;
			std::cout << "Last Name: ";
			std::cin >> l;
			std::cout << "Nickname: ";
			std::cin >> n;
			std::cout << "Phone: ";
			std::cin >> p;
			std::cout << "Darkest Secret: ";
			std::cin.ignore();
			std::getline(std::cin, d);
			book.addContact(l, f, n, d, p);
		} else if (command.compare("SEARCH") == 0) {
			if (book.printContacts() == 0) {
				while (index == -1) {
					std::cout << "Enter index: ";
					std::cin >> index;
					index = book.getContact(index);
				}
				index = -1;
			}
		} else {
			std::cout << "Invalid Command" << std::endl;
		}
	}
}