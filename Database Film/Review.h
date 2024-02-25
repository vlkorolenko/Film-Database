#pragma once
#include <iostream>
#include <string>

using namespace std;

class Review
{

    string film;
    string user;
    string date;
    double rate;

public:

    Review(string f, string u, double r, string d) : film(f), user(u), rate(r), date(d) {}

    void printReview();

};