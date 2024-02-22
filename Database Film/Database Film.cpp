#include <iostream>
#include <string>
#include <vector>
#include "Film.h"
#include "Review.h"
#include "baseFilms.h"

using namespace std;

int main()
{

    // Інформація про фільм

    Film firstFilm("Oppenheimer", 2023, "Biographical thriller film", "C. Nolan");
    Film secondFilm("Interstellar", 2014, "Science fiction film", "C. Nolan");
    Film thirdFilm("Harry Potter", 2001, "Fantasy", "C. Columbus");

    // Інформація про відгуки 

    Review firstReview("Oppenheimer", "vlkorolenko", 4.5, "20.02.2024");
    Review secondReview("Interstellar", "abcd", 5.0, "13.09.2016");
    Review thirdReview("Harry Potter", "potter124", 4.1, "02.10.2012");

    baseFilms baseFilms;    // Оголошення бази данних

    // Внесення і-ції про фільм та відгуки до БД

    baseFilms.addFilmInfo(firstFilm, firstReview);
    baseFilms.addFilmInfo(secondFilm, secondReview);
    baseFilms.addFilmInfo(thirdFilm, thirdReview);

    baseFilms.printAllInfo();

}