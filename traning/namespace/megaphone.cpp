/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:31:03 by imatouil          #+#    #+#             */
/*   Updated: 2025/10/27 13:10:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace Morocco 
{
	int	x = 1337;
}

namespace Paris
{
	int	x = 42;
}

int	increment(int *x)
{
	*x += 1;
	return (*x);
}

namespace Arabic
{
	void SayHello(std::string name)
	{
		std::cin >> name;
		std::cout << "Salam Alikum, Marhba bik " << name << std::endl;
	}
}

namespace English
{
	void SayHello(std::string name)
	{
		std::cin >> name;
		std::cout << "Hello, Ur Welcome " << name << std::endl;
	}
}

int	main(int ac, char **av)
{
	using namespace Paris;
	// int	x;

	if (ac == 1337)
		std::cout << av[2];
	// x = 19;
	// std::cout << increment(&x) << std::endl;
	std::string name;
	// std::cin >> name;
	Arabic::SayHello(name);
	English::SayHello(name);
}
