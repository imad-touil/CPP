/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:12:47 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 17:43:20 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

# define RED "\033[31m"
# define RESET "\e[0m"

class	Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};


Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif