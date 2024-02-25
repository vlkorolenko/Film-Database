#pragma once
#include <iostream>
#include <vector>
#include "Film.h"
#include "Review.h"
#include "Actor.h"

using namespace std;

class baseFilms
{

    vector<Film> films;
    vector<Review> reviews;
    vector<Actor> actors;

public:

    void addFilmInfo(Film film, Review review, Actor actor); // Метод додавання і-ції до бази даних

    void printAllInfo();    // Метод виведення і-ції про фільми та відгуки

};