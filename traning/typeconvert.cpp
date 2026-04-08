/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeconvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:25:40 by emad              #+#    #+#             */
/*   Updated: 2026/04/08 16:51:31 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

using namespace std;

void print(char* str) {
    std::cout << str;
}

int main() {
    const char* s = "hello";

    print(const_cast<char*>(s));
}