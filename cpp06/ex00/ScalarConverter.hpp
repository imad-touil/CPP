/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:47:22 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/07 19:48:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

enum e_type
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
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