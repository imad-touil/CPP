/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:19:46 by codespace         #+#    #+#             */
/*   Updated: 2025/11/26 22:21:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void    Contact::SetData()
{
    std::cout << "Enter Ur First Name: ";
    getline(std::cin, firstname);
}
