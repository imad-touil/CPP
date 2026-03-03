/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 02:48:14 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 02:36:42 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type  ="Cat";
	print("Cat Default Constructor Called");
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	print("Cat Copy Constructor Called");
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	print("Cat Copy Assignement Operator Called");
	return (*this);
}

Cat::~Cat()
{
	print("Cat Destructor Called");
}

void	Cat::makeSound() const
{
	print("Meow meow!");
}
