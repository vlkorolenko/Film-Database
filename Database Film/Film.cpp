#include "Film.h"

string Film::GetName() { return name; }

void Film::printInfo()
{

	cout << "Title: " << name << "\nYear: " << year << "\nDirector: " << director << "\nGenre: " << genre << endl;
	cout << "-------------" << endl;

}
