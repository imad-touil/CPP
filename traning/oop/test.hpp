/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:26:36 by imatouil          #+#    #+#             */
/*   Updated: 2025/12/16 20:18:33 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

class	Programmer
{
	private:
		std::string	name;
		int			age;
		int			salary;
	public:
		std::string	GetName() const;
		void	SetName(std::string name);
};

#endif
