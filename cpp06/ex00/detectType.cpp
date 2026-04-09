/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:28:06 by emad              #+#    #+#             */
/*   Updated: 2026/04/09 13:17:07 by imatouil         ###   ########.fr       */
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

int isDouble(const std::string& literal)
{
	if (literal.find('.') == std::string::npos)
		return (0);
	std::stringstream ss(literal);
	double value;
	ss >> value;
	return (!ss.fail() && ss.eof());
}

int isFloat(const std::string& literal)
{
	if (literal.length() < 2 || literal[literal.length() - 1] != 'f')
		return (0);
	if (literal.find('.') == std::string::npos)
		return (0);
	std::string sub = literal.substr(0, literal.length() - 1);
	std::stringstream ss(sub);
	double v;
	ss >> v;
	return (!ss.fail() && ss.eof());
}

e_type	detectType(const std::string& literal)
{
	if (isPseudo(literal))
		return (PSEUDO);
	else if (isChar(literal))
		return (CHAR);
	else if (isInt(literal))
        return (INT);
	else if (isFloat(literal))
        return (FLOAT);
	else if (isDouble(literal))
        return (DOUBLE);
	return (INVALID);
}

