#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Film.h"
#include "baseFilms.h"
class baseFilms;
class Menu
{
private:
	baseFilms& baseFilm;
	void addFilm();
public:
	Menu(baseFilms& baseFilm) : baseFilm(baseFilm) {}
	void addFilmToFile(const Film& film);
	void displayFilmList();
	int open();
	int userMenu();
	void deleteFilm();
};