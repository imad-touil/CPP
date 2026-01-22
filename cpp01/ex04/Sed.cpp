/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:01:39 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 17:48:51 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string &filename,
		const std::string &s1,
		const std::string &s2)
	: filename(filename), s1(s1), s2(s2)
{		
}

Sed::~Sed() {}

bool	Sed::checker()
{
	std::string		line;
	std::ifstream	infile(filename.c_str());

	if (!infile)
	{
		std::cerr << RED << "Cannot Open File" << std::endl;
		return (false);
	}
	std::ofstream	oufile((filename + ".replace").c_str());
	if (!oufile)
	{
		std::cerr << RED << "Cannot Create File" << std::endl;
		return (infile.close(), false);
	}
	while (std::getline(infile, line))
	{
		oufile << replace(line);
		if (!infile.eof())
			oufile << "\n";
	}
	if (!infile.eof())
	{
		std::cerr << RED << "File read error" << std::endl;
		return (infile.close(), oufile.close(), false);
	}
	return (infile.close(), oufile.close(), true);
}

std::string	Sed::replace(const std::string &line)
{
	std::string	result;
	size_t		pos = 0;
	size_t		foundPos;

	while ((foundPos = line.find(s1, pos)) != std::string::npos)
	{
		result.append(line, pos, foundPos - pos);
		result.append(s2);
		pos = foundPos + s1.length();
	}
	result.append(line.substr(pos));
	return (result);
}
