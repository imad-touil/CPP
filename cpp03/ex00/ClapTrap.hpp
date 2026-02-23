/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:05:21 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/23 02:54:35 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		const std::string	_name;
		int					_hitPoints;
		int					_energyPoint;
		int					_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif