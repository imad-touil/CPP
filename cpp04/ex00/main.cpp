/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:05:40 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/03 13:19:40 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     std::cout << "===== BASIC TEST =====\n";

//     const Animal* animal = new Animal();
//     const Animal* dog = new Dog();
//     const Animal* cat = new Cat();

//     std::cout << "\n--- TYPES ---\n";
//     std::cout << "Animal type: " << animal->getType() << std::endl;
//     std::cout << "Dog type: " << dog->getType() << std::endl;
//     std::cout << "Cat type: " << cat->getType() << std::endl;

//     std::cout << "\n--- SOUNDS ---\n";
//     animal->makeSound();
//     dog->makeSound();
//     cat->makeSound();

//     std::cout << "\n--- DESTRUCTORS ---\n";
//     delete animal;
//     delete dog;
//     delete cat;
//     return 0;
// }


int main()
{
	print("-----------| Animal |-----------\n");
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	print("-----------| WrongAnimal |-----------\n");
	const WrongAnimal* meta1 = new WrongAnimal();
	const Animal* j1 = new Dog();
	const WrongAnimal* i1 = new WrongCat();
	std::cout << j1->getType() << " " << std::endl;
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
	j1->makeSound();
	meta1->makeSound();
	
	return 0;
}
