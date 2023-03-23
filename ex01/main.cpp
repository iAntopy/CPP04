/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:26:18 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 06:49:49 by iamongeo         ###   ########.fr       */
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

	std::cout << "Copying all animals in animalFarm :\n{" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		farmVille[i] = animalFarm[i]->clone();

	std::cout << "}" << std::endl << "Deleting all Copy Animals :\n{" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		delete farmVille[i];
	std::cout << "}" << std::endl;
}

int main()
{
	Animal	*animalFarm[ARR_LEN];
	int		i;

	std::cout << "Filling first half with dogs, second half with cats :" << std::endl;
	for (i = 0; i < (ARR_LEN / 2); ++i)
		animalFarm[i] = new Dog();
	for (; i < ARR_LEN; ++i)
		animalFarm[i] = new Cat();

	/* Uncomment next line to test deepcopy of polymorphic animals array */
	//optional_deepcopy_tests(animalFarm); 

	std::cout << std::endl << "Deleting all Animals :" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		delete animalFarm[i];

	return (EXIT_SUCCESS);
}
