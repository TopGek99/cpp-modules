#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(Animal &old);
		Animal &operator=(Animal &old);
		void makeSound(void);
		std::string getType(void);
		~Animal();
	protected:
		std::string type;
};

#endif