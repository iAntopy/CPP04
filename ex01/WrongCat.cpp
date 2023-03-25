/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:52 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 20:08:26 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::ostream&	operator<<(std::ostream& o, WrongCat const& c)
{
	o << "This is WrongCat. WrongCat is good.";
	return (o);
}

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << this->getType() << " default constructor called. type : " << this->getType() << std::endl;}

WrongCat::WrongCat(WrongCat const& other) : type(other.getType()) {
	std::cout << this->getType() << " copy constructor called." << std::endl;}

WrongCat::~WrongCat(void) {
	std::cout << this->getType() << " destructor called." << std::endl;}

WrongCat&	WrongCat::operator=(WrongCat const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "WrongCat assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}
