/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:48:37 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/27 14:35:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
			: ClapTrap("Default_clap_name"),
			ScavTrap(),
			FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout	<< "DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) 
			: ClapTrap(name + "_clap_name"),
			ScavTrap(name),
			FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout	<< "DiamondTrap " << this->_name
				<< " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
			: ClapTrap(obj),
			ScavTrap(obj),
			FragTrap(obj),
			_name(obj._name)
{
	std::cout	<< "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout	<< "DiamondTrap assignment operator called\n";
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		this->_name = obj._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap " << this->_name
				<< " destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "DiamondTrap name: " << this->_name << std::endl;
	std::cout	<< "ClapTrap name: " << ClapTrap::_name << std::endl;
}
