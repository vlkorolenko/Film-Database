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
    Actor Murphy("K. Murphy", 47, firstFilm.GetTitle());
    Actor McConaughey("M. McConaughey", 54, secondFilm.GetTitle());
    Actor Robert("R. John Downey Jr.", 58, firstFilm.GetTitle());
    Actor Jessica("J. Michelle Chastain", 46, secondFilm.GetTitle());
    Actor Worthington("S. Worthington", 47, thirdFilm.GetTitle());
    Actor Saldana("Z. Saldana", 45, thirdFilm.GetTitle());

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

    // Приклад роботи перевантаження унарного оператора '++'
    ++firstFilm;                    
    cout << endl;
    firstFilm.printFilmInfo();

    // Приклад роботи перевантаження бінарного оператора '=='
    if (firstFilm == 2023)          
    {
        cout << "\n[Found a film released in 2023] \n";
        firstFilm.printFilmInfo();
    }

    cout << "\nfilms in base: " << Film::getTotalFilms() << endl << endl;   // Приклад роботи із 'static' полем

}