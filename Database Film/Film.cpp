#include "Film.h"

int Film::totalFilms = 0;

std::string Film::GetName() { return name; }

int Film::getTotalFilms() { return totalFilms; }

void Film::addActor(Actor actor) { actors.push_back(actor); }

void Film::printInfo()
{

	//std::cout << "Title: " << name << "\nYear: " << year << "\nDirector: " << director << "\nGenre: " << genre << "\nActors: " << actor << std::endl;
	std::cout << "Title: " << name << "\nYear: " << year << "\nDirector: " << director << "\nGenre: " << genre << std::endl;
	std::cout << "\nActors: \n" << std::endl;
	for (Actor actor : actors)
	{
		actor.printInfo();
		std::cout << "\n";
	}
	std::cout << "-------------" << std::endl;

}

//int Film::totalFilms = 0;
