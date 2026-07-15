/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 02:00:53 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 16:27:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "========== Normal Test ==========\n";
	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n========== Full Span Test ==========\n";
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
	std::cout << "\n========== Empty Span Test ==========\n";
	try
	{
		Span sp(5);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n========== One Element Test ==========\n";
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
	std::cout << "\n========== Negative Numbers ==========\n";
	try
	{
		Span sp(4);
		sp.addNumber(-10);
		sp.addNumber(-3);
		sp.addNumber(50);
		sp.addNumber(-100);
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n========== 10000 Numbers ==========\n";
	try
	{
		Span sp(10000);
		std::srand(std::time(NULL));
		for (int i = 0; i < 10000; i++)
			sp.addNumber(std::rand());
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
