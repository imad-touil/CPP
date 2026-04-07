/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:44:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/07 22:40:52 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) { (void)obj; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& obj) { (void)obj; return (*this); }

ScalarConverter::~ScalarConverter() {}

void	handelChar(const std::string& literal)
{
	char	c = literal[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f\n";
	std::cout << "double: " << static_cast<double>(c) << ".0\n";
}

void	ScalarConverter::convert(const std::string& literal)
{
		e_type	type = detectType(literal);
	switch (type)
	{
		case CHAR:
			handelChar(literal);
			break;
		case INT:
			handelInt(literal);
			break;
		case DOUBLE:
			handelDouble(literal);
			break;
		case FLOAT:
			handelFloat(literal);
			break;
		case PSEUDO:
			handelPseudo(literal);
			break;
		default:
			handelInvalid(literal);
			break;
	}
}
