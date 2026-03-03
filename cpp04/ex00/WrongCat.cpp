/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 02:30:44 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 02:39:58 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type  ="WrongCat";
	print("WrongCat Default Constructor Called");
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	print("WrongCat Copy Constructor Called");
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		WrongAnimal::operator=(obj);
	print("WrongCat Copy Assignement Operator Called");
	return (*this);
}

WrongCat::~WrongCat()
{
	print("WrongCat Destructor Called");
}

void	WrongCat::makeSound() const
{
	print("Meow meow!");
}
