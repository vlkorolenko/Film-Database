#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// Функція для виведення інформації про актора
void Actor::printActorInfo()
{
	Human::PrintHumanInfo();
	cout << "Films: " << films << endl;
}

void Actor::introduce() const
{
	std::cout << "Hello! My name is " << name << endl;
}

void Actor::getProfession() const
{
	std::cout << "Actor\n\n";
}

void Actor::speak() const
{
	std::cout << "I am an actor\n";
}
