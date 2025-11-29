/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:44:13 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/29 11:17:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		counter;
		std::string	TurnToDots(std::string str) const;

	public:
		PhoneBook();
		void	Add();
		void	DisplayTable();
		void	Search();
};

# endif
