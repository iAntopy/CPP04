/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:24:41 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 05:19:49 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::ostream&	operator<<(std::ostream& o, Brain const& inst)
{
	o << "I AM BRAIN ! BOW BEFORE MY GREAT IDEAS !" << std::endl;
	return (o);
}

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;}

Brain::Brain(Brain const& other) {
	std::cout << "Brain copy constructor called." << std::endl;}

Brain::~Brain(void) {
	std::cout << "Brain destructor called." << std::endl;}

Brain&	Brain::operator=(Brain const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Brain assignment operator called." << std::endl;
	for (int i=0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
