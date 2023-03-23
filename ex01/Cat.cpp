/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:52 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 06:27:32 by iamongeo         ###   ########.fr       */
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

Cat::Cat(Cat const& other) : Animal(other.getType()), brain(new Brain(*other.getBrain())) {
	std::cout << this->getType() << " copy constructor called." << std::endl;}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << this->getType() << " destructor called." << std::endl;}

Cat&	Cat::operator=(Cat const& other)
{
	if (this == &other)
		return (*this);
	std::cout << this->getType() << " assignment operator called." << std::endl;
	this->setType(other.getType());

	delete brain;
	brain = new Brain(*other.getBrain());
	return (*this);
}

Brain const*	Cat::getBrain(void) const {return (this->brain);}

Cat*	Cat::clone() const {return (new Cat(*this));}
void	Cat::makeSound(void) const {std::cout << this->getType() << " says Meow !" << std::endl;}
