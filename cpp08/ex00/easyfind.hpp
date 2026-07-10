/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 06:52:59 by imatouil          #+#    #+#             */
/*   Updated: 2026/07/10 17:30:32 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFoundException : std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("404!");
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int to_find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw NotFoundException();
	return it;
}

#endif