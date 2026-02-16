/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:56:37 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/16 11:48:09 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(point, b, c);
	Fixed B = area(a, point, c);
	Fixed C = area(a, b, point);

	if (A == 0 || B == 0 || C == 0)
		return (false);
	if ((A > 0 && B > 0 && C > 0)
		|| (A < 0 && B < 0 && C < 0))
			return (true);
	return (false);
	
}
