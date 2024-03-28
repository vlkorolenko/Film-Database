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
#include "UserManager.h"
#include "Actor.h"

//class baseFilms;
class Menu
{
private:
	//baseFilms& baseFilm;
	string username;
	void addFilm(string username);
	void addReview(string username);
	void addActor(string username);
	UserManager& userManager;
	void registerUser();
	void loginUser();

public:
	Menu(const string& user, UserManager& userManager) : username(user), userManager(userManager) {}
	void addFilmToFile(const Film& film);
	void displayFilmList();
	void deleteFilm();

	void addReviewToFile(const Review& review);
	void displayReviewList();

	void addActorToFile(const Actor& actor);
	void displayActorList();
	void deleteActor();

	void displayLogList();

	void logAction(const std::string& action, const std::string& username);

	int open(string username);
	int userMenu(string username);

	string getCurrentDate();

	void displayLoginMenu();
	void processLoginChoice();

};