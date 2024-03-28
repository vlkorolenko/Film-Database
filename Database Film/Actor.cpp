#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// Функція для виведення інформації про актора
void Actor::printActorInfo()
{
	Human::PrintHumanInfo();
	cout << "Films: " << films << endl;
	std::cout << "-------------" << std::endl;
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

std::ostream& operator<<(std::ostream& os, Actor& actor)
{
	os << "Name: " << actor.name << "\nAge: " << actor.age << "\nFilm: " << actor.films;
	return os;
}

std::istream& operator>>(std::istream& is, Actor& actor)
{
	is >> actor.name >> actor.age >> actor.films;
	return is;
}
