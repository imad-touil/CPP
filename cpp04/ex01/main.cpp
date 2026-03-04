/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:05:40 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 23:49:08 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	ll()
{
	system("leaks -q program");
}
// atexit(ll);

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// ...
	return 0;
}

// int	main(void)
// {
// 	atexit(ll);
// 	Cat* c = new Cat();

// 	Cat a;
// 	Cat	b;
// 	c = &b;
// 	return (0);
// }