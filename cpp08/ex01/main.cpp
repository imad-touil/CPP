/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 02:00:53 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/15 02:04:39 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	Span	s(3);
	s.addNumber();
	s.addNumber();
	for (unsigned long i = 0; i < s.vect.size(); i++)
		std::cout << s.vect[i] << " ";
	std::cout << std::endl;
}
