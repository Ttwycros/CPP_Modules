#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed	&other);
		~Fixed(void);
		Fixed	&operator=(const Fixed	&other);
		int		getRawBits(void) const;
		void	setRawBits(int const	_intToConvert);
	private:
		int					intToConvert;
		static int const	raw = 8;
};

#endif