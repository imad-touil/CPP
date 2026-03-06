/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 02:48:46 by imatouil          #+#    #+#             */
/*   Updated: 2026/03/06 03:19:14 by imatouil         ###   ########.fr       */
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

// int main()
// {
// 	atexit(ll);
// 	IMateriaSource* src = new MateriaSource();
	
// 	src->learnMateria(new Ice());
	
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main()
{
	atexit(ll);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    tmp = src->createMateria("ice");
    me->equip(tmp); 
    delete tmp;

    // 3. Deep Copy Test (Assignment & Destructor check)
    {
        Character original("original");
        original.equip(src->createMateria("ice"));
        Character copy = original; // Copy constructor
        Character assign("assign");
        assign = copy;             // Assignment operator
        assign.use(0, *me);
    } // 'original', 'copy', and 'assign' are destroyed here

    // 4. Interface/Polymorphism Test
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    // Cleanup
    delete bob;
    delete me;
    delete src;

    return 0;
}