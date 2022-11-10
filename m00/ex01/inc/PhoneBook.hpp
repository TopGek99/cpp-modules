#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
	public:
		PhoneBook();
		void addContact(std::string ln, std::string fn, std::string nn, std::string ds, std::string p);
		int getContact(int num);
		int printContacts(void);
		~PhoneBook();
	private:
		int contactIndex;
		int contactAmount;
		Contact contacts[8];
};

#endif