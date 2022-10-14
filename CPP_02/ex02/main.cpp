#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "empty a " << a << std::endl;
	std::cout << "precrem a " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "increm i " << a++ << std::endl;
	std::cout << "after increm i " << a << std::endl;
	a++;
	std::cout << "after increm i " << a << std::endl;
	++a;
	std::cout << "after precrem i " << a << std::endl;
	std::cout << "________"<< std::endl;
	std::cout << "empty b " << b << std::endl;
	std::cout << "min " << Fixed::max( a, b ) << std::endl;
	std::cout << "max " << Fixed::min( a, b ) << std::endl;
	return 0;
}