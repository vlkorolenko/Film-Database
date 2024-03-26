#include "Menu.h"

int Menu::open()
{
	std::cout << "\n*MENU*\n";
	std::cout << "1. Movie list\n";
	std::cout << "2. Add movie\n";
	std::cout << "3. Remove movie\n";
	std::cout << "4. Reviews\n";
	std::cout << "5. Actors\n";
	std::cout << "Choose option: ";
	int option;
	std::cin >> option;
	while (option < 1 || option > 5)
	{
		std::cout << "Incorrect option. \nTry again: ";
		std::cin >> option;
	}

	return option;
}
