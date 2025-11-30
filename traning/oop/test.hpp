/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:26:36 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/30 16:20:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

class Test
{
	public:
		Test();
		int	x;
		void	incremnt(int *x);
		~Test();
	private:
		int	y;
};


#endif
