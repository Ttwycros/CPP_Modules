#include "Point.hpp"

static Fixed	sign(Point const *point, Point const *one, Point const *two)
{
	return ((one->getX() - point->getX()) * (two->getY() - one->getY())) - ((two->getX() - one->getX()) * (one->getY() - point->getY()));
}

bool	bsp(Point const A, Point const B, Point const C, Point const point)
{
	/*Check for each pair of vertices (for example, A and B),
	whether the third vertex (for example, C)
	and the test point (point)
	lie on the same side of the line
	passing through this pair of vertices (for example, A and B).*/

	Fixed sign_1, sign_2, sign_3;
	bool	negative, positive;

	sign_1 = sign(&point, &A, &B);
	sign_2 = sign(&point, &B, &C);
	sign_3 = sign(&point, &C, &A);
	/*If they are of the same sign,
	then the point is inside the triangle,
	if one of these is zero,
	then the point lies on the side,
	otherwise the point is outside the triangle.*/
	negative = sign_1 < 0 || sign_2 < 0 || sign_3 < 0;
	positive = sign_1 > 0 || sign_2 > 0 || sign_3 > 0;
	return !(negative & positive);
}