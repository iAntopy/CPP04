/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:52 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 03:01:02 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::ostream&	operator<<(std::ostream& o, Cat const& c)
{
	o << "This is Cat. Cat is good.";
	return (o);
}

Cat::Cat(void)
{
	this->setType("Cat");
	std::cout << "Cat default constructor called. type : " << this->getType() << std::endl;
}

Cat::Cat(Cat const& other) : type(other.getType())
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(Cat const& other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Cat::makeSound(void) const {std::cout << "Cat says Meow !" << std::endl;}
