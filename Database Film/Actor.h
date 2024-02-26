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

	//Actor(const Actor& other) : name(other.name), age(other.age), films("") {} // Копіюємо лише ім'я та вік, але не фільм

	std::string GetName();

	void printInfo();

};

