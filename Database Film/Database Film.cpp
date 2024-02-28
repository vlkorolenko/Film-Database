#include <iostream>
#include <string>
#include <vector>
#include "Film.h"
#include "Review.h"
#include "baseFilms.h"
#include "Actor.h"

using namespace std;

int main()
{

    // Інформація про фільм
    Film firstFilm("Oppenheimer", 2023, "Biographical thriller film", "C. Nolan", 17873921);
    Film secondFilm("Interstellar", 2014, "Science fiction film", "C. Nolan", 1674386490);
    Film thirdFilm("Avatar", 2009, "Epic science fiction film", "J. Cameron", 1478902);

    // Інформація про акторів
    Actor Murphy("K. Murphy", 47, firstFilm.GetName());
    Actor McConaughey("M. McConaughey", 54, secondFilm.GetName());
    Actor Robert("R. John Downey Jr.", 58, firstFilm.GetName());
    Actor Jessica("J. Michelle Chastain", 46, secondFilm.GetName());
    Actor Worthington("S. Worthington", 47, thirdFilm.GetName());
    Actor Saldana("Z. Saldana", 45, thirdFilm.GetName());

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

    baseFilms baseFilms;    // Оголошення бази данних

    // Внесення і-ції про фільм, відгуки та акторів до БД
    baseFilms.addFilmInfo(firstFilm, FIRST_REVIEW);
    baseFilms.addFilmInfo(secondFilm, SECOND_REVIEW);
    baseFilms.addFilmInfo(thirdFilm, THIRD_REVIEW);

    baseFilms.addActor(Murphy);
    baseFilms.addActor(Robert);
    baseFilms.addActor(McConaughey);
    baseFilms.addActor(Jessica);

    baseFilms.printAllInfo();

    /*// Перевантаження дружнього оператору stream exctraction (<<)
    cout << firstFilm;
    cout << "------------\n\n";
    cout << secondFilm;
    cout << "------------\n\n";
    cout << thirdFilm;
    cout << "************\n\n";

    cout << "Actors in database: \n\n";
    cout << Murphy << endl << endl;
    cout << McConaughey << endl << endl;
    cout << Robert << endl << endl;

    cout << "************\n\n";
    cout << FIRST_REVIEW;
    cout << "------------\n";
    cout << SECOND_REVIEW;
    cout << "------------\n";
    cout << THIRD_REVIEW;
    cout << "\n************\n\n";*/

    // Приклад роботи перевантаження унарного оператора '++'
    ++firstFilm;                    
    cout << endl;
    firstFilm.printInfo();

    // Приклад роботи перевантаження бінарного оператора '=='
    if (firstFilm == 2023)          
    {
        cout << "\n[Found a film released in 2023] \n";
        firstFilm.printInfo();
    }

    // Перевантаження дружнього оператору stream insertion (>>)
    Film newFilm("", 0, "", "", 0);
    cout << "[Enter new film info]" <<endl<<endl;
    cin >> newFilm;

    Actor newActor("", 0, newFilm.GetName());
    cout << "\n[Add actor to this film]" << endl << endl;
    cin >> newActor;

    newFilm.addActor(newActor);
    cout << "\n************\n\n";
    cout << "New film info: \n" << endl;
    cout << newFilm;

    cout << "\nfilms in base: " << Film::getTotalFilms() << endl << endl;   // Приклад роботи із 'static' полем
}