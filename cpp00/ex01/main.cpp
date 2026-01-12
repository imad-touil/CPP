/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:14:23 by imatouil          #+#    #+#             */
/*   Updated: 2025/12/16 11:14:24 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	pb1;
	std::string	command;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!getline(std::cin, command))
			exit(0);
		if (command == "ADD")
			pb1.Add();
		else if (command == "SEARCH")
			pb1.Search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "No No, Use:    👇 ||  👇  || 👇\n";
	}
}
