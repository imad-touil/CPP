/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:19:25 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 21:17:29 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl
			<< "I love having extra bacon for my"
			<< " 7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl
			<< "I cannot believe adding extra bacon costs more money."
			<< " You didn’t put enough bacon in my burger! If you did, "
			<< "I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl
			<< "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming for years, whereas you started "
			<< "working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*functios[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functios[i])();
			return ;
		}
	}
}
