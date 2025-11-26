/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:06:19 by codespace         #+#    #+#             */
/*   Updated: 2025/11/26 22:16:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class   Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nackname;
		std::string phonenumber;
		std::string darckestsecret;
	public:
		void		SetData();
		std::string	GetData(int index) const;
}

#endif
