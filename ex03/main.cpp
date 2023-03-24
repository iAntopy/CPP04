/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:02:46 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 06:00:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Mushroom.hpp"
#include "Ocarina.hpp"

int	subject_tests(void)
{

	std::cout << "\n\n-----------------STARTING SUBJECT TESTS--------------------" << std::endl;
	
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
	
	std::cout << "\n\n-------------------EXITING SUBJECT TESTS----------------\n\n" << std::endl;
	return (0);
}

int	main()
{
	MateriaSource	msource;
	Character	herman("Herman");
	Character	pickachu("Pickachu");

	msource.learnMateria(new Ice());
	msource.learnMateria(new Mushroom());
	msource.learnMateria(new Ocarina());
	msource.learnMateria(new Cure());
	msource.learnMateria(new Ice());
	msource.learnMateria(new Ice());
	msource.learnMateria(new Ice());
	msource.learnMateria(new Cure());
	msource.learnMateria(new Ice());
	msource.learnMateria(new Ice());
	msource.learnMateria(new Cure());
	msource.learnMateria(new Ice());

	herman.equip(msource.createMateria("ice"));
	herman.equip(msource.createMateria("ICE"));
	herman.equip(msource.createMateria(" cure "));
	herman.equip(msource.createMateria("AJSDJFALSDF"));
	herman.equip(msource.createMateria("mushroom"));
	herman.equip(msource.createMateria("ocarina"));
	herman.equip(msource.createMateria("cure"));
	herman.equip(msource.createMateria(""));

	herman.use(-1, herman);
	herman.use(0, herman);
	herman.use(1, pickachu);
	herman.use(2, pickachu);
	herman.use(3, herman);
	herman.use(4, herman);

	herman.unequip(-1);
	herman.unequip(0);
	herman.unequip(1);
	herman.unequip(2);
	herman.unequip(3);
	herman.unequip(4);

	subject_tests();

	return (EXIT_SUCCESS);
}
