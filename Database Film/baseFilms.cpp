#include "baseFilms.h"

void baseFilms::addFilmInfo(Film film, Review review, Actor actor)
{
    films.push_back(film);
    reviews.push_back(review);
    actors.push_back(actor);
}

void baseFilms::printAllInfo()
{

    cout << "\nFilms: " << endl << endl;

    for (Film film : films)
    {
        film.printInfo();
    }

    cout << "\nActors: " << endl << endl;

    for (Actor actor : actors)
    {
        actor.printInfo();
    }

    cout << "\nReviews: " << endl << endl;

    for (Review review : reviews)
    {
        review.printReview();
    }
}