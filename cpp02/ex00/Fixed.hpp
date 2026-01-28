/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:36:30 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/28 15:05:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed&	operator=(const Fixed& obj)
		~Fixed();
		int		getRawBits(void) const;
		void	steRawBits(int const raw);

	private:
		int					value;
		static const int	bit = 8;
};

#endif