/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:26:24 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/30 14:08:45 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	is_operator(int c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

int		calculate(int right, int left, char operatoor)
{
	if (operatoor == '+')
		return (left + right);
	else if (operatoor == '-')
		return (left - right);
	else if (operatoor == '*')
		return (left * right);
	else
		return (left / right);
	throw std::runtime_error("Error");
}
