/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 02:46:03 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/31 10:40:07 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
	: name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
			: name(name),
			grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
	: name(obj.name), grade(obj.grade) {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrement()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade++;
}

void	Bureaucrat::signAForm(AForm &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout	<< this->getName()
					<< " signed "
					<< obj.getName()
					<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr	<< this->getName()
					<< " couldn't sign "
					<< obj.getName() 
					<< " because " << e.what()
					<< std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& obj)
{
	out	<< obj.getName()
		<< ", bureaucrat grade "
		<< obj.getGrade()
		<< std::endl;
	return (out);
}
