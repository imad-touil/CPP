/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:14:27 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/08 13:16:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

class Serialize
{
	private:
		// OCF
		Serialize();
		Serialize(const Serialize& obj);
		Serialize&	operator=(const Serialize& obj);
		~Serialize();
	public:
		static uintptr_t	serialize(Data* ptr);
};

#endif