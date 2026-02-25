/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/25 02:53:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "|----- Default Construction -----|" << std::endl;
    FragTrap a;

    std::cout << "\n|----- Name Construction -----|" << std::endl;
    FragTrap b("Guardian");

    std::cout << "\n|----- Attack Test -----|" << std::endl;
    b.attack("Enemy");

    std::cout << "\n|----- Guard Gate Mode -----|" << std::endl;
    b.highFivesGuys();

    std::cout << "\n|----- Copy Constructor Test -----|" << std::endl;
    FragTrap c(b);

    std::cout << "\n|----- Assignment Operator Test -----|" << std::endl;
    FragTrap d;
    d = b;

    std::cout << "\n----- Destruction Order Test -----" << std::endl;

    return 0;
}
