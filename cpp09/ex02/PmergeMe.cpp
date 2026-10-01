/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:39 by imatouil          #+#    #+#             */
/*   Updated: 2026/10/01 13:21:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
	int	i = 0;
	while (av[++i])
	{
		int	nbr;
		std::string arg = av[i];
		if (!parsNumbers(arg, nbr))
			throw std::runtime_error("Error");
		_vect.push_back(nbr);
		_deq.push_back(nbr);
	}
}

PmergeMe::~PmergeMe() {};

bool PmergeMe::parsNumbers(const std::string& av, int &number)
{
    if (av.empty())
        return false;

    for (size_t i = 0; i < av.length(); i++)
    {
        if (av[i] < '0' || av[i] > '9')
            return false;
    }
    errno = 0;
    long val = std::strtol(av.c_str(), NULL, 10);
    if (errno == ERANGE || val > INT_MAX)
        return false;
    number = static_cast<int>(val);
    return true;
}

void PmergeMe::printVector(const std::string& condition) const
{
	std::cout << condition;
    for (size_t i = 0; i < _vect.size(); i++)
	{
        std::cout << _vect[i];
		if (i < _vect.size() - 1)
			std::cout << " ";
	}
    std::cout << std::endl;
}

void PmergeMe::printDeque(const std::string& condition) const
{
	std::cout << condition;
    for (size_t i = 0; i < _deq.size(); i++)
	{
        std::cout << _deq[i];
		if (i < _deq.size() - 1)
			std::cout << " ";
	}
    std::cout << std::endl;
}


void PmergeMe::sortVectorRecursive(std::vector<int>& values)
{
    if (values.size() <= 1)
        return;
    std::vector<Pair> pairs;
    std::vector<int> bigNumbers;
    std::vector<Pair> sortedPairs;
    size_t i = 0;
    int straggler = -1;
    bool hasStraggler = false;

    while (i + 1 < values.size())
    {
        Pair p;
        if (values[i] < values[i + 1])
        {
            p.small = values[i];
            p.big = values[i + 1];
        }
        else
        {
            p.small = values[i + 1];
            p.big = values[i];
        }
        pairs.push_back(p);
        bigNumbers.push_back(p.big);
        i += 2;
    }
    if (i < values.size())
    {
        straggler = values[i];
        hasStraggler = true;
    }
    sortVectorRecursive(bigNumbers);
    for (size_t j = 0; j < bigNumbers.size(); j++)
    {
        for (size_t k = 0; k < pairs.size(); k++)
        {
            if (pairs[k].big == bigNumbers[j])
            {
                sortedPairs.push_back(pairs[k]);
                break;
            }
        }
    }
    pairs = sortedPairs;
}
