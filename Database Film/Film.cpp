#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetTitle() { return title; }

void Film::printInfo() const
{
	std::cout << "Title: " << title << ", Year: " << year << ", Genre: " << genre << ", Director: " << director << ", Views: " << views << std::endl;
}

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
void Film::printFilmInfo()
{

	std::cout << "Title: " << title << "\nYear: " << year << "\nGenre: " << genre << "\nDirector: " << director << "\nViews: " << views << std::endl;

}