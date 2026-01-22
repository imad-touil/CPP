/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:22:06 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 21:16:16 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << RED << "[----- Test1 ==|DEBUG|== -----]" << RESET << std::endl;
	harl.complain("DEBUG");
	std::cout << RED << "[----- Test2 ==|INFO|== -----]" << RESET << std::endl;
	harl.complain("INFO");
	std::cout << RED << "[----- Test3 ==|WARNING|== -----]" << RESET << std::endl;
	harl.complain("WARNING");
	std::cout << RED << "[----- Test4 ==|ERROR|== -----]" << RESET << std::endl;
	harl.complain("ERROR");
}