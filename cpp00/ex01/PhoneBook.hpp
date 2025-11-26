/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:44:13 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/26 21:50:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class	PhoneBook
{
	Contact contacts[8];
	int		index;

	public:
		void	AddContact();
		void	DisplayTable();
		void	DisplayContact();
};

# endif