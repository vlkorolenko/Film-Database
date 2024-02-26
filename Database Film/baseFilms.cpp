#include "baseFilms.h"

void baseFilms::addActor(Actor actor) { actors.push_back(actor); }

void baseFilms::addFilmInfo(Film film, Review review)
{

    films.push_back(film);
    reviews.push_back(review);

}

void baseFilms::printAllInfo()
{

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