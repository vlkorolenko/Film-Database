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
    
    Film firstFilm("Oppenheimer", 2023, "Biographical thriller film", "C. Nolan");
    Film secondFilm("Interstellar", 2014, "Science fiction film", "C. Nolan");

    // Інформація про акторів

    Actor Murphy("K. Murphy", 47, firstFilm.GetName());
    Actor McConaughey("M. McConaughey", 54, secondFilm.GetName());
    Actor Robert("R. John Downey Jr.", 58, firstFilm.GetName());
    Actor Jessica("J. Michelle Chastain", 46, secondFilm.GetName());

    firstFilm.addActor(Murphy);
    firstFilm.addActor(Robert);
    secondFilm.addActor(McConaughey);
    secondFilm.addActor(Jessica);

    // Інформація про відгуки 

    const Review FIRST_REVIEW("Oppenheimer", "vlkorolenko", 4.5, "20.02.2024");
    const Review SECOND_REVIEW("Interstellar", "vladb123", 4.9, "13.09.2016");

    baseFilms baseFilms;    // Оголошення бази данних

    // Внесення і-ції про фільм, відгуки та акторів до БД

    baseFilms.addFilmInfo(firstFilm, FIRST_REVIEW);
    baseFilms.addFilmInfo(secondFilm, SECOND_REVIEW);

    baseFilms.addActor(Murphy);
    baseFilms.addActor(Robert);
    baseFilms.addActor(McConaughey);
    baseFilms.addActor(Jessica);

    baseFilms.printAllInfo();   // Виведення і-ції з бази даних

}