/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/24 12:53:47 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "|----- Default Construction -----|" << std::endl;
    ScavTrap a;

    std::cout << "\n|----- Name Construction -----|" << std::endl;
    ScavTrap b("Guardian");

    std::cout << "\n|----- Attack Test -----|" << std::endl;
    b.attack("Enemy");

    std::cout << "\n|----- Guard Gate Mode -----|" << std::endl;
    b.guardGate();

    std::cout << "\n|----- Copy Constructor Test -----|" << std::endl;
    ScavTrap c(b);

    std::cout << "\n|----- Assignment Operator Test -----|" << std::endl;
    ScavTrap d;
    d = b;

    std::cout << "\n----- Destruction Order Test -----" << std::endl;

    return 0;
}
