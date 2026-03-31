/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 18:51:39 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

# define RED "\e[31m"
# define GREEN "\033[32m"
# define RESET "\e[0m"
# define BLUE   "\033[34m"

int main()
{
    srand(time(NULL));

    std::cout << "========== BASIC TEST ==========\n";
    {
        Bureaucrat boss("Boss", 1);

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur");

        boss.signAForm(shrub);
        boss.signAForm(robot);
        boss.signAForm(pardon);

        boss.executeForm(shrub);
        boss.executeForm(robot);
        boss.executeForm(pardon);
    }

    std::cout << "\n========== NOT SIGNED TEST ==========\n";
    {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm shrub("garden");

        // try execute without signing
        boss.executeForm(shrub);
    }

    std::cout << "\n========== LOW GRADE TEST ==========\n";
    {
        Bureaucrat low("Low", 150);
        ShrubberyCreationForm shrub("park");

        low.signAForm(shrub);      // should fail
        low.executeForm(shrub);    // should fail
    }

    std::cout << "\n========== MIXED TEST ==========\n";
    {
        Bureaucrat mid("Mid", 100);
        Bureaucrat high("High", 1);

        RobotomyRequestForm robot("Marvin");

        mid.signAForm(robot);   // maybe fail (grade too low)
        high.signAForm(robot);  // should succeed

        mid.executeForm(robot);   // should fail
        high.executeForm(robot);  // should work
    }

    std::cout << "\n========== RANDOM TEST (Robotomy) ==========\n";
    {
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm robot("C3PO");

        boss.signAForm(robot);

        for (int i = 0; i < 5; i++)
        {
            boss.executeForm(robot);
        }
    }

    std::cout << "\n========== PRESIDENT TEST ==========\n";
    {
        Bureaucrat president("President", 1);
        PresidentialPardonForm pardon("Ford");

        president.signAForm(pardon);
        president.executeForm(pardon);
    }

    return 0;
}
