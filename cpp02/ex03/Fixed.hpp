/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:36:30 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/16 11:27:36 by imatouil         ###   ########.fr       */
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
		
		bool	operator>(const Fixed& obj) const;
		bool	operator<(const Fixed& obj) const;
		bool	operator>=(const Fixed& obj) const;
		bool	operator<=(const Fixed& obj) const;
		bool	operator==(const Fixed& obj) const;
		bool	operator!=(const Fixed& obj) const;
		// **************************************************

		Fixed	operator+(const Fixed &obj) const;
		Fixed	operator-(const Fixed &obj) const;
		Fixed	operator*(const Fixed &obj) const;
		Fixed	operator/(const Fixed &obj) const;
		// **************************************************
		
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		// **************************************************
	
		static Fixed	&min(Fixed &first, Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed&	min(const Fixed &first, const Fixed &second);
		static const Fixed&	max(const Fixed &first, const Fixed &second);
		// **************************************************
	private:
		int					value;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif