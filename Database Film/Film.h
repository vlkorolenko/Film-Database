#pragma once
#include "Actor.h"
#include <iostream>
#include <string>
#include <vector>

class Film
{

    int year;
    std::string name;
    std::string  director;
    std::string genre;
    std::vector<Actor> actors;
    static int totalFilms;

public:

    // Перевантажені конструктори з використанням делегування конструкторів

    Film(std::string n) : Film(n, 0, "", "") { totalFilms++; }
    Film(std::string n, int y) : Film(n, y, "", "") { totalFilms++; }
    Film(std::string n, int y, std::string g) : Film(n, y, g, "") { totalFilms++; }
    Film(std::string n, int y, std::string g, std::string d) : name(n), year(y), genre(g), director(d) { totalFilms++; }

    static int getTotalFilms();

    void addActor(Actor actor);

    void printInfo();

    std::string GetName();

};