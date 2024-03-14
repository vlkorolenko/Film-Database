#pragma once
#include <string>
#include <iostream>
#include "People.h"

class Actor : public People
{

	std::string films;

public:

	Actor() : People(), films("") {}
	Actor(std::string n) : People(n), films("") {}
	Actor(std::string n, int a) : People(n, a), films("") {}
	Actor(std::string n, int a, std::string f) : People(n, a), films(f) {}

	Actor(const Actor& other) : People("None", 0), films(other.films) {}

	std::string GetActorName();

	void printActorInfo();
};