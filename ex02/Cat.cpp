/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:52 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:18:59 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::ostream&	operator<<(std::ostream& o, Cat const& c)
{
	o << "This is Kitty. Kitty is fancy.";
	return (o);
}

Cat::Cat(void) : Animal("Cat"), brain(new Brain()) {
	std::cout << this->getType() << " default constructor called. type : " << this->getType() << std::endl;}

Cat::Cat(Cat const& other) : Animal(other.getType()), brain(new Brain(*other.brain)) {
	std::cout << this->getType() << " copy constructor called." << std::endl;}

Cat::~Cat(void) {
	if (brain)
		delete this->brain;
	std::cout << this->getType() << " destructor called." << std::endl;}

Cat&	Cat::operator=(Cat const& other)
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

//Brain const*	Cat::getBrain(void) const {return (this->brain);}

void			Cat::setIdea(uint32_t i, std::string const& idea) {brain->setIdea(i, idea);}
std::string const&	Cat::getIdea(uint32_t i) const {return (brain->getIdea(i));}
void			Cat::printIdea(uint32_t i) const {brain->printIdea(i);}

Cat*	Cat::clone() const {return (new Cat(*this));}
void	Cat::makeSound(void) const {std::cout << this->getType() << " says Meow !" << std::endl;}
