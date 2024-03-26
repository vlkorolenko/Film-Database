#include <iostream>
#include <string>
#include <vector>
#include "Film.h"
#include "Review.h"
#include "baseFilms.h"
#include "Actor.h"
#include "Menu.h"
using namespace std;

void doSpeak(const Human& human)
{
    human.speak();
}

int main()
{  
    baseFilms baseFilms;

    //** Інформація про фільм
    Film firstFilm("Oppenheimer", 2023, "Biographical thriller film", "C. Nolan", 17873921);
    Film secondFilm("Interstellar", 2014, "Science fiction film", "C. Nolan", 1674386490);
    Film thirdFilm("Avatar", 2009, "Epic science fiction film", "J. Cameron", 1478902);
    
    // Інформація про акторів
    Actor Murphy("K. Murphy", 47, firstFilm.GetTitle());
    Actor McConaughey("M. McConaughey", 54, secondFilm.GetTitle());
    Actor Robert("R. John Downey Jr.", 58, firstFilm.GetTitle());
    Actor Jessica("J. Michelle Chastain", 46, secondFilm.GetTitle());
    Actor Worthington("S. Worthington", 47, thirdFilm.GetTitle());
    Actor Saldana("Z. Saldana", 45, thirdFilm.GetTitle());
    Human* Zendaya = new Actor("Zendaya Maree Stoermer Coleman", 27);

    firstFilm.addActor(Murphy);
    firstFilm.addActor(Robert);
    secondFilm.addActor(McConaughey);
    secondFilm.addActor(Jessica);
    thirdFilm.addActor(Worthington);
    thirdFilm.addActor(Saldana);

    // Інформація про відгуки 
    const Review FIRST_REVIEW("Oppenheimer", "vlkorolenko", 4.5, "20.02.2024");
    const Review SECOND_REVIEW("Interstellar", "vladb123", 4.9, "13.09.2016");
    const Review THIRD_REVIEW("Avatar", "absd", 3.1, "07.11.2010");

    //baseFilms baseFilms;    // Оголошення бази данних

    // Внесення і-ції про фільм, відгуки та акторів до БД
    baseFilms.addFilmInfo(firstFilm, FIRST_REVIEW);
    baseFilms.addFilmInfo(secondFilm, SECOND_REVIEW);
    baseFilms.addFilmInfo(thirdFilm, THIRD_REVIEW);
    baseFilms.addActor(Murphy);
    baseFilms.addActor(Robert);
    baseFilms.addActor(McConaughey);
    baseFilms.addActor(Jessica);

    Menu menu;
    bool menuIsOpen = true;
    while (menuIsOpen)
    {
        switch (menu.open())
        {
        case 1:
            baseFilms.printAllFilmsInfo();
            break;
        case 2:
            cout << "soon\n";
            break;
        case 3:
            cout << "soon\n";
            break;
        case 4:
            baseFilms.printAllReviewsInfo();
            break;
        case 5:
            baseFilms.printAllActorsInfo();
            break;
        }
        cout << "\n1. Back to menu";
        cout << "\n2. Exit\n";
        cout << "Choose option: ";
        int variant;
        cin >> variant;
        if (variant == 2) return 0;
    }
    //baseFilms.printAllInfo(); !!!

    // Приклад роботи перевантаження унарного оператора '++'
    /*++firstFilm;                    
    cout << endl;*/
    //firstFilm.printFilmInfo(); !!!

    // Приклад роботи перевантаження бінарного оператора '=='
    /*if (firstFilm == 2023)          
    {
        cout << "\n[Found a film released in 2023] \n";
        firstFilm.printFilmInfo();
    }*/

    //cout << "\nfilms in base: " << Film::getTotalFilms() << endl << endl;   // Приклад роботи із 'static' полем

    ////Robert.getProfession();
    //Zendaya->introduce();
    //Zendaya->getProfession();

    //delete Zendaya;

    //Human Kovalchuk("Anton Kovalchuk", 17);
    //Actor Korolenko("V. Korolenko", 18);
    //Human& Holubchuk = Korolenko;
    //Kovalchuk.speak();
    //doSpeak(Holubchuk);
    //doSpeak(Korolenko);
    //
    //firstFilm.play();
    //firstFilm.stop();

}