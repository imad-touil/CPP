/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:16:30 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/21 21:45:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their "
					<< _weapon->getType() << std::endl;
// 	else
// 		std::cout << _name << " attacks with their bare hands"
// 		          << std::endl;
}