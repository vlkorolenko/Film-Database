#include "baseFilms.h"

// Функція для додавання інформації про актора у базу даних
void baseFilms::addActor(Actor actor) { actors.push_back(actor); }

// Функція для додавання інформації про фільм у базу даних
void baseFilms::addFilmInfo(Film film, Review review)
{
    films.push_back(film);
    reviews.push_back(review);
}

// Функція для виведення усієї інформації про фільм з бази даних
void baseFilms::printAllInfo()
{
    for (Film film : films)
    {
        film.printFilmInfo();
    }

    cout << "\nActors: " << endl << endl;

    for (Actor actor : actors)
    {
        actor.printActorInfo();
    }

    cout << "\nReviews: " << endl << endl;

    for (Review review : reviews)
    {
        review.printReview();
    }
}