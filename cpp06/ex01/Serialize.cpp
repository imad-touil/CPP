/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:14:23 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/08 13:11:34 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::Serialize(const Serialize& obj) { (void)obj; }

Serialize&	Serialize::operator=(const Serialize& obj) { (void)obj; return (*this); }

Serialize::~Serialize() {}