/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:39 by imatouil          #+#    #+#             */
/*   Updated: 2026/10/01 18:49:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	parsNumbers(std::string& av, std::vector<int>& _vect, std::deque<int>& _deq)
{
	int	number;
	
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
	_vect.push_back(number);
	_deq.push_back(number);
	return true;
}

void printVector(const std::vector<int>& _vect, const std::string& condition)
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

void printDeque(const std::deque<int>& _deq, const std::string& condition)
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

void	createPairVector(const std::vector<int>& values, std::vector<Pair>& pairs)
{
	for (size_t i = 0; i + 1 < values.size(); i += 2)
	{
		Pair p;
		if (values[i] < values[i + 1])
		{
			p._small = values[i];
			p._big = values[i + 1];
		}
		else
		{
			p._small = values[i + 1];
			p._big = values[i];
		}
		pairs.push_back(p);
	}
}

void	createPairDeque(const std::deque<int>& values, std::deque<Pair>& pairs)
{
	for (size_t i = 0; i + 1 < values.size(); i += 2)
	{
		Pair p;
		if (values[i] < values[i + 1])
		{
			p._small = values[i];
			p._big = values[i + 1];
		}
		else
		{
			p._small = values[i + 1];
			p._big = values[i];
		}
		pairs.push_back(p);
	}
}

void	sortVector(std::vector<int>& _vect)
{
	if (_vect.size() < 2)
		return;
	bool	hasOdd = false;
	int 	odd = 0;
	if (_vect.size() % 2)
	{
		hasOdd = true;
		odd = _vect.back();
	}
	std::vector<Pair> paires;
	createPairVector(_vect, paires);
	std::vector<int> main;
	for (size_t i = 0; i < paires.size(); i++)
		main.push_back(paires[i]._big);
	sortVector(main);
	std::vector<int> bigs = main; // copie bach nsta3mloha f bound
	std::vector<int> pend;
	std::vector<bool> used;
	for (size_t i = 0; i < paires.size(); i++)
		used.push_back(false);
	for (size_t i = 0; i < bigs.size(); i++)
	{
		for (size_t j = 0; j < paires.size(); j++)
		{
			if (!used[j] && paires[j]._big == bigs[i])
			{
				used[j] = true;
				pend.push_back(paires[j]._small);
				break;
			}
		}
	}
	if (hasOdd)
		pend.push_back(odd);
	main.insert(main.begin(), pend[0]);
	insertJacobsthalVect(main, pend, bigs);
	_vect = main;
}

void	insertJacobsthalVect(std::vector<int>& main, std::vector<int>& pend, std::vector<int>& bigs)
{
	size_t j1 = 1, j2 = 3;
	size_t prev = 1;
	size_t cur = 3;

	while (prev < pend.size())
	{
		size_t end = std::min(cur, pend.size());
		for (size_t i = end; i > prev; i--)
		{
			std::vector<int>::iterator bound;
			if (i - 1 < bigs.size())
				bound = std::find(main.begin(), main.end(), bigs[i - 1]);
			else
				bound = main.end();
			std::vector<int>::iterator pos =
				std::lower_bound(main.begin(), bound, pend[i - 1]);
			main.insert(pos, pend[i - 1]);
		}
		prev = cur;
		size_t next = j2 + 2 * j1;
		j1 = j2;
		j2 = next;
		cur = j2;
	}
}

void	sortDeque(std::deque<int>& _deq)
{
	if (_deq.size() < 2)
		return;
	bool	hasOdd = false;
	int 	odd = 0;
	if (_deq.size() % 2)
	{
		hasOdd = true;
		odd = _deq.back();
	}
	std::deque<Pair> paires;
	createPairDeque(_deq, paires);
	std::deque<int> main;
	for (size_t i = 0; i < paires.size(); i++)
		main.push_back(paires[i]._big);
	sortDeque(main);
	std::deque<int> bigs = main; // copie bach nsta3mloha f bound
	std::deque<int> pend;
	std::deque<bool> used;
	for (size_t i = 0; i < paires.size(); i++)
		used.push_back(false);
	for (size_t i = 0; i < bigs.size(); i++)
	{
		for (size_t j = 0; j < paires.size(); j++)
		{
			if (!used[j] && paires[j]._big == bigs[i])
			{
				used[j] = true;
				pend.push_back(paires[j]._small);
				break;
			}
		}
	}
	if (hasOdd)
		pend.push_back(odd);
	main.insert(main.begin(), pend[0]);
	insertJacobsthalDeq(main, pend, bigs);
	_deq = main;
}

void	insertJacobsthalDeq(std::deque<int>& main, std::deque<int>& pend, std::deque<int>& bigs)
{
	size_t j1 = 1, j2 = 3;
	size_t prev = 1;
	size_t cur = 3;

	while (prev < pend.size())
	{
		size_t end = std::min(cur, pend.size());
		for (size_t i = end; i > prev; i--)
		{
			std::deque<int>::iterator bound;
			if (i - 1 < bigs.size())
				bound = std::find(main.begin(), main.end(), bigs[i - 1]);
			else
				bound = main.end();
			std::deque<int>::iterator pos =
				std::lower_bound(main.begin(), bound, pend[i - 1]);
			main.insert(pos, pend[i - 1]);
		}
		prev = cur;
		size_t next = j2 + 2 * j1;
		j1 = j2;
		j2 = next;
		cur = j2;
	}
}
