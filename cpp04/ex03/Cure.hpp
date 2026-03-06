/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 02:46:36 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/05 21:17:37 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	name;
	public:
		Cure();
		Cure(const Cure& obj);
		Cure&	operator=(const Cure& obj);
		~Cure();
		AMateria* clone() const;
		// void use(ICharacter& target);
};

#endif