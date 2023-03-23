/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:10:33 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 03:19:08 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::ostream&	operator<<(std::ostream& o, WrongAnimal const& a)
{
	if (a.getType().empty())
		o << "This is a base WrongAnimal with no type." << std::endl;
	else
		o << "This is an WrongAnimal of type : " << a.getType() << std::endl;
	return (o);
}

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other) : type(other.getType())
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}

std::string const&	WrongAnimal::getType(void) const {return (this->type);}
void			WrongAnimal::setType(std::string const& newType) {this->type = newType;};
void	WrongAnimal::makeSound(void) const {std::cout << "Animal lets a fart loose on the wrong terf and accidently\
 declares war on its neighbor." << std::endl;}
