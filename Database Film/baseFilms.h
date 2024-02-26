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

    void addActor(Actor actor);

    void addFilmInfo(Film film, Review review); // ����� ��������� �-��� �� ���� �����

    void printAllInfo();    // ����� ��������� �-��� ��� ������ �� ������

};