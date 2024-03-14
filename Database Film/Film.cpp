#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetTitle() { return title; }

// ��������� ���������� ��� ������� ������ � ��� �����
int Film::getTotalFilms() { return totalFilms; }

// ������� ��� ��������� ������ �� ������
void Film::addActor(Actor actor) { actors.push_back(actor); }

// �������������� ������� ���������
Film& Film::operator++()
{
	++views;
	return *this;
}

// �������������� �������� ��������� 
bool Film::operator==(int otherYear) const { return this->year == otherYear; }

// ��������� ���������� ��� ����� �� ������
void Film::printInfo()
{

	std::cout << "\nTitle: " << title << "\nYear: " << year << "\nDirector: " << director << "\nGenre: " << genre << "\nViews: " << views << std::endl;
	std::cout << "\nActors: \n" << std::endl;
	for (Actor actor : actors)
	{
		actor.printActorInfo();
		std::cout << "\n";
	}
	std::cout << "-------------" << std::endl;

}