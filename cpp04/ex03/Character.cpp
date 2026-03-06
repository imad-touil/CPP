/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:20:12 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/06 03:03:04 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	// std::cout	<< "Character Defalut constructor called\n";
}

Character::Character(std::string const & name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	// std::cout	<< "Character constructor called\n";
}

Character::Character(const Character& obj)
{
	name = obj.name;
	for (int i = 0; i < 4; i++)
	{
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	// std::cout << "Character copy constructor called\n";
}

Character&	Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (obj.inventory[i])
				inventory[i] = obj.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	// std::cout << "Character Copy assignement operator called\n";
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	// std::cout << "Character Destructor Called\n";
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (inventory[idx])
		inventory[idx]->use(target);
}
