/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:01:45 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 11:53:45 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// OCF
AForm::AForm()
	:	name("Default"),
		isSigned(false),
		gradeToSign(150),
		gradeToExecute(150) {}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute)
	:	name(name),
		isSigned(false),
		gradeToSign(gradeToSign),
		gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& obj)
	:	name(obj.name),
		isSigned(obj.isSigned),
		gradeToSign(obj.gradeToSign),
		gradeToExecute(obj.gradeToExecute) {}

AForm&	AForm::operator=(const AForm& obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

AForm::~AForm() {}

// Getters
const std::string&	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

int	AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	this->isSigned = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!isSigned)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw	AForm::GradeTooLowException();
	executeAction();
}

// exception
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Grade Too High!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Grade Too Low!");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

// <<
std::ostream&	operator<<(std::ostream& out, const AForm& obj)
{
	out	<< "AForm Name: " << obj.getName() << std::endl
		<< "Signed: " << (obj.getIsSigned() ? "Yes" : "No") << std::endl
		<< "Grade To Sign: " << obj.getGradeToSign() << std::endl
		<< "Grade To Execute: " << obj.getGradeToExecute() << std::endl;
	return (out);
}
