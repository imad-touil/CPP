/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:36:30 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/03 19:11:41 by imatouil         ###   ########.fr       */
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
		Fixed(const int iValue);
		Fixed(const float fValue);
		Fixed(const Fixed& obj);
		Fixed&	operator=(const Fixed& obj);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					value;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif