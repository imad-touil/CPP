/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 01:40:58 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 16:30:22 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

const char* MaxElementException::what() const throw()
{
	return ("Span is full!");
}

const char* MinElementException::what() const throw()
{
	return ("Not enough elements!");
}

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span&	Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		this->_maxSize = obj._maxSize;
		this->vect = obj.vect;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int number)
{
	if (vect.size() >= _maxSize)
		throw MaxElementException();
	vect.push_back(number);
}

int	Span::longestSpan() const
{
	if (vect.size() <= 1)
		throw MinElementException();
	int	min = *std::min_element(vect.begin(), vect.end());
	int	max = *std::max_element(vect.begin(), vect.end());
	return (max - min);
}

int	Span::shortestSpan() const
{
	std::vector<int> tmp = vect;
	int	diff;

	if (vect.size() <= 1)
		throw MinElementException();
	std::sort(tmp.begin(), tmp.end());
	diff = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (diff > tmp[i + 1] - tmp[i])
			diff = tmp[i + 1] - tmp[i];
	}
	return (diff);
}

void	Span::getVect() const
{
	for (size_t i = 0; i < vect.size(); i++)
		std::cout << vect[i] << " ";
	std::cout << "\n";
}
