/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:17:53 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/05 21:19:00 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called\n";
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
	std::cout << "Cure copy constructor called\n";
}

Cure&	Cure::operator=(const Cure& obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	std::cout << "Cure copy assignement operator called\n";
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

// void	Cure::use(ICharacter& target)
// {
// 	std::cout	<< "* heals "
	        //   << target.getName()
	        //   << "'s wounds *"
	        //   << std::endl;l;
// }
