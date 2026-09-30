/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:23:29 by emad              #+#    #+#             */
/*   Updated: 2026/09/30 11:30:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::~BitcoinExchange() {};

bool	BitcoinExchange::validValue(const std::string& value) const
{
	int dot_count = 0;
	bool digit = false;

	if (value.empty())
		return (false);
	for (size_t i = 0; i < value.size(); i++)
	{
		if (std::isdigit(value[i]))
			digit = true;
		else if (value[i] == '.')
			dot_count++;
		else if (value[i] == '-' && i == 0)
			continue;
		else
			return (false);
	}
	if (dot_count > 1 || !digit)
		return (false);
	return (true);
}

bool	BitcoinExchange::validDate(const std::string& date) const
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return (false);
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (year > 2026 || month < 1 || month > 12)
		return (false);
	int daysInMonth;
	if (month == 2)
		daysInMonth = 29;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		daysInMonth = 30;
	else
		daysInMonth = 31;
	if (day < 1 || day > daysInMonth)
		return (false);
	return (true);
}

void	BitcoinExchange::loadDataBase(const std::string& filename)
{
	std::ifstream	file(filename.c_str());
	
	if (!file.is_open())
		throw std::runtime_error("Error: could not open data.csv.");
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::stringstream	ss(line);
		std::string	date;
		std::string	rate;
		std::getline(ss, date, ',');
		std::getline(ss, rate, ',');
		_dataBase[date] = std::atof(rate.c_str());
	}
}

void	BitcoinExchange::processInput(const std::string& filename)
{
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	std::string line;
	std::getline(file, line);
	if (line != "date | value")
		throw std::runtime_error("Error: wrong format file.");
	while (std::getline(file, line))
	{
		std::stringstream	ss(line);
		std::string			date, separator, value, extra;
		ss >> date >> separator >> value;
		if (date.empty() || separator != "|" || value.empty() || (ss >> extra))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		else if (!validDate(date) || !validValue(value))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		double	amount = std::atof(value.c_str());
		if (amount < 0 || amount > 1000)
		{
			if (amount < 0)
			{
				std::cout << "Error: not a positive number.\n";
				continue ;
			}
			std::cout << "Error: too large a number.\n";
			continue ;
		}
		std::map<std::string, double>::iterator it;
		it = _dataBase.lower_bound(date);
		if (it == _dataBase.end())
		{
			--it;
		}
		else if (it->first != date)
		{
			if (it == _dataBase.begin())
			{
				std::cout << "Error: no earlier date available." << std::endl;
				continue;
			}
			--it;
		}
		double result = amount * it->second;
		std::cout << date << " => "
				  << amount << " = "
				  << result << std::endl;
	}
}
