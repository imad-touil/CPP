/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/01 12:25:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

# define RED "\e[31m"
# define GREEN "\033[32m"
# define RESET "\e[0m"
# define BLUE   "\033[34m"

// void	ll()
// {
// 	system("leaks -q program");
// }
// atexit(ll);

int main()
{
	srand(time(NULL));
	{
		std::cout << BLUE << "|---------- 👍 ----------|\n" << RESET;
		std::cout << GREEN;
		Intern	Rand;
		AForm*	form;
		form = Rand.makeForm("shrubbery creation", "lol");
		form->executeAction();
		std::cout << RESET;
		if (form)
			delete form;
	}
	{
		std::cout << BLUE << "|---------- 👍 ----------|\n" << RESET;
		std::cout << GREEN;
		Intern	Rand;
		AForm*	form;
		form = Rand.makeForm("robotomy request", "lol");
		form->executeAction();
		if (form)
			delete form;
		std::cout << RESET;
	}
	{
		std::cout << BLUE << "|---------- 👍 ----------|\n" << RESET;
		std::cout << GREEN;
		Intern	Rand;
		AForm*	form;
		form = Rand.makeForm("presidential pardon", "lol");
		form->executeAction();
		if (form)
			delete form;
		std::cout << RESET;
	}
	{
		std::cout << BLUE << "|---------- 👎 ----------|\n" << RESET;
		std::cout << RED;
		Intern	Rand;
		AForm*	form;
		form = Rand.makeForm("lol", "lol");
		if (form)
			delete form;
	}
	return 0;
}
