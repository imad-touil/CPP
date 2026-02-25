/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:12:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/24 16:35:25 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("ClapTrap"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout	<< "ClapTrap " << this->_name
				<< " Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
	std::cout << "ClapTrap " << _name << " Copy constructor called\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " Copy assignment operator called\n";
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_energyPoints)
		{
			std::cout << "ClapTrap " << _name << " has no energy left!\n";
			return ;
		}
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!\n";
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name 
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " is already dead!\n";
		return ;
	}
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	 std::cout << "ClapTrap " << _name
              << " takes " << amount
              << " damage! Remaining HP: "
              << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_energyPoints)
		{
			std::cout << "ClapTrap " << _name << " has no energy left!\n";
			return ;
		}
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!\n";
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name
              << " repairs itself for "
              << amount << " HP! Current HP: "
              << _hitPoints << "\n";
}