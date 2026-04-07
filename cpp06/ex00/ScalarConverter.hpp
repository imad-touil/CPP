/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:47:22 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/07 11:32:40 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{
	private:
	// OCF
	ScalarConverter();
	ScalarConverter(const ScalarConverter& obj);
	ScalarConverter&	operator=(const ScalarConverter& obj);
	~ScalarConverter();
	// Member Method
	public:
		static void		convert(const std::string& literal);
	};
	e_type	detectType(const std::string& literal);
	int		isPseudo(const std::string& literal);
	int		isChar(const std::string& literal);
	int		isInt(const std::string& literal);
	int		isDouble(const std::string& literal);
	int		isFloat(const std::string& literal);
	

#endif