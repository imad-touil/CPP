/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 19:48:37 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/25 02:41:47 by imatouil         ###   ########.fr       */
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

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap " << this->_name
				<< " destructor called" << std::endl;
}

// DiamondTrap::DiamondTrap(std::string name)