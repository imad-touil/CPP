/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:44:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/03 23:46:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) { (void)obj; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& obj) { (void)obj; return (*this); }

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::detectType(const std::string&literal)
{
	if (literal == "nan" || literal == "nanf"
		|| literal == "-inf" || literal == "+inf"
		|| literal == "-inff" || literal == "+inff")
		return (PSEUDO);
	else if (literal.length() == 1 && !isdigit(literal[0]))
		return (CHAR);
	try
	{
		std::stoi(literal);
		return (INT);
	}
	catch (...) {}
	if (literal[literal.length() - 1] == 'f')
	{
		try
			{
				std::stof(literal);
				return (FLOAT);
			}
		catch (...) {}
	}
	try
	{
		std::stod(literal);
		return (DOUBLE);
	}
	catch (...) {}
	return (INVALID);
}

void	ScalarConverter::convert(const std::string& literal)
{
	
}
