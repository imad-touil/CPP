/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 02:00:53 by imatouil          #+#    #+#             */
/*   Updated: 2026/08/11 11:49:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void	AddRangeTest()
{
	try
	{
		std::vector<int>	nums;
		Span	sp(10);
		sp.addNumber(1337);
		nums.push_back(13);
		nums.push_back(37);
		nums.push_back(42);
		nums.push_back(19);
		nums.push_back(20);
		sp.getVect();
		sp.addRange(nums.begin(), nums.end());
		sp.getVect();
		sp.addRange(nums.begin(), nums.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	_10000NumbersTest()
{
	try
	{
		Span sp(10000);
		std::srand(std::time(NULL));
		for (int i = 0; i < 10000; i++)
			sp.addNumber(std::rand());
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
		// sp.getVect();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	EmptySpanTest()
{
	try
	{
		Span sp(5);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	_1ElementTest()
{
	try
	{
		Span sp(5);
		sp.addNumber(42);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	FullSpanTest()
{
	try
	{
		Span sp(2);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "========== Subject Test ==========\n";
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "========== Full Span Test ==========\n";
	FullSpanTest();
	std::cout << "========== One Element Test ==========\n";
	_1ElementTest();
	std::cout << "========== Empty Span Test ==========\n";
	EmptySpanTest();
	std::cout << "========== 10000 Numbers ==========\n";
	_10000NumbersTest();
	std::cout << "========== AddRange Test ==========\n";
	AddRangeTest();
}
