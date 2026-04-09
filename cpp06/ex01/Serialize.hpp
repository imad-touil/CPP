/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:14:27 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/08 21:50:55 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <stdint.h>

#include "Data.hpp"


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
		static Data*				deserialize(uintptr_t raw);
};

#endif