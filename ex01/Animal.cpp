/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:10:33 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 06:27:08 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::ostream&	operator<<(std::ostream& o, Animal const& a)
{
	if (a.getType().empty())
		o << "This is a base Animal with no type." << std::endl;
	else
		o << "This is a Animal of type : " << a.getType() << std::endl;
	return (o);
}

Animal::Animal(void) : type("Animal") {
	std::cout << "Animal default constructor called. type : " << this->getType() << std::endl;}

Animal::Animal(std::string const& typeName) : type(typeName) {
	std::cout << "Typed Animal constructor called." << std::endl;}

Animal::Animal(Animal const& other) : type(other.getType()) {
	std::cout << "Animal copy constructor called." << std::endl;}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;}

Animal&	Animal::operator=(Animal const& other)
{
	if (this == &other)
		return (*this);
	std::cout << this->getType() << " assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}

std::string const&	Animal::getType(void) const {return (this->type);}

void	Animal::setType(std::string const& newType) {this->type = newType;}

Animal*	Animal::clone(void) const {return (new Animal(*this));}

void	Animal::makeSound(void) const {
	std::cout << "Generic Animal confused about its identity ..." << std::endl;}
