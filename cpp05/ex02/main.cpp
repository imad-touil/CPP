/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:14:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 14:50:07 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

# define RED "\e[31m"
# define GREEN "\033[32m"
# define RESET "\e[0m"
# define BLUE   "\033[34m"

int main()
{
    try
    {
        Bureaucrat bob("Bob", 1); // high rank

        ShrubberyCreationForm form("saf");

        // try executing before signing ❌
        bob.executeForm(form);

        // sign the form ✅
        bob.signAForm(form);

        // execute the form ✅
        bob.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}