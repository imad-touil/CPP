/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 01:40:55 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 16:30:06 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class MaxElementException : public std::exception
{
	public:
		const char*	what() const throw();
};

class MinElementException : public std::exception
{
	public:
		const char*	what() const throw();
};

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	vect;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& obj);
		Span&	operator=(const Span& obj);
		~Span();
		void	addNumber(int number);
		int		longestSpan() const;
		int		shortestSpan() const;
		void	getVect() const;
};

#endif