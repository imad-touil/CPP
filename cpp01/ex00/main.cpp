/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:34:55 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/20 11:43:22 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	ll()
// {
// 	system("leaks -q BraiiiiiiinnnzzzZ");
// }
// atexit(ll);

int	main(void)
{
	Zombie	*z1;

	std::cout << RED << "[HEAP]" << RESET << " Creating zombie...\n";
	z1 = newZombie("Foo");
	z1->announce();
	delete(z1);
	std::cout << RED << "[HEAP]" << RESET << " Destroying zombie...\n";
	std::cout << RED << "[STACK]" << RESET << " Creating zombie...\n";
	randomChump("Emad");
	std::cout << RED << "[STACK]" << RESET << " Zombie destroyed automatically\n";
}
