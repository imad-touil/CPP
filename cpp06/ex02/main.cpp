/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:40:09 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/09 17:35:35 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// void	ll()
// {
// 	system("leaks -q program");
// }
// 	atexit(ll);

int	main(void)
{
	srand(time(NULL));
	std::cout << "|-------- imatouil --------|\n";
	for (int i = 0; i < 3; i++)
	{
		Base* p = generate();
		std::cout << "PTR: ";
		identify(p);
		std::cout << "REF: ";
		identify(*p);
		delete p;
	}
	return (0);
}