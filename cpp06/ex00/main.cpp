/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:46:02 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/09 17:39:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

# define RED "\e[31m"
# define RESET "\e[0m"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << RED << "Usage: ./convert <literal>\n", 1);
	ScalarConverter::convert(av[1]);
	return (0);
}
