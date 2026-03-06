/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:49:11 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 22:06:41 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout	<< "Brain Default Constructor Called\n";
}

Brain::Brain(const Brain& obj)
{
	std::cout	<< "Brain Copy Constructor called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Brain Assignement Operator Called\n";
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}

// void	Brain::setIdea(int index, std::string idea)
// {
// 	if (index >= 0 && index < 100)
// 		ideas[index] = idea;
// }

// std::string	Brain::getIdea(int index) const
// {
// 	if (index >= 0 && index < 100)
// 		return (ideas[index]);
// 	return ("");
// }