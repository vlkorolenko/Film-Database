#include "Actor.h"
#include <iostream>

std::string Actor::GetActorName() { return name; }

// ������� ��� ��������� ���������� ��� ������
void Actor::printActorInfo()
{
	People::PrintPeopleInfo();
	cout << "Films: " << films << endl;
}
