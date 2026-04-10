/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:54:20 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/10 01:27:53 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& x, T& y)
{
	T	z;

	z = x;
	x = y;
	y = z;
}

template <typename T>
T	min(const T& x, const T& y)
{
	return (x < y ? x : y);
}

template <typename T>
T	max(const T& x, const T& y)
{
	return (x > y ? x : y);
}

#endif