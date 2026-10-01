/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:41 by imatouil          #+#    #+#             */
/*   Updated: 2026/10/01 15:40:57 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
#include <climits>
#include <cerrno>

class PmergeMe
{
	private:
		std::vector<int>	_vect;
		std::deque<int>		_deq;
		struct Pair
		{
			int small;
			int big;
		};
		struct ChainItem
		{
			int value;
			int pairId;
			bool isBig;
		};
		
		bool	parsNumbers(const std::string& av, int &number);

		void	sortVectorRecursive(std::vector<int>& values);
		void	sortDequeRecursive(std::deque<int>& values);
	
	public:
		PmergeMe();
		PmergeMe(char **av);
		// PmergeMe(const PmergeMe& obj);
		// PmergeMe&	operator=(const PmergeMe& obj);		
		~PmergeMe();

		void	sortVector();
		void	sortDeque();
		void	printVector(const std::string& condition) const;
		void	printDeque(const std::string& condition) const;
};

#endif
