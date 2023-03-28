/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:48:25 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/28 12:59:13 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("UNDEFINED")
{
	std::cout << "AMateria default ctor" << std::endl;
}

AMateria::AMateria(std::string const& typeName) : type(typeName)
{
	std::cout << std::endl << "AMateria typed ctor : " << type << std::endl;
}

AMateria::~AMateria(void) {std::cout << "AMateria dtor" << std::endl;}

std::string const&	AMateria::getType(void) const {return (this->type);}

void	AMateria::use(ICharacter& target) {std::cout << "* Unknown Materia gives out fart noise.";
	std::cout << " You are untrained in this sorcery *" << std::endl;}
