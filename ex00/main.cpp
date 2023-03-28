/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:26:18 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 22:19:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << std::endl << "GENERIC ANIMAL TESTS : " << std::endl;
	std::cout << "Meta Animal creation : " << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl << "Dog Animal creation : " << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl << "Cat Animal creation : " << std::endl;
	const Animal* i = new Cat();

	std::cout << std::endl << "Identity tests :" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl << "Sound tests :" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the Animal sound!

	std::cout << std::endl << "Destroyers :" << std::endl;
	delete meta;
	delete j;
	delete i;




	std::cout << std::endl << "WRONGANIMAL TESTS : " << std::endl;
	std::cout << "Meta WrongAnimal creation : " << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	std::cout << std::endl << "Cat Animal creation : " << std::endl;
	const WrongAnimal* wc = new WrongCat();
	
	std::cout << std::endl << "Identity tests :" << std::endl;
	std::cout << wa->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;

	std::cout << std::endl << "Sound tests :" << std::endl;
	wa->makeSound(); //will output the WrongAnimal sound!
	wc->makeSound(); //will output the WrongCat sound!

	std::cout << std::endl << "Destroyers :" << std::endl;
	delete wa;
	delete wc;
	return (EXIT_SUCCESS);
}
