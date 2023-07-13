#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(Animal &old);
		Animal &operator=(Animal &old);
		virtual void makeSound(void) const;
		std::string getType(void);
		virtual ~Animal();
	protected:
		std::string type;
};

#endif