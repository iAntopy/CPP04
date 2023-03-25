/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:01:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 20:28:30 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::ostream&	operator<<(std::ostream& o, Dog const& d)
{
	o << "This is Doge. Doge is good.";
	return (o);
}

Dog::Dog(void) : Animal("Dog"), brain(new Brain()) {
	std::cout << this->getType() << " default constructor called. type : " << this->getType() << std::endl;}

Dog::Dog(Dog const& other) : Animal(other.getType()) {
	std::cout << this->getType() << " copy constructor called." << std::endl;}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << this->getType() << " destructor called." << std::endl;}

Dog&	Dog::operator=(Dog const& other)
{
	if (this == &other)
		return (*this);
	std::cout << this->getType() << " assignment operator called." << std::endl;
	this->setType(other.getType());
	return (*this);
}

void	Dog::makeSound(void) const {std::cout << this->getType() << " says Woofy !" << std::endl;}
