#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int	integer);
		Fixed(const float	floating);
		Fixed(const Fixed	&other);
		~Fixed(void);
		Fixed	&operator=(const Fixed	&other);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const	_intToConvert);
	private:
		int					fixed_point;
		static int const	raw = 8;
};

std :: ostream	&operator<<(std :: ostream &stream, const Fixed	&other);

#endif