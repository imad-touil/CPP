/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 01:34:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 21:01:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	type  ="Dog";
	print("Dog Default Constructor Called");
	brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	print("Dog Copy Constructor Called");
	brain = new Brain(*obj.brain);
}

Dog&	Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete brain;
		brain = new Brain(*obj.brain);
	}
	print("Dog Copy Assignement Operator Called");
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	print("Dog Destructor Called");
}

void	Dog::makeSound() const
{
	print("Woof woof!");
}
