#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	name = "John";
	grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat &old) {
	name = old.name;
	grade = old.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &old) {
	name = old.name;
	grade = old.grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (name);
}
int Bureaucrat::getGrade(void) {
	return (grade);
}

void Bureaucrat::incrementGrade(void) {
	grade--;
}

void Bureaucrat::decrementGrade(void) {
	grade++;
}

Bureaucrat::~Bureaucrat() {

}