#include "Point.hpp"

Point :: Point(void) : x(0), y(0) {}
Point :: Point(const float _x, const float _y) : x(Fixed(_x)), y(Fixed(_y)) {}
Point :: ~Point(void) {}

Point :: Point(const Point	&other)
{
	*this = other;
}

Point	&Point :: operator=(const Point	&other)
{
	if (this != &other) {
		this->x = other.getX();
		this->y = other.getY();
	}
	return *this;
}

Fixed	Point :: getX(void) const
{
	return x;
}

Fixed	Point :: getY(void) const
{
	return y;
}

void Point :: announce_self(void) const
{
	std :: cout << "x =" << x << std :: endl;
	std :: cout << "y =" << y << std :: endl;
	std :: cout << std :: endl;
}