/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 02:48:46 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/06 03:15:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

void	ll(void)
{
	system("leaks -q program");
}

int main()
{
	atexit(ll);
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

// #include <iostream>
// #include "IMateriaSource.hpp"
// #include "MateriaSource.hpp"
// #include "ICharacter.hpp"
// #include "Character.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"

// int main()
// {
// 	atexit(ll);
//     std::cout << "----- BASIC TEST -----" << std::endl;

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;

//     tmp = src->createMateria("ice");
//     me->equip(tmp);

//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     std::cout << "\n----- INVENTORY FULL TEST -----" << std::endl;

//     Character hero("hero");

//     AMateria* m1 = new Ice();
//     AMateria* m2 = new Ice();
//     AMateria* m3 = new Cure();
//     AMateria* m4 = new Cure();
//     AMateria* m5 = new Ice();

//     hero.equip(m1);
//     hero.equip(m2);
//     hero.equip(m3);
//     hero.equip(m4);

//     hero.equip(m5);

//     delete m5; 

//     std::cout << "\n----- INVALID INDEX TEST -----" << std::endl;

//     Character enemy("enemy");

//     hero.use(-1, enemy);
//     hero.use(10, enemy);

//     std::cout << "\n----- UNKNOWN MATERIA TEST -----" << std::endl;

//     IMateriaSource* src2 = new MateriaSource();
//     src2->learnMateria(new Ice());

//     AMateria* test = src2->createMateria("fire");

//     if (!test)
//         std::cout << "Materia not found" << std::endl;

//     delete src2;

//     std::cout << "\n----- DEEP COPY TEST -----" << std::endl;

//     Character a("A");
//     a.equip(new Ice());
//     a.equip(new Cure());

	
//     Character b = a;

//     Character target("target");

//     a.use(0, target);
//     b.use(1, target);

//     return 0;
// }