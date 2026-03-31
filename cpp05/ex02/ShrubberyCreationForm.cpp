/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:28:20 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 13:04:27 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
	: ShrubberyCreationForm(target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
		target = obj.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::executeAction() const
{
	std::ofstream	file((target + "_shrubbery").c_str());
	if (!file)
		return ;
	file << "        /\\\n";
	file << "       /**\\\n";
	file << "      /****\\\n";
	file << "     /******\\\n";
	file << "    /********\\\n";
	file << "        ||\n";
	file << "        ||\n";
	file << "        ||\n";
	file.close();
}
