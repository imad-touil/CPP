/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:39 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/30 18:55:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
	int	i = 0;
	while (av[++i])
	{
		int	nbr;
		if (!parsNumbers(av[i], nbr))
			throw std::runtime_error("Error");
		_vect.push_back(nbr);
		_deq.push_back(nbr);
	}
}

PmergeMe::~PmergeMe() {};

bool	PmergeMe::parsNumbers(std::string av, int &number)
{
	if (av == "")
		return (false);
	int i = -1;
	while (av[++i])
	{
		if (av[i] < '0' || av[i] > '9')
			return (false);
	}
	errno = 0;
	long val = std::strtol(av.c_str(), NULL, 10);
	if (errno == ERANGE || val > INT_MAX)
		return (false);
	number = static_cast<int>(val);
	return (true);
}

void PmergeMe::printVector() const
{
    for (size_t i = 0; i < _vect.size(); i++)
        std::cout << _vect[i] << " ";

    std::cout << std::endl;
}