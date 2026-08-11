/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:01:05 by imatouil          #+#    #+#             */
/*   Updated: 2026/08/10 20:12:56 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    try {
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found: " << *it << std::endl;
        easyfind(vec, 42);
    }
    catch (const NotFoundException& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}