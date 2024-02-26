﻿#include <iostream>
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

    baseFilms.printAllInfo();   // Виведення і-ції з бази даних

    cout << "\n\nfilms in base: " << Film::getTotalFilms() << endl;

    // Приклад роботи перевантаження унарного оператора '++'

    ++firstFilm;
    cout << endl;
    firstFilm.printInfo();

    if (firstFilm == 2023)
    {
        cout << "\nFound a film released in 2023: \n\n";
        firstFilm.printInfo();
    }


}