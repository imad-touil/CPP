/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 20:43:10 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/15 22:52:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ll()
{
	system("leaks -q a.out");
}

int	main(void)
{
	// int	*ptr;

	// atexit(ll);
	// ptr = new int [5];
	// for (int i = 0; i < 5; i++)
	// 	ptr[i] = i + 1337;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << ptr[i] << " ";
	// std::cout << std::endl;
	// delete[] ptr;
}
