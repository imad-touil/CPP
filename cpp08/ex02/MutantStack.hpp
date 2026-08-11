/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:37:39 by imatouil          #+#    #+#             */
/*   Updated: 2026/08/11 17:36:55 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() {}
		MutantStack(const MutantStack& obj) : std::stack<T>(obj) {};
		MutantStack&	operator=(const MutantStack& obj)
		{
			if (this != &obj)
				std::stack<T>::operator=(obj);
			return (*this);
		};
		~MutantStack() {}
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif
