/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:12:47 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/13 20:17:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie();
		void	announce(void);
		void	randomChump(std::string name);
};

# endif