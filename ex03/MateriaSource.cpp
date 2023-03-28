/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 03:41:37 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:28:01 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default ctor" << std::endl;
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
		materiaStock[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
	{
		if (other.materiaStock[i])
			materiaStock[i] = other.materiaStock[i]->clone();
		else
			materiaStock[i] = nullptr;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource dtor" << std::endl;
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
		if (materiaStock[i])
			delete materiaStock[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& other) 
{
	if (this == &other)
		return (*this);
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
	{
		if (materiaStock[i])
			delete materiaStock[i];
		if (other.materiaStock[i])
			materiaStock[i] = other.materiaStock[i]->clone();
	}
	return (*this);
}

// Materias going through this function become property of MateriaSource. 
void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
	{
		if (!materiaStock[i])
		{
			materiaStock[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i=0; i < MAX_MATERIA_STOCK; ++i)
		if (materiaStock[i]->getType() == type)
			return (materiaStock[i]->clone());
	return (nullptr);
}
