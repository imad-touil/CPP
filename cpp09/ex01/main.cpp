/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:26:20 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/30 14:20:44 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Error\n", 1);
	std::string	input = av[1];
	std::stack<int>	stack;
	int i = -1;
	while (input[++i])
	{
		if (input[i] == ' ')
			continue ;
		else if (std::isdigit(input[i]))
			stack.push(input[i] - '0');
		else if (is_operator(input[i]))
		{
			if (stack.size() < 2)
				return (std::cout << "Error\n", 1);
			int right = stack.top();
			stack.pop();
			int left = stack.top();
			stack.pop();
			if (input[i] == '/' && right == 0)
				return (std::cout << "Error\n", 1);
			stack.push(calculate(right, left, input[i]));
		}
		else
			return (std::cout << "Error\n", 1);
	}
	if (stack.size() != 1)
		return (std::cerr << "Error\n", 1);
	std::cout << stack.top() << '\n';
}
