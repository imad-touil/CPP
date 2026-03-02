/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:57 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/27 14:39:55 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n========== BASIC CONSTRUCTION ==========\n";
    DiamondTrap a("Imad");

    std::cout << "\n========== WHO AM I ==========\n";
    a.whoAmI();

    std::cout << "\n========== ATTACK TEST ==========\n";
    a.attack("Enemy");

    // std::cout << "\n========== SCAVTRAP FUNCTION ==========\n";
    // a.guardGate();

    // std::cout << "\n========== FRAGTRAP FUNCTION ==========\n";
    // a.highFivesGuys();

    // std::cout << "\n========== COPY CONSTRUCTOR ==========\n";
    // DiamondTrap b(a);
    // b.whoAmI();

    // std::cout << "\n========== ASSIGNMENT OPERATOR ==========\n";
    // DiamondTrap c("Other");
    // c = a;
    // c.whoAmI();

    std::cout << "\n========== END OF PROGRAM ==========\n";
    return 0;
}