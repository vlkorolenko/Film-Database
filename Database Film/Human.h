#pragma once
#include <iostream>
#include <string>
//filesystem

using namespace std;

class Human
{

protected:

	string name;
	int age;

public:
	Human() : name(""), age(0) {}
	Human(std::string n) : name(n), age(0) {}
	Human(std::string n, int a) : name(n), age(a) {}

	Human(const Human& other);				// Copy constructor
	Human(Human&& other) noexcept;			// Move constructor
	Human& operator = (const Human& other);	// Operator =
	~Human();

	void SetName(string name);
	void SetAge(int age);
	void PrintHumanInfo();

	virtual void introduce() const = 0;
};