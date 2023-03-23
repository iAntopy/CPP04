/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:01:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 02:57:20 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::ostream&	operator<<(std::ostream& o, Dog const& d)
{
	o << "This is Doge. Doge is good.";
	return (o);
}

Dog::Dog(void)
{
	this->setType("Dog");
	std::cout << "Dog default constructor called. type : " << this->getType() << std::endl;
}

Dog::Dog(Dog const& d) : type(d.getType())
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const& d)
{
	std::cout << "Dog assignment operator called." << std::endl;
	this->type = d.getType();
	return (*this);
}

void	Dog::makeSound(void) const {std::cout << "Dog says Woofy !" << std::endl;}
