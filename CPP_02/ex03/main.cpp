#include "Point.hpp"

int main(void) {
	Point	C(0, 0), B(0, 10), A(15, 25);
	const	Point	point1(0, 1), point2(-1, -1),  point3(7, 12), point4(7, 30);

	A.announce_self();
	B.announce_self();
	C.announce_self();
	point1.announce_self();
	bsp(A, B, C, point1) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	point2.announce_self();
	bsp(A, B, C, point2) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	point3.announce_self();
	bsp(A, B, C, point3) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	point4.announce_self();
	bsp(A, B, C, point4) ? std :: cout << "inside\n" : std :: cout << "outside\n";
	return 0;
}