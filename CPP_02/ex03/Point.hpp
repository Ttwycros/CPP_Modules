#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const Point	&other);
		Point(const	float	_x, const float	_y);
		~Point(void);
		Point	&operator=(const Point	&other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void announce_self(void) const;
	private:
		Fixed x;
		Fixed y;	
};

bool	bsp(Point const A, Point const B, Point const C, Point const point);

#endif