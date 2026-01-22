/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:56:56 by imatouil          #+#    #+#             */
/*   Updated: 2026/01/22 17:43:20 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

# define RED "\033[31m"

class Sed
{
	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;
	public:
		Sed(const std::string &filename,
			const std::string &s1,
			const std::string &s2);
		~Sed();
		bool		checker();
		std::string	replace(const std::string &line);
};

#endif