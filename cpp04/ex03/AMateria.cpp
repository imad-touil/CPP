/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 02:50:36 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/05 20:18:36 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(const AMateria& obj)
{
	this->type = obj.type;
	std::cout << "AMateria Copy constructor called\n";
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called\n";
}

std::string const&	AMateria::getType() const
{
	return (type);
}
