/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 10:38:50 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

# define RED "\e[31m"
# define GREEN "\033[32m"
# define RESET "\e[0m"
# define BLUE   "\033[34m"

// void	ll(void)
// {
// 	system("leaks -q program");
// }
// atexit(ll);

int main(void)
{
	std::cout << BLUE << "|---------- 👍 ----------|\n" << RESET;
    Bureaucrat b1("Bob", 40);
    AForm f1("Contract", 45, 20);
    std::cout << b1; 
    std::cout << f1;
	std::cout << RESET;
    std::cout << BLUE <<  "|--- Try signing ---|\n" << RESET;
	std::cout << GREEN;
    b1.signAForm(f1);
	std::cout << RESET;
    std::cout << f1;
	
	std::cout << BLUE << "|---------- 👍 ----------|\n" << RESET;
    Bureaucrat boss("Boss", 1);
    AForm topSecret("TopSecret", 1, 1);
    std::cout << boss;
    std::cout << topSecret;
    std::cout << BLUE <<  "|--- Try signing ---|\n" << RESET;
	std::cout << GREEN;
    boss.signAForm(topSecret);
	std::cout << RESET;
    std::cout << topSecret;

	std::cout << BLUE << "|---------- 👎 ----------|\n" << RESET;
    Bureaucrat b2("Bob", 40);
    AForm f2("Contract", 1, 20);
    std::cout << b2; 
    std::cout << f2;
    std::cout << BLUE <<  "|--- Try signing ---|\n" << RESET;
	std::cout << RED;
    b2.signAForm(f2);
	std::cout << RESET;
    std::cout << f2;
	std::cout << BLUE << "|---------- EXCEPTIONS ----------|\n" << RESET;
	std::cout << RED;
    try
    {
        AForm f3("BadAFormHigh", 0, 20);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        AForm f4("BadAFormLow", 20, 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        AForm f5("BadAFormHigh", 151, 10);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        AForm f6("BadAFormLow", 10, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << RESET;
    return 0;
}
