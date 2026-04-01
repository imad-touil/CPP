/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:51:18 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/01 12:08:13 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& obj)
{
	(void)obj;
}

Intern&	Intern::operator=(const Intern& obj)
{
	(void)obj;
	return (*this);
}

Intern::~Intern() {}

AForm*	createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm*	createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm*	createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string formName, std::string target) const
{
	AForm*	(*functions[3])(std::string) = 
	{
		createShrubbery,
		createRobotomy,
		createPresidential
	};
	std::string	forms[3] =
	{
		"shrubbery creation",
		"robotomy request",
        "presidential pardon"
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			std::cout	<< "Intern creates "
						<< target << "\n";
			return (functions[i](target));
		}
	}
	std::cout	<< "Error: Intern cannot create "
				<< formName << " because it doesn't exist." << std::endl;
    return NULL;
}
