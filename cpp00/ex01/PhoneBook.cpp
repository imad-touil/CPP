/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:00:15 by codespace         #+#    #+#             */
/*   Updated: 2025/11/29 12:21:05 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : counter(0) {}

void    PhoneBook::Add()
{
	int index;

	index = counter % 8;
	contacts[index].SetData();
	counter++;
}

std::string	PhoneBook::TurnToDots(std::string str) const
{
	if (str.length() > 9)
		return (str.substr(0, 9) + '.');
	return (str);
}

void	PhoneBook::DisplayTable()
{
	int	size;

	std::cout << "--------------------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|  phonenbr|\n";
    std::cout << "--------------------------------------------------------\n";
	size = 8;
	if (counter < 8)
	size = counter;
	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		for (int j = 0; j < 4; j++)
		std::cout << "|" << std::setw(10) << TurnToDots(contacts[i].GetData(j));
		std::cout << "|\n";
	}
	std::cout << "--------------------------------------------------------\n";
}

void	PhoneBook::Search()
{
	int			index;
	std::string	input;

	if (counter == 0)
	{
		std::cout << "PhoneBook Is Empty\n";
		return ;
	}
	DisplayTable();
	std::cout << "Enter index: ";
	getline(std::cin, input);
	if (input.length() != 1 || input[0] < '0'
		|| input[0] > '7')
	{
		std::cout << "Hint👀: 0-7\n";
		return ;
	}
	index = input[0] - 48;
	if (index >= counter)
	{
		std::cout << "Out Of Range\n";
		return ;
	}
	contacts[index].Display();
}
