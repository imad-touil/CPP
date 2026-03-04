/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 02:30:42 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 02:35:47 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	print("WrongAnimal Default Constructor");
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
	print("WrongAnimal Copy constructor called");
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		this->type = obj.type;
	print("WrongAnimal Copy Assignment Operator Called");
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	print("WrongAnimal Destructor Called");
}

void	WrongAnimal::makeSound() const
{
	print("Blub blub... wait... what WrongAnimal am I??");
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
