/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 02:21:28 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/02 20:33:09 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#define print(name)  std::cout << name << std::endl;

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);
		~Animal();
		
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif