/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:19:46 by codespace         #+#    #+#             */
/*   Updated: 2025/11/29 12:21:29 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void	Contact::SetData()
{
	std::cout << "Enter The First Name: ";
	getline(std::cin, firstname);
	std::cout << "Enter The Last Name: ";
	getline(std::cin, lastname);
	std::cout << "Enter The nickname Name: ";
	getline(std::cin, nickname);
	std::cout << "Enter The Phone Number: ";
	getline(std::cin, phonenumber);
	std::cout << "Enter The Darcket Secret: ";
	getline(std::cin, darckestsecret);
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
		case 3:
			return (phonenumber);
		default:
			return ("");
	}
}

void	Contact::Display() const
{
	std::cout << "First Name  : " << firstname << std::endl;
	std::cout << "Last Name   : " << lastname << std::endl;
	std::cout << "Nick Name   : " << nickname << std::endl;
	std::cout << "Phone Number: " << phonenumber << std::endl;
}
