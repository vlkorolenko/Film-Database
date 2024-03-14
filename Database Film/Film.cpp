#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetTitle() { return title; }

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