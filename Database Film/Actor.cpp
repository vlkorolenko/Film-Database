#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// ������� ��� ��������� ���������� ��� ������
void Actor::printActorInfo()
{
	People::PrintPeopleInfo();
	std::cout << "Name: " << this->name << "\nAge: " << this->age << std::endl;
}
