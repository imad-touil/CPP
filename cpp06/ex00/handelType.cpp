/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handelType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 22:40:53 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/09 17:57:10 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static void	printChar(double d)
{
	if (std::isnan(d) || std::isinf(d)
		|| d < std::numeric_limits<char>::min()
		|| d > std::numeric_limits<char>::max())
		std::cout << "char: impossible\n";
	else if (!isprint(static_cast<int>(d)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(d) << "'\n";
}

static void	printInt(double d)
{
	if (std::isnan(d) || std::isinf(d)
		|| d > std::numeric_limits<int>::max()
		|| d < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";
}

static void	printFloatDouble(double d)
{
	if (d == static_cast<int>(d))
		std::cout << std::fixed << std::setprecision(1);
	else
		std::cout << std::fixed << std::setprecision(6);

	std::cout << "float: " << static_cast<float>(d) << "f\n";
	std::cout << "double: " << d << "\n";
}
void	handelInt(const std::string& literal)
{
	long val = std::strtol(literal.c_str(), NULL, 10);
	double d = static_cast<double>(val);

	printChar(d);
	printInt(d);
	printFloatDouble(d);
}

void	handelFloat(const std::string& literal)
{
	std::string sub = literal.substr(0, literal.length() - 1);
	double d = std::strtod(sub.c_str(), NULL);

	printChar(d);
	printInt(d);
	printFloatDouble(d);
}

void	handelDouble(const std::string& literal)
{
	double d = std::strtod(literal.c_str(), NULL);

	printChar(d);
	printInt(d);
	printFloatDouble(d);
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