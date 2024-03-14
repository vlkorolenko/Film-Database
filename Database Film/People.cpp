#pragma once
#include <iostream>
#include "people.h"
using namespace std;

// Copy constructor
People::People(const People& other) 
{
	name = other.name;
	age = other.age;
}

// Operator =
People& People::operator=(const People& other)
{
	if (this != &other) {
		name = other.name;
		age = other.age;
	}
	return *this;
}

// Move constructor
People::People(People&& other)noexcept : name(move(other.name)), age(move(other.age))
{
	other.name = nullptr;
	other.age = NULL;
}

People::~People() {}

void People::SetName(string newname)
{
	this->name = newname;
}

void People::SetAge(int newage)
{
	this->age = newage;
}

void People::PrintPeopleInfo() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}