/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:45:19 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/16 11:19:46 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p(3, 3);

    if (bsp(a, b, c, p))
        std::cout << "Inside\n";
    else
        std::cout << "Outside\n";
}
