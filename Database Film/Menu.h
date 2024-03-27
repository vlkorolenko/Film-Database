#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>
#include "Film.h"
#include "baseFilms.h"
#include "Review.h"

class baseFilms;
class Menu
{
private:
	baseFilms& baseFilm;
	string username;
	void addFilm();
	void addReview();

public:
	Menu(baseFilms& baseFilm, const string& user) : baseFilm(baseFilm), username(user) {}
	void addFilmToFile(const Film& film);
	void displayFilmList();
	void deleteFilm();

	void addReviewToFile(const Review& review);
	void displayReviewList();

	void displayLogList();

	void logAction(const std::string& action, const std::string& username);

	int open();
	int userMenu();

	string getCurrentDate();
};