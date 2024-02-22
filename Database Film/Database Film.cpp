#include <iostream>
#include <string>
#include <vector>
#include "Film.h"
#include "Review.h"

using namespace std;

int main()
{

    // Інформація про фільм

    Film firstFilm("Oppenheimer", 2023, "Biographical thriller film", "C. Nolan");
    Film secondFilm("Interstellar", 2014, "Science fiction film", "C. Nolan");
    Film thirdFilm("Harry Potter", 2001, "Fantasy", "C. Columbus");

    Review firstReview("Oppenheimer", "vlkorolenko", 4.5, "20.02.2024");
    Review secondReview("Interstellar", "abcd", 5.0, "13.09.2016");
    Review thirdReview("Harry Potter", "potter124", 4.1, "02.10.2012");


}