/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:36:30 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/06 15:29:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		// **************************************************
		Fixed(const int intValue);
		Fixed(const float floatValue);
		// **************************************************
		Fixed(const Fixed& obj);
		Fixed&	operator=(const Fixed& obj);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		// **************************************************
		float	toFloat(void) const;
		int		toInt(void) const;

		// **************************************************
		// static int&	min(int &first, int &secend);
		// static int&	min(const int &first, const int &secend);
		// static int&	max(int &first, int &secend);
		// static int&	max(const int &first, const int &secend);
	private:
		int					value;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif