/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:16:42 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/24 15:48:34 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout	<< "FragTrap Default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout	<< "FragTrap " << name
				<< " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout	<< "FragTrap " << _name
				<< " copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	std::cout	<< "FragTrap " << _name
				<< " copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap " << _name
				<< " destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout	<< "FragTrap " 
				<< _name << ": \"High five, guys? 🖐️\""
				<< std::endl;
}
