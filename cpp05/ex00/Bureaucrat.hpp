/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 02:46:08 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/12 23:24:21 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
};

#endif