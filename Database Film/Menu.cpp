#include "Menu.h"

void Menu::open()
{
	
    bool menuIsOpen = true;
    while (menuIsOpen)
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
        switch (option)
        {
        case 1:
            baseFilm.printAllFilmsInfo();
            break;
        case 2:
            cout << "soon\n";
            break;
        case 3:
            cout << "soon\n";
            break;
        case 4:
            baseFilm.printAllReviewsInfo();
            break;
        case 5:
            baseFilm.printAllActorsInfo();
            break;
        }
        int variant = 0;
        do {
            cout << "\n1. Back to menu";
            cout << "\n2. Exit\n";
            cout << "Choose option: ";
            cin >> variant;
            while (variant < 1 || variant > 2)
            {
                std::cout << "Incorrect option. \nTry again: ";
                std::cin >> variant;
            }
            if (variant == 2)
            {
                cout << "Exiting...\n";
                menuIsOpen = false;
            }
            else
            {
                break;
            }
        } while (variant != 1);
        
    }


	
}
