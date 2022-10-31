#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook() {
	contactIndex = 0;
	contactAmount = 0;
}

void PhoneBook::addContact(std::string ln, std::string fn, std::string nn, std::string ds, std::string p) {
	contacts[contactIndex] = Contact(ln, fn, nn, ds, p);
	if (contactAmount < 8)
		contactAmount++;
	if (contactIndex < 7)
		contactIndex++;
	else
		contactIndex = 0;
}

int PhoneBook::printContacts(void) {
	if (contactAmount == 0) {
		std::cout << "No Contacts!" << std::endl;
		return (1);
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i=0;i<contactAmount;i++) {
		std::cout << "         " << i << '|';
		if (contacts[i].getFirstName().length() <= 10)
			std::cout << std::setfill(' ') << std::setw(10) << contacts[i].getFirstName();
		else
			std::cout << std::setw(9) << contacts[i].getFirstName().substr(0,9) << '.';
		std::cout << '|';
		if (contacts[i].getLastName().length() <= 10)
			std::cout << std::setfill(' ') << std::setw(10) << contacts[i].getLastName();
		else
			std::cout << std::setw(9) << contacts[i].getLastName().substr(0,9) << '.';
		std::cout << '|';
		if (contacts[i].getNickname().length() <= 10)
			std::cout << std::setfill(' ') << std::setw(10) << contacts[i].getNickname();
		else
			std::cout << std::setw(9) << contacts[i].getNickname().substr(0,9) << '.';
		std::cout << std::endl;
	}
	return (0);
}

int PhoneBook::getContact(int num) {
	if (num >= contactAmount || num < 0) {
		std::cout << "Invalid Index" << std::endl;
		return (1);
	}
	std::cout << "First Name: " << contacts[num].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[num].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[num].getNickname() << std::endl;
	std::cout << "Phone: " << contacts[num].getPhone() << std::endl;
	return (0);
}

PhoneBook::~PhoneBook() {
	for (int i=0;i < contactAmount;i++) {
		contacts[i].~Contact();
	}
}