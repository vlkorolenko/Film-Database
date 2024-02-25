#pragma once
#include <string>
#include <iostream>

class Actor
{

	std::string name;
	int age;
	std::string films;

public:

	Actor(std::string n, int a, std::string f) : name(n), age(a), films(f) {}

	void printInfo();

};

