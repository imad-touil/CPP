/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:06:19 by codespace         #+#    #+#             */
/*   Updated: 2025/11/27 20:43:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

enum ContactField {
    FirstName,
    LastName,
    NickName,
    PhoneNumber,
	DarkestSecret
};

class   Contact
{
	public:
		Contact();
		void		SetData();
		std::string	GetData(ContactField field) const;
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darckestsecret;
};

#endif
