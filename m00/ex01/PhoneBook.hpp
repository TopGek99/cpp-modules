#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		void addContact(Contact newContact);
		void getContact(int num);
		void printContacts(void);
		~PhoneBook();
	private:
		int contactIndex;
		int contactAmount;
		Contact contacts[8];
};

#endif