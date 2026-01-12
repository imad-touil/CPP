/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:14:45 by imatouil          #+#    #+#             */
/*   Updated: 2025/12/16 11:14:46 by imatouil         ###   ########.fr       */
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
