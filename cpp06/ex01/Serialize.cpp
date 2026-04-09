/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:14:23 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/09 17:37:45 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "Data.hpp"

Serialize::Serialize() {}

Serialize::Serialize(const Serialize& obj) { (void)obj; }

Serialize&	Serialize::operator=(const Serialize& obj) { (void)obj; return (*this); }

Serialize::~Serialize() {}

uintptr_t   Serialize::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   Serialize::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
