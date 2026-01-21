/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:32:49 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/21 18:20:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string newType);
		const std::string&	getType() const;
	private:
		std::string	type;
};

#endif