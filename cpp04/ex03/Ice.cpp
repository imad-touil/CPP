/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 20:50:31 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/06 00:14:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called\n";
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
	std::cout << "Ice copy constructor called\n";
}

Ice&	Ice::operator=(const Ice& obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	std::cout << "Ice copy assignement operator called\n";
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *" << std::endl;
}
