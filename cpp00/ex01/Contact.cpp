/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:19:46 by codespace         #+#    #+#             */
/*   Updated: 2026/01/13 14:25:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
	: firstname(""), lastname(""),
	nickname(""), phonenumber(""),
	darckestsecret("") {}

bool	Contact::isOnlySpaces(const std::string &s) const
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (!isspace(s[i]))
			return false;
	}
	return true;
}

void	Contact::Helper(std::string &input) const
{
	while (true)
	{
		if (!std::getline(std::cin, input))
			exit(0);
		if (!input.empty() && !isOnlySpaces(input))
			return;
		std::cout << "Field cannot be empty. Please try again: ";
	}
}

void	Contact::SetData()
{
	std::cout << "Enter The First Name: ";
	Helper(firstname);
	std::cout << "Enter The Last Name: ";
	Helper(lastname);
	std::cout << "Enter The nickname Name: ";
	Helper(nickname);
	std::cout << "Enter The Phone Number: ";
	Helper(phonenumber);;
	std::cout << "Enter The Darcket Secret: ";
	Helper(darckestsecret);
}

std::string	Contact::GetData(int index) const
{
	switch (index)
	{
		case 0:
			return (firstname);
		case 1:
			return (lastname);
		case 2:
			return (nickname);
		default:
			return ("");
	}
}

void	Contact::Display() const
{
	std::cout << "First Name     : " << firstname << std::endl;
	std::cout << "Last Name      : " << lastname << std::endl;
	std::cout << "Nick Name      : " << nickname << std::endl;
	std::cout << "Phone Number   : " << phonenumber << std::endl;
	std::cout << "Darckest Secret: " << darckestsecret << std::endl;
}
