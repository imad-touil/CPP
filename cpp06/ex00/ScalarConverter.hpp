/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:47:22 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/03 19:49:04 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

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
		static void	convert(const std::string& literal);
};

#endif