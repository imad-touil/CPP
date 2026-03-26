/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:22:05 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/26 12:54:15 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// void	ll(void)
// {
// 	system("leaks -q program");
// }
// atexit(ll);

int	main(void)
{
	std::cout << "\n|---------- 👍 ----------|" << std::endl;
	Bureaucrat *a = new Bureaucrat("Emad", 13);
	try
	{
		std::cout << "At The Beginning\n";
		std::cout << *a;
		std::cout << "After Increment\n";
		a->increment();
		std::cout << *a;
		std::cout << "After Decrement\n";
		a->decrement();
		std::cout << *a;
	}
	catch (std::exception &e)
	{
		std::cout << "Excep: " << e.what() << std::endl;
	}
	std::cout << "\n|---------- 👎 ----------|" << std::endl;
	Bureaucrat *b = new Bureaucrat("Higher", 1);
	try
	{
		std::cout << "At The Beginning\n";
		std::cout << *b;
		std::cout << "Try To Increment\n";
		b->increment();
		std::cout << *b;
	}
	catch (std::exception &e)
	{
		std::cout << "Excep: " << e.what() << std::endl;
	}
	std::cout << "\n|---------- 👎 ----------|" << std::endl;
	Bureaucrat *c = new Bureaucrat("Lowest", 150);
	try
	{
		std::cout << "At The Beginning\n";
		std::cout << *c;
		std::cout << "Try To Decrement\n";
		c->decrement();
		std::cout << *c;
	}
	catch (std::exception &e)
	{
		std::cout << "Excep: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	delete a;
	delete b;
	delete c;
}
