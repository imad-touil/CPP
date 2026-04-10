/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 01:37:29 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/10 01:55:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(const T& x)
{
	std::cout << x << " ";
}

template <typename T>
void increment(T& x)
{
	x++;
}

void toUpper(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main(void)
{
	std::cout << "=== INT TEST ===" << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print<int>);
	std::cout << std::endl;
	iter(arr, 5, increment<int>);
	iter(arr, 5, print<int>);
	std::cout << std::endl;
	std::cout << "\n=== STRING TEST ===" << std::endl;
	std::string strs[] = {"hello", "world", "cpp"};
	iter(strs, 3, print<std::string>);
	std::cout << std::endl;
	iter(strs, 3, toUpper);
	iter(strs, 3, print<std::string>);
	std::cout << std::endl;
	std::cout << "\n=== CONST ARRAY TEST ===" << std::endl;
	const int constArr[] = {10, 20, 30};
	iter(constArr, 3, print<int>);
	std::cout << std::endl;
	return 0;
}
