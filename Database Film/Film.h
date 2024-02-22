#pragma once
#include <iostream>
#include <string>

using namespace std;

class Film
{

private:

    int year;
    string name;
    string  director;
    string genre;

public:

    // Перевантажені конструктори з використанням делегування конструкторів

    Film(string n) : name(n) {}
    Film(string n, int y) : name(n), year(y) {}
    Film(string n, int y, string g) : name(n), year(y), genre(g) {}
    Film(string n, int y, string g, string d) : name(n), year(y), genre(g), director(d) {}

    ~Film() {}

    void printInfo();

};