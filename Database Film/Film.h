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

public:

    // Перевантажені конструктори з використанням делегування конструкторів

    Film(std::string n) : Film(n, 0, "", "") {}
    Film(std::string n, int y) : Film(n, y, "", "") {}
    Film(std::string n, int y, std::string g) : Film(n, y, g, "") {}
    Film(std::string n, int y, std::string g, std::string d) : name(n), year(y), genre(g), director(d) {}

    void addActor(Actor actor);

    void printInfo();

    std::string GetName();

};