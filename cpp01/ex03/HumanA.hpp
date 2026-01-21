/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:26:09 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/21 19:19:32 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;
	public:
		HumanA(std::string name, Weapon &_weapon);
		void	attack();
};

#endif