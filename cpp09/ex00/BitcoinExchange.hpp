/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:18:27 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/29 10:55:29 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

#define RESET  "\033[0m"
#define RED     "\033[31m"

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_dataBase;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange&	operator=(const BitcoinExchange& obj);
		~BitcoinExchange();

		void	loadDataBase(const std::string& filename);
		void	processInput(const std::string& filename);
};
