#pragma once
#include <iostream>
#include <vector>
#include "Film.h"
#include "Review.h"

using namespace std;

class baseFilms
{

private:

    vector<Film> films;
    vector<Review> reviews;

public:

    baseFilms() {}  // Конструктор за замовчуванням
    ~baseFilms() {} // Деструктор

    void addFilmInfo(Film film, Review review); // Метод додавання і-ції до бази даних

    void printAllInfo();    // Метод виведення і-ції про фільми та відгуки

};