/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 02:38:40 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/06 00:14:06 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		std::string	name;
	public:
		Ice();
		Ice(const Ice& obj);
		Ice&	operator=(const Ice& obj);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif