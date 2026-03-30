/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:22:05 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/30 14:28:16 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// void	ll(void)
// {
// 	system("leaks -q program");
// }
// atexit(ll);

int	main(void)
{
	std::cout << "\n|---------- 👍 ----------|" << std::endl;
	try
	{
		Form	f("Emad", 10, 13);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << "Excep: " << e.what() << std::endl;
	}
	std::cout << "LOL\n";
}
