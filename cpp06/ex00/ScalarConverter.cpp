/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:44:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/07 11:56:06 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) { (void)obj; }

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& obj) { (void)obj; return (*this); }

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string& literal)
{
	std::cout << detectType(literal) << std::endl;
	std::cout << literal << std::endl;
}
