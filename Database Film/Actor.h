#pragma once
#include <string>
#include <iostream>
#include "People.h"

class Actor : public People
{

	std::string films;

public:

	Actor(string n) : People(n,"",0) {}
	Actor(string n) : People(n,0) {}
	Actor(string n,int a) : People(n,a) {}
	Actor(string n,int a, string f) : People(n,a), films(f) {}

	Actor(const Actor& other);

	std::string GetActorName();

	void printActorInfo();
};