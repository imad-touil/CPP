/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeconvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:25:40 by emad              #+#    #+#             */
/*   Updated: 2026/04/10 11:00:56 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

using namespace std;

void print(char* str) {
    std::cout << str;
}

int main() {
    const char* s = "hello\n";

    print(const_cast<char*>(s));
	std::cout << "********************************\n";
	// int x = 10;
	// char* p = (char*)x;

	int x = 65;
	char* c = reinterpret_cast<char*>(&x);

	std::cout << *c << std::endl;
}