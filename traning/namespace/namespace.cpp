/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:31:03 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/25 16:46:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// In C++, a namespace is a named scope
// or container that is used to organize
// and enclose a collection of code elements,
// such as variables, functions, classes, and
// other namespaces. They are mainly used to
// divide and manage the code base, giving
// developers control over name collisions 
// and the specialization of code.

#include <iostream>
using namespace std;

int	nbr = 10;

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
		std::cout << "adkil ismaka: ";
		std::cin >> name;
		std::cout << "Salam Alikum, Marhba bik " << name << std::endl;
	}
	namespace Darija
	{
		void	SayHello(std::string name)
		{
			std::cout << "Chni ismk: ";
			std::cin >> name;
			std::cout << "Chfiha Khay " << name << ", Mdakham Hani?" << std::endl;
		}
	}
}

namespace English
{
	void SayHello(std::string name)
	{
		std::cout << "Enter Your Name: ";
		std::cin >> name;
		std::cout << "Hello, " << name << "! Ur Welcome " << std::endl;
	}
	void	tot(void)
	{
		std::cout << "Hello Brother\n";
	}
}

namespace Arabic
{
	void	tot(void)
	{
		std::cout << "Hello Brother\n";
	}
}

// inline namespace NfsLine  // error: inline namespaces are a C++11 feature;
// {
// 	void	ll(void)
// 	{
// 		std::cout << "Inline namespace\n";
// 	}
// }

namespace
{
	int value = 10;
}


// using namespace Arabic;

namespace aa = Arabic;

int	main(int ac, char **av)
{
	using namespace Paris;
	int	nbr;
	int	value = 2147483647;

	nbr = 15;
	if (ac == 1337)
		std::cout << av[2];
	// x = 19;
	// std::cout << increment(&x) << std::endl;
	// std::string name;
	// std::cin >> name;
	// Arabic::SayHello(name);
	// Arabic::SayHello(name);
	// Darija::SayHello(name);
	aa::tot();
	cout << ::value << endl;
	cout << value << endl;
	cout << ::nbr << endl;
}
