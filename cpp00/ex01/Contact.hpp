/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:06:19 by codespace         #+#    #+#             */
/*   Updated: 2025/11/29 12:03:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class   Contact
{
	public:
		Contact();
		void		SetData();
		std::string	GetData(int index) const;
		void	Display() const;
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darckestsecret;
};

#endif
