/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:23:29 by emad              #+#    #+#             */
/*   Updated: 2026/09/29 10:56:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

void	BitcoinExchange::loadDataBase(const std::string& filename)
{
	std::fstream	file(filename.c_str());
	
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::stringstream	ss(line);
		std::string	date;
		std::string	rate;

		std::getline(ss, date);
		std::getline(ss, rate);
	}
}