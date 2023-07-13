#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	public:
		Brain();
		Brain(Brain &old);
		Brain &operator=(Brain &old);
		~Brain();
	protected:
		std::string ideas[100];
};

#endif