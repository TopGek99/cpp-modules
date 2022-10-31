#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string t);
		const std::string& getType(void);
		void setType(std::string newType);
		~Weapon();
	private:
		std::string type;
};

#endif