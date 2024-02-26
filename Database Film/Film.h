#pragma once
#include "Actor.h"
#include <iostream>
#include <string>
#include <vector>

class Film
{

    int year;
    int views;
    static int totalFilms;
    std::string name;
    std::string  director;
    std::string genre;
    std::vector<Actor> actors;

public:

    // Перевантажені конструктори з використанням делегування конструкторів
    Film(std::string n) : Film(n, 0, "", "", 0) { totalFilms++; }
    Film(std::string n, int y) : Film(n, y, "", "", 0) { totalFilms++; }
    Film(std::string n, int y, std::string g) : Film(n, y, g, "", 0) { totalFilms++; }
    Film(std::string n, int y, std::string g, std::string d) : Film(n, y, g, d, 0) { totalFilms++; }
    Film(std::string n, int y, std::string g, std::string d, int v) : name(n), year(y), genre(g), director(d), views(v) { totalFilms++; }

    static int getTotalFilms();

    void addActor(Actor actor);

    Film& operator++(); // Перевантаження унарного оператору для збільшення кількості переглядів фільму

    void printInfo();

    std::string GetName();

};