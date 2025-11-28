/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:19:46 by codespace         #+#    #+#             */
/*   Updated: 2025/11/28 21:40:28 by codespace        ###   ########.fr       */
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
	// =================================
	// std::cout << firstname << std::endl;
	// std::cout << "First Name: " << firstname << std::endl;
    // std::cout << "Last Name: " << lastname << std::endl;
    // std::cout << "Nickname: " << nickname << std::endl;
    // std::cout << "Phone Number: " << phonenumber << std::endl;
    // std::cout << "Darkest Secret: " << darckestsecret << std::endl;
	
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
