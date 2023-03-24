/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:32:19 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 16:44:59 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice default ctor" << std::endl;}

Ice::Ice(Ice const& other) : AMateria(other.getType()) {
	std::cout << "Ice copy ctor" << std::endl;}

Ice::~Ice(void) { std::cout << "Ice default dtor" << std::endl; }

Ice&	Ice::operator=(Ice const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Ice assignment operator" << std::endl;
	return (*this);
}

Ice*	Ice::clone(void) const {return (new Ice(*this));}

void	Ice::use(ICharacter& target) {std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;}

