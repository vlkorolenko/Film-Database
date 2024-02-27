#include "Review.h"

void Review::printReview()
{
	std::cout << "Film: " << film << "\nUser: " << user << "\nRate: " << rate << "\nDate: " << date << std::endl;
	std::cout << "-------------" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Review& review)
{
	os << "Film: " << review.film << "\nUser: " << review.user << "\nRate: " << review.rate << "\nDate: " << review.date << std::endl;
	return os;
}
