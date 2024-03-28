#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Film.h"
#include "Review.h"
#include "baseFilms.h"
#include "Actor.h"
#include "Menu.h"
#include "UserManager.h"

void doSpeak(const Human& human)
{
    human.speak();
}

int main()
{  
    //// Інформація про акторів
    //Actor Murphy("K. Murphy", 47, firstFilm.GetTitle());
    //Actor McConaughey("M. McConaughey", 54, secondFilm.GetTitle());
    //Actor Robert("R. John Downey Jr.", 58, firstFilm.GetTitle());
    //Actor Jessica("J. Michelle Chastain", 46, secondFilm.GetTitle());
    //Actor Worthington("S. Worthington", 47, thirdFilm.GetTitle());
    //Actor Saldana("Z. Saldana", 45, thirdFilm.GetTitle());
    //Human* Zendaya = new Actor("Zendaya Maree Stoermer Coleman", 27);

    UserManager userManager;
    std::string username, password;
    Menu menu(username, userManager);
    menu.processLoginChoice();

 /*   Приклад роботи перевантаження бінарного оператора '=='
    if (firstFilm == 2023)          
    {
        cout << "\n[Found a film released in 2023] \n";
        firstFilm.printFilmInfo();
    }*/

    //cout << "\nfilms in base: " << Film::getTotalFilms() << endl << endl;   // Приклад роботи із 'static' полем
}