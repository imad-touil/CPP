/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:28:06 by emad              #+#    #+#             */
/*   Updated: 2026/04/07 12:17:48 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int isPseudo(const std::string& literal)
{
    if (literal == "nan" || literal == "nanf"
		|| literal == "-inf" || literal == "+inf"
		|| literal == "-inff" || literal == "+inff")
		return (1);
    return (0);
}

int isChar(const std::string& literal)
{
    if (literal.length() == 1 && !isdigit(literal[0]))
		return (1);
    return (0);
}

int isInt(const std::string& literal)
{
    int i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while (literal[i] >= '0' && literal[i] <= '9')
        i++;
    if (literal[i] != '\0')
        return (0);
    return (1);
}

e_type	detectType(const std::string& literal)
{
	if (isPseudo(literal))
		return (PSEUDO);
	else if (isChar(literal))
		return (CHAR);
	else if (isInt(literal))
        return (INT);
	return (INVALID);
}

