/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 02:21:25 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/04 02:29:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	print("Animal Default Constructor");
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	print("Animal Copy constructor called");
}

Animal&	Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		this->type = obj.type;
	print("Animal Copy Assignment Operator Called");
	return (*this);
}

Animal::~Animal()
{
	print("Animal Destructor Called");
}

// void	Animal::makeSound() const
// {
// 	print("Blub blub... wait... what animal am I??");
// }

std::string	Animal::getType() const
{
	return (type);
}
