#include "Review.h"

// Функції для виведення інформації про відгук
void Review::printReview()
{
	std::cout << "Film: " << film << "\nUser: " << user << "\nRate: " << rate << "\nDate: " << date << std::endl;
	std::cout << "-------------" << std::endl;
}

// Перевантаження дружнього оператору stream extraction (<<)
std::ostream& operator<<(std::ostream& os, const Review& review)
{
	os << "Film: " << review.film << "\nUser: " << review.user << "\nRate: " << review.rate << "\nDate: " << review.date << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Review& review)
{
	is >> review.film >> review.user >> review.rate >> review.date;
	return is;
}
