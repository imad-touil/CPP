/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:47:22 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/09 17:54:28 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cmath>

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

	// Detect type
	e_type	detectType(const std::string& literal);
	int		isPseudo(const std::string& literal);
	int		isChar(const std::string& literal);
	int		isInt(const std::string& literal);
	int		isDouble(const std::string& literal);
	int		isFloat(const std::string& literal);
	
	// Handel type
	void	handelInt(const std::string& literal);
	void	handelFloat(const std::string& literal);
	void	handelDouble(const std::string& literal);
	void	handelPseudo(const std::string& literal);
	void	handelInvalid(const std::string& literal);

#endif