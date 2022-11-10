#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie();
		void setName(std::string n);
		void announce(void);
		~Zombie();
	private:
		std::string name;
};

#endif