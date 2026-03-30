/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:01:50 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/30 14:37:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
		// OCF
		Form();
		Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& obj);
		Form&	operator=(const Form& obj);
		~Form();

		// Getters
		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		// member functions...
		void				beSigned(const Bureaucrat& obj);

		// exception
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif
