/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:18:24 by imatouil          #+#    #+#             */
/*   Updated: 2026/09/02 16:53:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	loadData(filename);
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
	: _DataBase(obj._DataBase) {};

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != & obj)
		_DataBase = obj._DataBase;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {};

void	BitcoinExchange::loadData(const std::string& filename)
{
	
}
