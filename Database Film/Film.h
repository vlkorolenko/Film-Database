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

    // ������������ ������������ � ������������� ����������� ������������

    Film(string n) : Film(n, 0, "", "") {}
    Film(string n, int y) : Film(n, y, "", "") {}
    Film(string n, int y, string g) : Film(n, y, g, "") {}
    Film(string n, int y, string g, string d) : name(n), year(y), genre(g), director(d) {}

    ~Film() {}

    void printInfo();

};