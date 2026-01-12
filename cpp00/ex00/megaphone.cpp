/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:13:44 by imatouil          #+#    #+#             */
/*   Updated: 2025/12/16 11:13:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int				i;
	int				j;
	unsigned char	c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		j = 0;
		while (++j < ac)
		{
			i = -1;
			while (av[j][++i])
			{
				c = av[j][i];
				std::cout << (char)toupper(c);
			}
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
