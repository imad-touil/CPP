/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:19:46 by codespace         #+#    #+#             */
/*   Updated: 2025/11/27 16:55:08 by codespace        ###   ########.fr       */
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

std::string	GetData(ContactField field) const
{
	switch (field)
	{
		case FirstName:
			return (firstname);
		case LastName:
			return (lastname);
		case NickName:
			return (nickname);
		case PhoneNumber:
			return (phonenumber);
		case DarkestSecret:
			return (darckestsecret);
		default:
			return ("");
	}
}
