#include "Actor.h"
#include <iostream>

std::string Actor::GetName() { return name; }

// ������� ��� ��������� ���������� ��� ������
void Actor::printInfo()
{
	std::cout << "Name: " << this->name << "\nAge: " << this->age << std::endl;
}

// �������������� ��������� ��������� stream extraction (<<)
std::ostream& operator<<(std::ostream& os, const Actor& actor)
{
	os << "Actor: " << actor.name << "\nAge: " << actor.age;
	return os;
}

// �������������� ��������� ��������� stream insertion (>>)
std::istream& operator>>(std::istream& is, Actor& actor)
{
	std::cout << "Enter name: ";
	is >> actor.name;
	std::cout << "Enter age: ";
	is >> actor.age;
	return is;
}