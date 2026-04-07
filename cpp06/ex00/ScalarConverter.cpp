/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:44:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/07 22:04:00 by imatouil         ###   ########.fr       */
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

void	handelInt(const std::string& literal)
{
	std::stringstream	ss(literal);
	long				val;
	ss >> val;

	if (val < 0 || val > 127)
		std::cout << "char: impossible\n";
	else if (!isprint(static_cast<int>(val)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(val) << "'\n";
	if (val > INT_MAX || val < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(val) << "\n";
	std::cout	<< std::fixed << std::setprecision(1) << "float: "
				<< static_cast<float>(val) << "f\n";
	std::cout	<< std::fixed << std::setprecision(1) << "double: "
				<< static_cast<double>(val) << "\n";
}

void	handelFloat(const std::string& literal)
{
	std::string sub = literal.substr(0, literal.length() - 1);

	std::stringstream ss(sub);
	double d;
	ss >> d;
	if (d < 0 || d > 127)
		std::cout << "char: impossible\n";
	else if (!isprint(static_cast<int>(d)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	int len = 0;
	int i = literal.length() - 1;
	while (literal[--i] != '.')
		len++;
	std::cout	<< std::fixed << std::setprecision(len) << "float: "
				<< static_cast<float>(d) << "f\n";
	std::cout << "double: " << d;
	if (d == (int)d)
		std::cout << ".0";
	std::cout << "\n";
}

void	handelDouble(const std::string& literal)
{
	std::stringstream ss(literal);
	double d;
	ss >> d;
	if (d < 0 || d > 127)
		std::cout << "char: impossible\n";
	else if (!isprint(static_cast<int>(d)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
	std::cout << "float: " << static_cast<float>(d);
	if (d == (int)d)
		std::cout << ".0";
	std::cout << "f\n";
	std::cout << "double: " << d;
	if (d == (int)d)
		std::cout << ".0";
	std::cout << "\n";
}

void	handelPseudo(const std::string& literal)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";

	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	}
}

void	handelInvalid(const std::string& literal)
{
	(void)literal;
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible\n";
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
