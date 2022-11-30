#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat &old);
		WrongCat &operator=(WrongCat &old);
		void makeSound(void) const;
		~WrongCat();
};

#endif