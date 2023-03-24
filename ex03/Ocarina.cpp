/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ocarina.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:51:39 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 06:09:53 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ocarina.hpp"

Ocarina::Ocarina(void) : AMateria("ocarina") {
	std::cout << "Ocarina default ctor" << std::endl;}

Ocarina::Ocarina(Ocarina const& other) : AMateria(other.getType()) {
	std::cout << "Ocarina copy ctor" << std::endl;}

Ocarina::~Ocarina(void) { std::cout << "Ocarina default dtor" << std::endl; }

Ocarina&	Ocarina::operator=(Ocarina const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Ocarina assignment operator" << std::endl;
	return (*this);
}

Ocarina*	Ocarina::clone(void) const {return (new Ocarina(*this));}

void	Ocarina::use(ICharacter& target) {std::cout << "* " << target.getName() << " wistles magical song, opens\
 hole in the graveyard and goes tomb raiding  *" << std::endl;}

