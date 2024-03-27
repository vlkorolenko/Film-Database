#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Review
{


public:

    std::string film;
    std::string user;
    std::string date;
    double rate;

    void printReview();

    friend std::ostream& operator<<(std::ostream& os, Review& review);

    friend std::istream& operator>>(std::istream& is, Review& review);

};