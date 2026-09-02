/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:18:27 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/02 16:53:15 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#define RESET  "\033[0m"
#define RED     "\033[31m"

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_DataBase;
		const std::string&				filename;
		void	loadData();
		void	checkLine(std::string& line);
		bool	isValidDate(std::string& date) const;
		bool	isValidValue(double	value) const;
		double	getExchangeRate(const std::string& date) const;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange&	operator=(const BitcoinExchange& obj);
		~BitcoinExchange();
		void	Exchange(const std::string& filename);
};
