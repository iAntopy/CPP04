/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mushroom.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:46:16 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 06:08:53 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mushroom.hpp"

Mushroom::Mushroom(void) : AMateria("mushroom") {
	std::cout << "Mushroom default ctor" << std::endl;}

Mushroom::Mushroom(Mushroom const& other) : AMateria(other.getType()) {
	std::cout << "Mushroom copy ctor" << std::endl;}

Mushroom::~Mushroom(void) { std::cout << "Mushroom default dtor" << std::endl; }

Mushroom&	Mushroom::operator=(Mushroom const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Mushroom assignment operator" << std::endl;
	return (*this);
}

Mushroom*	Mushroom::clone(void) const {return (new Mushroom(*this));}

void	Mushroom::use(ICharacter& target) {std::cout << "* " << target.getName() << " eats mushroom \
and flies to faraway land where turtles are king *" << std::endl;}

