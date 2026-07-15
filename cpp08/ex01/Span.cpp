/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 01:40:58 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 02:04:56 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

void	Span::addNumber()
{
	_maxSize+=1;
	vect.push_back(rand());
	vect.push_back(rand());
	vect.push_back(rand());
}


