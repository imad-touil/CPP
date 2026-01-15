/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:34:51 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/15 14:26:40 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*z;

	z = new (std::nothrow) Zombie[N];
	if (!z)
	{
		std::cerr << "Allocation Failed\n";
		return (0);
	}
	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return (z);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
