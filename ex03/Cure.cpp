/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:48:41 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 04:58:58 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure default ctor" << std::endl;}

Cure::Cure(Cure const& other) : AMateria(other.getType()) {
	std::cout << "Cure copy ctor" << std::endl;}

Cure::~Cure(void) { std::cout << "Cure default dtor" << std::endl; }

Cure&	Cure::operator=(Cure const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Cure assignment operator" << std::endl;
	return (*this);
}

Cure*	Cure::clone(void) const {return (new Cure(*this));}

void	Cure::use(ICharacter& target) {std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;}

