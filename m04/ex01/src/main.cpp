#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Animal a;
	Cat c;
	Dog d;

	std::cout << "a type: " << a.getType() << std::endl;
	std::cout << "c type: " << c.getType() << std::endl;
	std::cout << "d type: " << d.getType() << std::endl;

	std::cout << "a sound: ";
	a.makeSound();
	std::cout << "c sound: ";
	c.makeSound();
	std::cout << "d sound: ";
	d.makeSound();
	return (0);
}