#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string ln, std::string fn, std::string nn, std::string ds, std::string p) {
	lastName = ln;
	firstName = fn;
	nickname = nn;
	darkestSecret = ds;
	phone = p;
}

std::string Contact::getFirstName(void) {
	return (firstName);
}
std::string Contact::getLastName(void) {
	return (lastName);
}
std::string Contact::getNickname(void) {
	return (nickname);
}
std::string Contact::getPhone(void) {
	return (phone);
}

Contact::~Contact() {}