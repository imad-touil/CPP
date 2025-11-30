/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 10:26:32 by imatouil          #+#    #+#             */
/*   Updated: 2025/11/30 12:30:19 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Test::Test() {}

void	Test::incremnt(int *x)
{
	*x += 1;
	std::cout << Test::y;
}

int	main(void)
{
	Test	test1;

	test1.x = 1336;
	std::cout << test1.x << std::endl;
	test1.incremnt(&test1.x);
	std::cout << test1.x << std::endl;
}

