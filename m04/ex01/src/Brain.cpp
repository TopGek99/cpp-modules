#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &old) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i=0;i<100;i++) ideas[i] = old.ideas[i];
}

Brain &Brain::operator=(Brain &old) {
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i=0;i<100;i++) ideas[i] = old.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}