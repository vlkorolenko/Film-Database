#pragma once
#include <string>
#include <iostream>
#include "Human.h"

class Actor : public Human
{

	std::string films;

public:

	Actor() : Human(), films("") {}
	Actor(std::string n) : Human(n), films("") {}
	Actor(std::string n, int a) : Human(n, a), films("") {}
	Actor(std::string n, int a, std::string f) : Human(n, a), films(f) {}

	Actor(const Actor& other) : Human(other.name, other.age), films(other.films) {}

	virtual ~Actor() {};

	std::string GetActorName();

	void printActorInfo();

	virtual void introduce() const override;
	virtual void getProfession() const override;
	void speak() const;


	
};