/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:44:13 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/27 18:50:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		counter;
		std::string	TurnToDots(std::string str) const;

	public:
		PhoneBook();
		void	AddContact();
		void	DisplayTable();
		void	DisplayContact();
};

# endif
