/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:36:27 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/15 13:12:54 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
};

Zombie::~Zombie()
{
	std::cout << "Gmae Over For: " << name << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*newZ;

	try
	{
		newZ = new Zombie(name);
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << "Allocation failed\n";
		return (0);
	}
	return (newZ);
}

void	randomChump(std::string name)
{
	Zombie	Z(name);
	Z.announce();
}
