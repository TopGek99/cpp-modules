#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &old);
		WrongAnimal &operator=(WrongAnimal &old);
		void makeSound(void) const;
		std::string getType(void);
		virtual ~WrongAnimal();
	protected:
		std::string type;
};

#endif