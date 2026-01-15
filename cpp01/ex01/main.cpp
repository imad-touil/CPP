/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:34:55 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/15 15:27:41 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N;
	Zombie	*z;

	N = 5;
	std::cout << "Creatin zombie horde...\n";
	z = zombieHorde(N, "Foo");
	if (!z)
	{
		std::cerr << "Creation zombies Faied\n";
		return (1);
	}
	std::cout << "Announcing zombie:\n";
	for (int i = 0; i < N; i++)
		z[i].announce();
	std::cout << "Destroy zombie horde...\n";
	delete[] z;
	return (0);
}
