/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:56:34 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/16 11:53:38 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point	&Point::operator=(const Point &obj)
{
	(void)obj;
	return (*this);
}

Point::~Point() {}

// ***********************************

Fixed	Point::getX() const
{
	return (x);
}

Fixed	Point::getY() const
{
	return (y);
}

Fixed	area(Point const a, Point const b, Point const c)
{
	return (a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY()));
}
