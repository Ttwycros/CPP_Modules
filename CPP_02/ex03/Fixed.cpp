#include "Fixed.hpp"

Fixed :: Fixed(void) : fixed_point(0)
{
	// std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: ~Fixed(void)
{
	// std :: cout << "Destructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed	&others)
{
	// std :: cout << "Copy constructor called" << std :: endl;
	*this = others;
}

Fixed :: Fixed(const int	integer)
{
	// std :: cout << "Int constructor called" << std :: endl;
	Fixed :: fixed_point = integer << raw;
	//bit shifting
}

Fixed :: Fixed(const float	floating)
{
	// std :: cout << "Float constructor called" << std :: endl;
	Fixed :: fixed_point = roundf(floating * std :: pow(2, raw));
	//Calculate fixed_x = floating_input * 2^(fractional_bits)
}

Fixed	&Fixed :: operator=(const Fixed	&other)
{
	// std :: cout << "Assignation operator called" << std :: endl;
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
	//overloading out operator
	return stream << other.toFloat();
}

bool Fixed :: operator>(const Fixed	&other) const
{
	return fixed_point > other.getRawBits();
}

bool Fixed :: operator<(const Fixed	&other) const
{
	return fixed_point < other.getRawBits();
}

bool Fixed :: operator>=(const Fixed	&other) const
{
	return fixed_point >= other.getRawBits();
}

bool Fixed :: operator<=(const Fixed	&other) const
{
	return fixed_point <= other.getRawBits();
}

bool Fixed :: operator==(const Fixed	&other) const
{
	return fixed_point == other.getRawBits();
}

bool Fixed :: operator!=(const Fixed	&other) const
{
	return fixed_point != other.getRawBits();
}

Fixed	Fixed :: operator+(const Fixed &other)
{
	Fixed	res;

	res.setRawBits(fixed_point + other.getRawBits());
	return res;
}

Fixed	Fixed :: operator-(const Fixed &other)
{
	Fixed	res;

	res.setRawBits(fixed_point - other.getRawBits());
	return res;
}

Fixed	Fixed :: operator*(const Fixed &other)
{
	Fixed	res(this->toFloat() * other.toFloat());
	return res;
}

Fixed	Fixed :: operator/(const Fixed &other)
{
	Fixed	res(this->toFloat() / other.toFloat());
	return res;
}

Fixed	&Fixed :: operator++(void)
{
	fixed_point++;
	return *this;
}

Fixed	&Fixed :: operator--(void)
{
	fixed_point--;
	return *this;
}

Fixed	Fixed :: operator--(int)
{
	Fixed	res(*this);
	*this = operator--();
	return res;
}

Fixed	Fixed :: operator++(int)
{
	Fixed	res(*this);
	*this = operator++();
	return res;
}

Fixed	&Fixed :: min(Fixed	&f1, Fixed	&f2)
{
	return f1 < f2 ? f1 : f2;
}

const Fixed	&Fixed :: min(const Fixed	&f1, const Fixed	&f2)
{
	return f1 < f2 ? f1 : f2;
}

Fixed	&Fixed :: max(Fixed	&f1, Fixed	&f2)
{
	return f1 > f2 ? f1 : f2;
}

const Fixed	&Fixed :: max(const Fixed	&f1, const Fixed	&f2)
{
	return f1 > f2 ? f1 : f2;
}