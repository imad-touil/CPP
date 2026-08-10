/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:03:29 by imatouil          #+#    #+#             */
/*   Updated: 2026/08/10 18:57:41 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <queue>

template <class T>
T	add(T a, T b)
{
	return (a + b);
}
template <class T>
T	minus(T a, T b)
{
	return (a - b);
}

int	main(void)
{
	std::cout << add(13 , 37) << "\n";
	std::cout << add(13.3 , 37.2) << "\n";
	std::cout << minus(13 , 37) << "\n";
	std::cout << minus(13.3 , 37.2) << "\n";
	
}
