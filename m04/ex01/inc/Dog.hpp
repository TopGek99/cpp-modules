#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog &old);
		Dog &operator=(Dog &old);
		void makeSound(void);
		~Dog();
};

#endif