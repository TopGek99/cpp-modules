#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string ln, std::string fn, std::string nn, std::string ds, std::string p) {
	lastName = ln;
	firstName = fn;
	nickname = nn;
	darkestSecret = ds;
	phone = p;
}

Contact::~Contact() {}