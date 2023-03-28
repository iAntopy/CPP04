/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:01:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:19:38 by iamongeo         ###   ########.fr       */
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

Dog::Dog(Dog const& other) : Animal(other.getType()), brain(new Brain(*other.brain)) {
	std::cout << this->getType() << " copy constructor called." << std::endl;}

Dog::~Dog(void) {
	if (brain)
		delete brain;
	std::cout << this->getType() << " destructor called." << std::endl;}

Dog&	Dog::operator=(Dog const& other)
{
	if (this == &other)
		return (*this);
	std::cout << this->getType() << " assignment operator called." << std::endl;
	this->setType(other.getType());

	if (brain)
		delete brain;
	brain = new Brain(*other.brain);
	
	return (*this);
}

//Brain const*	Dog::getBrain(void) const {return (this->brain);}

void			Dog::setIdea(uint32_t i, std::string const& idea) {brain->setIdea(i, idea);}
std::string const&	Dog::getIdea(uint32_t i) const {return (brain->getIdea(i));}
void			Dog::printIdea(uint32_t i) const {brain->printIdea(i);}

Dog*	Dog::clone(void) const {return (new Dog(*this));}
void	Dog::makeSound(void) const {std::cout << this->getType() << " says Woofy !" << std::endl;}
