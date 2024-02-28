#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetName() { return name; }

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

	std::cout << "\nTitle: " << name << "\nYear: " << year << "\nDirector: " << director << "\nGenre: " << genre << "\nViews: " << views << std::endl;
	std::cout << "\nActors: \n" << std::endl;
	for (Actor actor : actors)
	{
		actor.printInfo();
		std::cout << "\n";
	}
	std::cout << "-------------" << std::endl;

}

// �������������� ��������� ��������� stream extraction (<<)
std::ostream& operator<<(std::ostream& os, const Film& film)
{
	os << "Title: " << film.name << "\nYear: " << film.year << "\nGenre: " << film.genre << "\nDirector: " << film.director << "\nViews: " << film.views;
	std::cout << "\n\nActors: \n" << std::endl;
	for (const auto& actor : film.actors)
	{
		os << actor << std::endl;
		std::cout << std::endl;
	}
	return os;
}

// �������������� ��������� ��������� stream insertion (>>)
std::istream& operator>>(std::istream& is, Film& film)
{
	std::cout << "Enter title: ";
	is >> film.name;
	std::cout << "Enter year: ";
	is >> film.year;
	std::cout << "Enter genre: ";
	is >> film.genre;
	std::cout << "Enter director: ";
	is >> film.director;
	std::cout << "Enter views: ";
	is >> film.views;
	return is;
}