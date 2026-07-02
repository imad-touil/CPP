/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 02:00:21 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/10 16:59:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

// void	ll(void)
// {
// 	system("leaks -q program");
// }
// 	atexit(ll);

int main()
{
    std::cout << "|--------- DEFAULT CONSTRUCTOR ---------|" << std::endl;
    Array<int> empty;
    std::cout << "Size: " << empty.size() << std::endl;

    std::cout << "|--------- SIZE CONSTRUCTOR ---------|" << std::endl;
    Array<int> a(5);
    std::cout << "Size: " << a.size() << std::endl;

    std::cout << "|--------- DEFAULT INITIALIZATION ---------|" << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;

    std::cout << "|--------- WRITE VALUES ---------|" << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        a[i] = i * 10;

    for (size_t i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;

    std::cout << "|--------- COPY CONSTRUCTOR ---------|" << std::endl;
    Array<int> b(a);
    b[0] = 999;

    std::cout << "Original a[0]: " << a[0] << std::endl;
    std::cout << "Copy b[0]: " << b[0] << std::endl;

    std::cout << "|--------- ASSIGNMENT OPERATOR ---------|" << std::endl;
    Array<int> c;
    c = a;
    c[1] = 555;

    std::cout << "Original a[1]: " << a[1] << std::endl;
    std::cout << "Assigned c[1]: " << c[1] << std::endl;
    std::cout << std::endl;

    return 0;
}