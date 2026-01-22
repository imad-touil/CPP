/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:20:37 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 16:56:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << RED << "Usage: " << av[0]
					<< " <filename> <s1> <s2>" << std::endl;
        return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cerr << RED << "<s1> Cannot Be Empty" << std::endl;
		return (1);
	}
	Sed	sed(av[1], av[2], av[3]);
	if (!sed.checker())
		return (1);
	return (0);
}
