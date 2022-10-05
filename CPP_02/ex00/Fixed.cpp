#include "Fixed.hpp"

Fixed :: Fixed(void) : fixed_point(0)
{
	std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: ~Fixed(void)
{
	std :: cout << "Destructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed	&others)
{
	std :: cout << "Copy constructor called" << std :: endl;
	*this = others;
}

Fixed	&Fixed :: operator=(const Fixed	&other)
{
	std :: cout << "Assignation operator called" << std :: endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return *this;
}

int	Fixed :: getRawBits(void) const
{
	std :: cout << "getRawBits member function called" << std :: endl;
	return fixed_point;
}

void	Fixed :: setRawBits(int const	_intToConvert)
{
	std :: cout << "setRawBits member function called" << std :: endl;
	Fixed :: fixed_point = _intToConvert;
}