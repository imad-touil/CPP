/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:45:49 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/16 11:21:52 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& obj);
		Point&	operator=(const Point& obj);
		~Point();
		// ***********************************
		
		Fixed getX() const;
		Fixed getY() const;
	private:
		const Fixed x;
		const Fixed y;
};

Fixed area(Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
