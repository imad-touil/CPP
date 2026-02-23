/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:12:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/23 02:54:35 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_hitPoints(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name) {}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
	std::cout << "Copy constructor called\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoint = obj._energyPoint;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attacks " 
			<< target << ", causing "
			<< _attackDamage 
			<< " points of damage!";
	if (_hitPoints > 0 && _energyPoint > 0)
	{
		_attackDamage--;
		_energyPoint--;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoint > 0)
	{
		_attackDamage++;
		_energyPoint--;
	}
}