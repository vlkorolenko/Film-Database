#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// ������� ��� ��������� ���������� ��� ������
void Actor::printActorInfo()
{
	Human::PrintHumanInfo();
	cout << "Films: " << films << endl;
}

void Actor::introduce() const
{
	std::cout << "Hello! My name is " << name;
}
