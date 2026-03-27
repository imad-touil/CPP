/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:01:45 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/27 13:07:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// OCF
Form::Form()
	:	name("Default"),
		isSigned(false),
		gradeToSign(150),
		gradeToExecute(150) {}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute)
	:	name(name),
		isSigned(false),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& obj)
	:	name(obj.name),
		isSigned(obj.isSigned),
		gradeToSign(obj.gradeToSign),
		gradeToExecute(obj.gradeToExecute) {}

Form&	Form::operator=(const Form& obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

Form::~Form() {}

// Getters
const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade Too High!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade Too Low!");
}


// <<
std::ostream&	operator<<(std::ostream& out, const Form& obj)
{
	out	<< "Form Name: " << obj.getName() << std::endl
		<< "Signed: " << (obj.getIsSigned() ? "Yes" : "No") << std::endl
		<< "Grade To Sign " << obj.getGradeToSign() << std::endl
		<< "Grade To Execute " << obj.getGradeToExecute() << std::endl;
	return (out);
}
