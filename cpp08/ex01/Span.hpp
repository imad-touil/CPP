/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 01:40:55 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 02:03:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		unsigned int		_maxSize;
	public:
		std::vector<int>	vect;
		// Span();
		Span(unsigned int maxSize);
		// Span(const Span& obj);
		// Span&	operator=(const Span& obj);
		// ~Span();
		void	addNumber();
};

#endif