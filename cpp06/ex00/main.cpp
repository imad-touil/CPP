/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:46:02 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/03 22:41:24 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "KYS\n", 1);
	ScalarConverter::convert(av[1]);
}