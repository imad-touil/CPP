/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:05:40 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/04 02:15:04 by imatouil         ###   ########.fr       */
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
	print("-----------| Array Of Animals Test |-----------");
	const int size = 4;
	Animal*	animals[size];
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < size; i++)
		delete animals[i];
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