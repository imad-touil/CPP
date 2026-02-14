/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:36:12 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/14 22:12:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		this->value = obj.value;
	return (*this);
}

Fixed::Fixed(const int intValue)
{
	value = intValue << bits;
}

Fixed::Fixed(const float floatValue)
{
	value = roundf(floatValue * (1 << bits));
}

Fixed::~Fixed(){}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

// *****************************************************************************

float	Fixed::toFloat(void) const
{
	return (value / float(1 << bits));
}

int	Fixed::toInt(void) const
{
	return (value >> bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// *****************************************************************************

bool	Fixed::operator>(const Fixed& obj) const
{
	return (this->value > obj.value);
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return (this->value < obj.value);
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return (this->value >= obj.value);
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return (this->value <= obj.value);
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return (this->value == obj.value);
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return (this->value != obj.value);
}

// *****************************************************************************

Fixed	Fixed::operator+(const Fixed &obj) const
{
	Fixed	res;
	res.value = this->value + obj.value;
	return (res);
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	Fixed	res;
	res.value = this->value - obj.value;
	return (res);
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	Fixed	res;
	res.value = (this->value * obj.value) >> bits;
	return (res);
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	Fixed	res;
	res.value = (this->value << bits) / obj.value;
	return (res);
}

// *****************************************************************************

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return (temp);
}

// *****************************************************************************




const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	return ((first > second) ? first : second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	return ((first > second) ? first : second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	return ((first < second) ? first : second);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	return ((first < second) ? first : second);
}