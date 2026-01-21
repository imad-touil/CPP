/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:01:51 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/21 19:52:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() {}

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
