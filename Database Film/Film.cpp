#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetTitle() { return title; }

void Film::printInfo() const
{
	std::cout << "Title: " << title << ", Year: " << year << ", Genre: " << genre << ", Director: " << director << ", Views: " << views << std::endl;
}

// Виведення інформації про кількість фільмів у базі даних
int Film::getTotalFilms() { return totalFilms; }

// Функція для додавання актору до фільму
void Film::addActor(Actor actor) { actors.push_back(actor); }

// Перевантаження бінарого оператору
Film& Film::operator++()
{
	++views;
	return *this;
}

// Перевантаження бінарного оператору 
bool Film::operator==(int otherYear) const { return this->year == otherYear; }



// Виведення інформації про фільм та акторів
void Film::printFilmInfo()
{

	std::cout << "Title: " << title << "\nYear: " << year << "\nGenre: " << genre << "\nDirector: " << director << "\nViews: " << views << std::endl;

}