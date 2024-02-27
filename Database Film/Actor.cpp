#include "Actor.h"
#include <iostream>

std::string Actor::GetName() { return name; }

void Actor::printInfo()
{
	std::cout << "Name: " << this->name << "\nAge: " << this->age << std::endl << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Actor& actor)
{
	os << "Actor: " << actor.name << "\nAge: " << actor.age;
	return os;
}
