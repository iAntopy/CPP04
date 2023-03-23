/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:26:18 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 11:23:50 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#define ARR_LEN 10

void	optional_deepcopy_tests(Animal **animalFarm)
{
	Animal	*farmVille[ARR_LEN];
	int	i;

	std::cout << std::endl << "TESTING DEEPCOPY OF ALL ANIMALS IN ANIMALFARM :" << std::endl;

	std::cout << "/*\n\tCopied individual types, sounds, and ideas should be same as original \n*/" << std::endl;
	std::cout << "Copying all animals in animalFarm :\n{" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
	{
		std::cout << "//------------Copy individual " << i << "-----------\\\\" << std::endl;
		farmVille[i] = animalFarm[i]->clone();
		farmVille[i]->makeSound();
		std::cout << "idea 0 copy : ";
		farmVille[i]->printIdea(0);
		std::cout << "idea 1 copy : ";
		farmVille[i]->printIdea(1);
		std::cout << "\\\\----------------------------------------//" << std::endl;
	}

	std::cout << "}" << std::endl << "Deleting all Copy Animals :\n{" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		delete farmVille[i];
	std::cout << "}" << std::endl;
}

void	abstract_animal_instanciation_test(void)
{

	std::cout << std::endl << "ABSTRACT ANIMAL INSTANCIATION TEST : " << std::endl;
	std::cout << "Attempting to create (Animal), Dog and Cat :" << std::endl;

// Next line is impossible to compile because Animal is an abstract class that 
// needs to be inherited to define its abstract virtual methodes. In this case
// the makeSound() and clone() methods must be defined in the particular sub-classes inheriting from 
// Animal. The Animal class here serves mostly as an interface to show what behaviors 
// the sub-classes should display.

	//Animal*	meta = new Animal();
	Animal*	d = new Dog();
	Animal*	c = new Cat();

	std::cout << "Attempting to makeSound with (Animal), Dog and Cat :" << std::endl;

// Next line impossible to compile since the makeSound() method is abstract in the Animal class.
	//meta.makeSound();
	d->makeSound();
	c->makeSound();
	
	std::cout << "deleting (Animal), Dog and Cat :" << std::endl;
// Useless delete since creating abstract Animal would not compile.
	//delete meta;
	delete d;
	delete c;
}

int main()
{
	Animal	*animalFarm[ARR_LEN];
	int		i;

	std::cout << "Filling first half with dogs, second half with cats :" << std::endl;
	for (i = 0; i < (ARR_LEN / 2); ++i)
	{
		std::cout << "//------------Creating individual " << i << "-----------\\\\" << std::endl;
		animalFarm[i] = new Dog();
		animalFarm[i]->makeSound();
		animalFarm[i]->setIdea(0, "Fly in space");
		animalFarm[i]->setIdea(1, "Be movie star");
		std::cout << "idea 0 : ";
		animalFarm[i]->printIdea(0);
		std::cout << "idea 1 : ";
		animalFarm[i]->printIdea(1);
		std::cout << "\\\\--------------------------------------------//" << std::endl;
	}
	for (; i < ARR_LEN; ++i)
	{
		std::cout << "//------------Creating individual " << i << "-----------\\\\" << std::endl;
		animalFarm[i] = new Cat();
		animalFarm[i]->makeSound();
		animalFarm[i]->setIdea(0, "Lasagna");
		animalFarm[i]->setIdea(1, "Get rid of dog");
		std::cout << "idea 0 : ";
		animalFarm[i]->printIdea(0);
		std::cout << "idea 1 : ";
		animalFarm[i]->printIdea(1);
		std::cout << "\\\\------------------------------------------//" << std::endl;
	}

	/* Uncomment next line to test deepcopy of polymorphic animals array */
	optional_deepcopy_tests(animalFarm); 

	abstract_animal_instanciation_test();

	std::cout << std::endl << "Deleting all Animals :" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		delete animalFarm[i];

	return (EXIT_SUCCESS);
}
