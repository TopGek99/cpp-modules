#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	contactIndex = 0;
	contactAmount = 0;
}

void PhoneBook::addContact(Contact newContact) {
	contacts[contactIndex] = newContact;
	if (contactAmount < 8)
		contactAmount++;
	if (contactIndex < 7)
		contactIndex++;
	else
		contactIndex = 0;
}

void PhoneBook::printContacts(void) {
	std::cout << "     index|first name| last name|  nickname";
	for (int i=0;i<contactAmount;i++) {
		std::cout << "         " << i << '|';
		for (int j=0;j<(10-contacts[i].firstName.length());j++)
			std::cout << ' ';
		for (int j=0;j<10;j++)
			std::cout << contacts[i].firstName.at(j);
		if (contacts[i].firstName.length() > 10)
			std::cout << '.';
		std::cout << '|';
		for (int j=0;j<(10-contacts[i].lastName.length());j++)
			std::cout << ' ';
		for (int j=0;j<10;j++)
			std::cout << contacts[i].lastName.at(j);
		if (contacts[i].lastName.length() > 10)
			std::cout << '.';
		std::cout << '|';
		for (int j=0;j<(10-contacts[i].nickname.length());j++)
			std::cout << ' ';
		for (int j=0;j<10;j++)
			std::cout << contacts[i].nickname.at(j);
		if (contacts[i].nickname.length() > 10)
			std::cout << '.';
	}
}

void PhoneBook::getContact(int num) {
	if (num >= contactAmount || num < 0) {
		std::cout << "Invalid Index" << std::endl;
		return ;
	}
	
}

PhoneBook::~PhoneBook() {}