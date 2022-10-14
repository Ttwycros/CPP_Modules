#include "Point.hpp"

// static Fixed	sign(Point p1, Point p2, Point	p3) {
// 	Fixed	res((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p1.getY() - p3.getY()) * (p2.getX() - p3.getX()));
// 	return res;
// }

// static Fixed	sign(Point point, Point one, Point two)
// {
// 	return ((one.getX() - point.getX()) * (two.getY() - one.getY())) - ((two.getX() - one.getX()) * (one.getY() - point.getY()));
// }

static Fixed	sign(Point const *point, Point const *one, Point const *two)
{
	return ((one->getX() - point->getX()) * (two->getY() - one->getY())) - ((two->getX() - one->getX()) * (one->getY() - point->getY()));
}

bool	bsp(Point const A, Point const B, Point const C, Point const point)
{
	Fixed sign_1, sign_2, sign_3;
	bool	negative, positive;

	sign_1 = sign(&point, &A, &B);
	sign_2 = sign(&point, &B, &C);
	sign_3 = sign(&point, &C, &A);
	negative = sign_1 < 0 || sign_2 < 0 || sign_3 < 0;
	positive = sign_1 > 0 || sign_2 > 0 || sign_3 > 0;
	return !(negative & positive);
}