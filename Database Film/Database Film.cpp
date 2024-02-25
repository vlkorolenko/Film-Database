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

    // Інформація про відгуки 

    Review firstReview("Oppenheimer", "vlkorolenko", 4.5, "20.02.2024");
    Review secondReview("Interstellar", "abcd", 5.2, "13.09.2016");

    Actor Murphy("K. Murphy", 47, firstFilm.GetName());
    Actor McConaughey("M. McConaughey", 54, secondFilm.GetName());

    baseFilms baseFilms;    // Оголошення бази данних

    // Внесення і-ції про фільм та відгуки до БД

    baseFilms.addFilmInfo(firstFilm, firstReview, Murphy);
    baseFilms.addFilmInfo(secondFilm, secondReview, McConaughey);

    baseFilms.printAllInfo();   // Виведення і-ції з бази даних



}