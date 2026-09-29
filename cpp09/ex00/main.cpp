/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:20:25 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/29 10:02:58 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr	<< RED << "Error: could not open file."
					<< RESET << std::endl;
		return (1);
	}
	std::map<std::string, double> database;

	database["2011-01-03"] = 0.3;
	database["2011-01-04"] = 0.4;
	database["2011-01-05"] = 0.5;

	std::cout << database["2011-01-03"] << std::endl;
	std::cout << database["2011-01-04"] << std::endl;
	std::cout << av[1] << std::endl;

	return 0;
}
