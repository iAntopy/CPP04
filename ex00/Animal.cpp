/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:10:33 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 02:59:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::ostream&	operator<<(std::ostream& o, Animal const& a)
{
	if (a.getType().empty())
		o << "This is a base Animal with no type." << std::endl;
	else
		o << "This is an Animal of type : " << a.getType() << std::endl;
	return (o);
}

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const& other) : type(other.getType())
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal&	Animal::operator=(Animal const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Animal assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}

std::string const&	Animal::getType(void) const {return (this->type);}
void			Animal::setType(std::string const& newType) {this->type = newType;};
void	Animal::makeSound(void) const {}
