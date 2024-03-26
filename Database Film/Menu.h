#pragma once
#include <iostream>
#include "Film.h"
#include "baseFilms.h"
class baseFilms;
class Menu
{
private:
	baseFilms& baseFilm;
public:
	Menu(baseFilms& baseFilm) : baseFilm(baseFilm) {}
	int open();
};

