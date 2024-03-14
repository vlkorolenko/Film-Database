#pragma once
#include "Actor.h"
#include "Review.h"
#include <iostream>
#include <string>
#include <vector>

class Film
{
    int year;
    int views;
    static int totalFilms;
    std::string title;
    std::string  director;
    std::string genre;
    std::vector<Actor> actors;

public:

    // Перевантажені конструктори з використанням делегування конструкторів
    Film(std::string t) : Film(t, 0, "", "", 0) { totalFilms++; }
    Film(std::string t, int y) : Film(t, y, "", "", 0) { totalFilms++; }
    Film(std::string t, int y, std::string g) : Film(t, y, g, "", 0) { totalFilms++; }
    Film(std::string t, int y, std::string g, std::string d) : Film(t, y, g, d, 0) { totalFilms++; }
    Film(std::string t, int y, std::string g, std::string d, int v) : title(t), year(y), genre(g), director(d), views(v) { totalFilms++; }

    // Конструктор копіювання
    Film(const Film& other)
    {
        this->title = other.title;
        this->year = other.year;
        this->genre = other.genre;
        this->director = other.director;
        this->views = other.views;
        this->actors = other.actors;
    }

    static int getTotalFilms();

    void addActor(Actor actor);

    Film& operator++();                     // Перевантаження унарного оператору для збільшення кількості переглядів фільму
    bool operator==(int otherYear) const;   // Перевантаження бінарного оператору для порівняння фільмів по року випуску

    void printInfo();

    std::string GetTitle();

};