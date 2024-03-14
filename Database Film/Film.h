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

    // ������������ ������������ � ������������� ����������� ������������
    Film(std::string t) : Film(t, 0, "", "", 0) { totalFilms++; }
    Film(std::string t, int y) : Film(t, y, "", "", 0) { totalFilms++; }
    Film(std::string t, int y, std::string g) : Film(t, y, g, "", 0) { totalFilms++; }
    Film(std::string t, int y, std::string g, std::string d) : Film(t, y, g, d, 0) { totalFilms++; }
    Film(std::string t, int y, std::string g, std::string d, int v) : title(t), year(y), genre(g), director(d), views(v) { totalFilms++; }

    // ����������� ���������
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

    Film& operator++();                     // �������������� �������� ��������� ��� ��������� ������� ��������� ������
    bool operator==(int otherYear) const;   // �������������� �������� ��������� ��� ��������� ������ �� ���� �������

    void printInfo();

    std::string GetTitle();

};