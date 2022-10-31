#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string t) {
	type = t;
}

const std::string& Weapon::getType(void) {
	const std::string& typeRef = type;
	return (typeRef);
}

void Weapon::setType(std::string newType) {
	type = newType;
}

Weapon::~Weapon() {}