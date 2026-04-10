/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 02:00:21 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/10 14:34:13 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    std::cout << "===== DEFAULT CONSTRUCTOR =====" << std::endl;
    Array<int> empty;
    std::cout << "Size: " << empty.size() << std::endl;

    std::cout << "\n===== SIZE CONSTRUCTOR =====" << std::endl;
    Array<int> a(5);
    std::cout << "Size: " << a.size() << std::endl;

    std::cout << "\n===== DEFAULT INITIALIZATION =====" << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;

    std::cout << "\n===== WRITE VALUES =====" << std::endl;
    for (size_t i = 0; i < a.size(); i++)
        a[i] = i * 10;

    for (size_t i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;

    std::cout << "\n===== COPY CONSTRUCTOR (DEEP COPY) =====" << std::endl;
    Array<int> b(a);
    b[0] = 999;

    std::cout << "Original a[0]: " << a[0] << std::endl;
    std::cout << "Copy b[0]: " << b[0] << std::endl;

    std::cout << "\n===== ASSIGNMENT OPERATOR (DEEP COPY) =====" << std::endl;
    Array<int> c;
    c = a;
    c[1] = 555;

    std::cout << "Original a[1]: " << a[1] << std::endl;
    std::cout << "Assigned c[1]: " << c[1] << std::endl;

    std::cout << "\n===== SELF ASSIGNMENT =====" << std::endl;
    a = a;
    std::cout << "Self-assignment done successfully." << std::endl;

    std::cout << "\n===== CONST ARRAY TEST =====" << std::endl;
    const Array<int> constArr(a);
    for (size_t i = 0; i < constArr.size(); i++)
        std::cout << "constArr[" << i << "] = " << constArr[i] << std::endl;

    std::cout << "\n===== OUT OF BOUNDS TEST =====" << std::endl;
    try
    {
        std::cout << a[100] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: index out of bounds!" << std::endl;
    }

    std::cout << "\n===== DIFFERENT TYPES TEST =====" << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";

    for (size_t i = 0; i < strArr.size(); i++)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    return 0;
}