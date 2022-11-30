#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat &old);
		Cat &operator=(Cat &old);
		void makeSound(void) const;
		~Cat();
};

#endif