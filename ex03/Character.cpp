/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:02:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 05:33:09 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

MateriaDump*	Character::mdump = nullptr;
int		Character::nbCharacters = 0;

std::ostream&	operator<<(std::ostream& o, Character const& inst)
{
	std::cout << "Character { .name = " << inst.getName() << ", .materaBag < ";

	for (int i=0; i < 4; ++i)
	{
		if (inst.getMateria(i))
		{
			if (i == 3)
				std::cout << inst.getMateria(i)->getType() << " >";
			else
				std::cout << inst.getMateria(i)->getType() << ", ";
		}
		else
		{
			if (i == 3)
				std::cout << "empty >";
			else
				std::cout << "empty, ";
		}
	}
	std::cout << " }" << std::endl;
	return (o);
}

static bool	__is_valid_index(int idx) {return (0 <= idx && idx < 4);}

static int	__add_materia_to_bag(AMateria* bag[4], AMateria const* m)
{
	std::cout << "adding materia " << m << " type : " << m->getType() << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (!bag[i])
		{
			bag[i] = (AMateria *)m;
			return (0);
		}
	}
	return (-1);	
}

static void	__delete_materia_bag(AMateria* bag[4])
{
	if (!bag)
		return ;
	for (int i=0; i < 4; ++i)
	{
		if (bag[i])
		{
			std::cout << "deleting bag " << i << " " << bag[i] << " of type : " << bag[i]->getType() << std::endl;
			delete bag[i];
			std::cout << "deleted bag " << i << " and setting it to nullptr : " << std::endl;
			bag[i] = nullptr;
		}
	}
}

static void	__copy_materia_bag(AMateria* dst[4], Character const& src)
{
	AMateria const*	tmp;
	AMateria const* newTmp;

	__delete_materia_bag(dst);
	for (int i=0; i < 4; ++i)
	{
		tmp = src.getMateria(i);
		if (tmp)
		{
			newTmp = tmp->clone();
			if (__add_materia_to_bag(dst, newTmp) < 0)
				delete newTmp;
		}
	}
}

static void	__dump_materia(MateriaDump **mdump, AMateria* garbage)
{
	MateriaDump*	begin;
	MateriaDump*	tmp;

	if (!mdump)
		return ;
	if (!*mdump)
	{
		tmp = new MateriaDump;
		tmp->m = garbage;
		tmp->next = nullptr;
		*mdump = tmp;
	}
	else
	{
		begin = *mdump;
		while (begin->next)
			begin = begin->next;
		tmp = new MateriaDump;
		tmp->m = garbage;
		tmp->next = nullptr;
		begin->next = tmp;
	}
}

static void	__clear_materia_dump(MateriaDump** mdump)
{
	MateriaDump*	dump;
	MateriaDump*	tmp;

	if (!mdump || !(*mdump))
		return ;

	dump = *mdump;
	std::cout << "Clearing character materia dump : " << dump << std::endl;
	while (dump)
	{
		tmp = dump->next;
		delete dump;
		dump = tmp;
	}
	*mdump = nullptr;
}

Character::Character(void) : name("ANONYMOUS")
{
	std::cout << "Character default ctor" << std::endl;
	nbCharacters++;
}

Character::Character(std::string const& fullname) : name(fullname)
{
	std::cout << "Character named ctor" << std::endl;
	nbCharacters++;
	std::cout << "magicaBag[0] : " << materiaBag[0] << std::endl;
}


Character::Character(Character const& other) : name(other.getName())
{
	std::cout << "Character copy ctor" << std::endl;
	__copy_materia_bag(this->materiaBag, other);
	nbCharacters++;
}

Character::~Character(void) 
{
	std::cout << "Character dtor" << std::endl;
	__delete_materia_bag(this->materiaBag);

	nbCharacters--;
	if (nbCharacters == 0)
		__clear_materia_dump(&this->mdump);
}

Character&	Character::operator=(Character const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Character assign operator" << std::endl;
//	name = other.getName();
	__copy_materia_bag(materiaBag, other);
	return (*this);
}

std::string const&	Character::getName(void) const {return (name);}

AMateria const*	Character::getMateria(int i) const 
{
	if (i < 4)
		return (materiaBag[i]);
	return (nullptr);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (__add_materia_to_bag(materiaBag, m) < 0)
	{
		std::cout << name << "'s materia bag is full." << std::endl;
		delete m;
	}
}

void	Character::unequip(int idx)
{
	AMateria*	tmp;

	if (!__is_valid_index(idx))
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	tmp = materiaBag[idx];
	if (tmp)
	{
		std::cout << name << " unequiping " << tmp->getType() << " materia and putting it in dump." << std::endl;
		__dump_materia(&this->mdump, tmp);
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (!__is_valid_index(idx))
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if(!materiaBag[idx])
		return ;
	materiaBag[idx]->use(target);
}
