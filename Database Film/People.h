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

	People(string n) : People(n, 0) {}
	People(string n, int a) : name(n), age(a) {}
	People(const People& other);//copy
	People(People&& other) noexcept;//move
	People& operator = (const People& other);//operator =
	~People();
	void SetName(string name);
	void SetAge(int age);
	void PrintPeopleInfo();

};