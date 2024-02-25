#include "Actor.h"
#include <iostream>

void Actor::printInfo()
{
	std::cout << "Name: " << name << "\nAge: " << age << "\nFilms: " << films << std::endl;
	std::cout << "-------------" << std::endl;
}
