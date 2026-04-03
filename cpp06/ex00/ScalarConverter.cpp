/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:44:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/03 22:45:18 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) { (void)obj; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& obj) { (void)obj; return (*this); }

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string& literal)
{
	std::cout << static_cast<int>(literal[0])<<std::endl;
	std::cout << static_cast<double>(literal[0])<<std::endl;
}
