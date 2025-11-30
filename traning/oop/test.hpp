/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:26:36 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/30 10:40:09 by imatouil         ###   ########.fr       */
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
	private:
		int	y;
};


#endif
