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

	std::string GetName();

	void printInfo();

	friend std::ostream& operator<<(std::ostream& os, const Actor& actor);

	friend std::istream& operator>>(std::istream& is, Actor& actor);
};