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

    baseFilms() {}  // ����������� �� �������������
    ~baseFilms() {} // ����������

    void addFilmInfo(Film film, Review review); // ����� ��������� �-��� �� ���� �����

    void printAllInfo();    // ����� ��������� �-��� ��� ������ �� ������

};