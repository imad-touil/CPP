/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/23 19:17:30 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "|---------- Creating ClapTrap A ----------|" << std::endl;
    ClapTrap a("Imad");

    std::cout << "\n|---------- Basic Actions ----------|" << std::endl;
    a.attack("Enemy");
    a.takeDamage(5);
    a.beRepaired(3);

    std::cout << "\n|---------- Energy Drain Test ----------|" << std::endl;
    for (int i = 0; i < 11; i++)
        a.attack("Target");

    std::cout << "\n|---------- Death Test ----------|" << std::endl;
    a.takeDamage(100);
    a.attack("Enemy");
    a.beRepaired(5);

    std::cout << "\n|---------- Copy Constructor Test ----------|" << std::endl;
    ClapTrap b(a);

    std::cout << "\n|---------- Assignment Operator Test ----------|" << std::endl;
    ClapTrap c;
    c = a;

    std::cout << "\n|---------- End of Program ----------|" << std::endl;
    return 0;
}