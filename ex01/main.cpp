/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:26:18 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 20:39:23 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#define ARR_LEN 10

int main()
{
	Animal	*animalFarm[ARR_LEN];
	int		i;

	std::cout << "Filling first half with dogs, second half with cats :" << std::endl;
	for (i = 0; i < (ARR_LEN / 2); ++i)
		animalFarm[i] = new Dog();
	for (; i < ARR_LEN; ++i)
		animalFarm[i] = new Cat();

	std::cout << std::endl << "Deleting all Animals :" << std::endl;
	for (i = 0; i < ARR_LEN; ++i)
		delete animalFarm[i];

	return (EXIT_SUCCESS);
}
