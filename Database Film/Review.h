#pragma once
#include <iostream>
#include <string>

class Review
{

    std::string film;
    std::string user;
    std::string date;
    double rate;

public:

    Review(std::string f, std::string u, double r, std::string d) : film(f), user(u), rate(r), date(d) {}

    void printReview();

    friend std::ostream& operator<<(std::ostream& os, const Review& review);

};