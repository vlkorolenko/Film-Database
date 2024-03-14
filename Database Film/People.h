#pragma once
#include <iostream>
#include <string>

using namespace std;

class People
{

protected:

	string name;
	int age;

public:
	People() : name(""), age(0) {}
	People(std::string n) : name(n), age(0) {}
	People(std::string n, int a) : name(n), age(a) {}

	People(const People& other);				// Copy constructor
	People(People&& other) noexcept;			// Move constructor
	People& operator = (const People& other);	// Operator =
	~People();
	void SetName(string name);
	void SetAge(int age);
	void PrintPeopleInfo();

};