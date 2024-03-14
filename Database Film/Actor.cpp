#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// Функція для виведення інформації про актора
void Actor::printActorInfo()
{
	People::PrintPeopleInfo();
	std::cout << "Name: " << this->name << "\nAge: " << this->age << std::endl;
}
