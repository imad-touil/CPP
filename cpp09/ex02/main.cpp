/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:10:36 by imatouil          #+#    #+#             */
/*   Updated: 2026/10/01 18:42:21 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>

static double now_us()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec * 1000000.0 + tv.tv_usec;
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (std::cerr << "Error" << std::endl, 1);
	std::vector<int> input;
	std::deque<int>  dummy;
	for (int i = 1; i < ac; i++)
	{
		std::string s = av[i];
		if (!parsNumbers(s, input, dummy))
			return (std::cerr << "Error" << std::endl, 1);
	}
	printVector(input, "Before: ");
	// vector
	double t0 = now_us();
	std::vector<int> v(input.begin(), input.end());
	sortVector(v);
	double t1 = now_us();
	// deque
	double t2 = now_us();
	std::deque<int> d(input.begin(), input.end());
	sortDeque(d);
	double t3 = now_us();
	printVector(v, "After: ");
	std::cout << "Time to process a range of " << input.size()
			  << " elements with std::vector : " << (t1 - t0) << " us" << std::endl;
	std::cout << "Time to process a range of " << input.size()
			  << " elements with std::deque : " << (t3 - t2) << " us" << std::endl;
	return 0;
}
