/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/30 19:04:31 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// void	ll(void)
// {
// 	system("leaks -q program");
// }
// atexit(ll);

int main(void)
{
	std::cout << "\n|---------- 👍 ----------|" << std::endl;

    Bureaucrat b1("Bob", 50);
    Form f1("Contract", 45, 20);

    std::cout << b1 << std::endl; 
    std::cout << f1 << std::endl;

    std::cout << "\n--- Try signing (should fail) ---\n";
    b1.signForm(f1);

    std::cout << "\n========== SUCCESS TEST ==========\n";

    Bureaucrat b2("Alice", 40);

    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;

    std::cout << "\n--- Try signing (should succeed) ---\n";
    b2.signForm(f1);

    std::cout << f1 << std::endl;

    std::cout << "\n========== FORM EXCEPTIONS ==========\n";

    try
    {
        Form f2("BadFormHigh", 0, 20);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Form f3("BadFormLow", 151, 20);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n========== BUREAUCRAT EXCEPTIONS ==========\n";

    try
    {
        Bureaucrat b3("TooHigh", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b4("TooLow", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n========== MULTIPLE SIGN TEST ==========\n";

    Bureaucrat boss("Boss", 1);
    Form topSecret("TopSecret", 1, 1);

    boss.signForm(topSecret);
    boss.signForm(topSecret);

    std::cout << topSecret << std::endl;

    return 0;
}
