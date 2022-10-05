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

Fixed :: Fixed(const int	integer)
{
	std :: cout << "Int constructor called" << std :: endl;
	Fixed :: fixed_point = integer << raw;
	//bit shifting
}

Fixed :: Fixed(const float	floating)
{
	std :: cout << "Float constructor called" << std :: endl;
	Fixed :: fixed_point = roundf(floating * std :: pow(2, raw));
	//Calculate fixed_x = floating_input * 2^(fractional_bits)
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
	return fixed_point;
}

void	Fixed :: setRawBits(int const	_intToConvert)
{
	Fixed :: fixed_point = _intToConvert;
}

int	Fixed :: toInt(void) const
{
	return fixed_point >> raw;
	//bit shifting loosing precision
}

float	Fixed :: toFloat(void) const
{
	return (float) fixed_point / std :: pow(2, raw);
}

std :: ostream	&operator<<(std :: ostream &stream, const Fixed	&other)
{
	return stream << other.toFloat();
}