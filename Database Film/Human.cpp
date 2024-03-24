#pragma once
#include <iostream>
#include "human.h"
using namespace std;

// Copy constructor
Human::Human(const Human& other)
{
	name = other.name;
	age = other.age;
}

// Operator =
Human& Human::operator=(const Human& other)
{
	if (this != &other) {
		name = other.name;
		age = other.age;
	}
	return *this;
}

// Move constructor
Human::Human(Human&& other)noexcept : name(move(other.name)), age(move(other.age))
{
	other.name = nullptr;
	other.age = NULL;
}

Human::~Human() {}

void Human::SetName(string newname)
{
	this->name = newname;
}

void Human::SetAge(int newage)
{
	this->age = newage;
}

void Human::PrintHumanInfo() {
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
}

void Human::introduce() const
{
	cout << "Hello!\n";
}

void Human::getProfession() const
{
	cout << "I dont have prof.\n";
}

void Human::speak() const
{
	cout << "I am a human\n";
}
