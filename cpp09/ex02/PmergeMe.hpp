/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:41 by imatouil          #+#    #+#             */
/*   Updated: 2026/10/01 18:49:44 by imatouil         ###   ########.fr       */
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


	struct Pair
	{
		int	_small;
		int _big;	
	};

	bool	parsNumbers(std::string& av, std::vector<int>& _vect, std::deque<int>& _deq);
	void	createPairVector(const std::vector<int>& values, std::vector<Pair>& pairs);
	void	createPairDeque(const std::deque<int>& values, std::deque<Pair>& pairs);

	void	sortVector(std::vector<int>& _vect);
	void	sortDeque(std::deque<int>& _deq);
	void	insertJacobsthalVect(std::vector<int>& main,
							std::vector<int>& pend, std::vector<int>& bigs);
	void	insertJacobsthalDeq(std::deque<int>& main,
							std::deque<int>& pend, std::deque<int>& bigs);

	void	printVector(const std::vector<int>& _vect, const std::string& condition);
	void	printDeque(const std::deque<int>& _deq, const std::string& condition);

#endif
