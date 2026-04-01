/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 23:56:32 by imatouil         ###   ########.fr       */
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

    std::cout << BLUE << "|---------- Home ----------|\n" << RESET;
    {
		std::cout << GREEN;
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm shrub("Home");
        boss.signAForm(shrub);
        boss.executeForm(shrub);
		// ------------------------------
		std::cout << RED;
        Bureaucrat junior("AlmostBoss", 138);
        ShrubberyCreationForm sh("Town");
        junior.executeForm(sh);
        junior.signAForm(sh);
        junior.executeForm(sh);
		std::cout << RESET;
    }

    std::cout << BLUE << "|---------- Apollo ----------|\n" << RESET;
    {
		std::cout << GREEN;
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm robot("Apollo");
        boss.signAForm(robot);
		for (int i = 0; i < 4; i++)
        	boss.executeForm(robot);
		// ------------------------------
		std::cout << RED;
        Bureaucrat fake("AlmostBoss", 46);
        RobotomyRequestForm fakerobot("Tesla");
        fake.executeForm(fakerobot);
        fake.signAForm(fakerobot);
        fake.executeForm(fakerobot);
		std::cout << RESET;
    }

    std::cout << BLUE << "|---------- Hero ----------|\n" << RESET;
    {
		std::cout << GREEN;
        Bureaucrat boss("Boss", 1);
        PresidentialPardonForm pardon("Hero");
        boss.signAForm(pardon);
		boss.executeForm(pardon);
		// ------------------------------
		std::cout << RED;
        Bureaucrat fake("AlmostBoss", 7);
        PresidentialPardonForm pp("Criminal");
        fake.executeForm(pp);
        fake.signAForm(pp);
        fake.executeForm(pp);
		std::cout << RESET;
    }
    return 0;
}
