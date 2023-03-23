/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:52 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 03:14:22 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::ostream&	operator<<(std::ostream& o, WrongCat const& c)
{
	o << "This is WrongCat. WrongCat is good.";
	return (o);
}

WrongCat::WrongCat(void)
{
	this->setType("WrongCat");
	std::cout << "WrongCat default constructor called. type : " << this->getType() << std::endl;
}

WrongCat::WrongCat(WrongCat const& other) : type(other.getType())
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {std::cout << "Honey ! I think the cat is dead !" << std::endl;}
