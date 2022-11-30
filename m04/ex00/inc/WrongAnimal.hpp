#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &old);
		WrongAnimal &operator=(WrongAnimal &old);
		void makeSound(void);
		std::string getType(void);
		~WrongAnimal();
	protected:
		std::string type;
};

#endif