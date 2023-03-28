/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:10:33 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 22:58:21 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
