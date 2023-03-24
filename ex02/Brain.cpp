/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:24:41 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 10:52:48 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::ostream&	operator<<(std::ostream& o, Brain const& inst)
{
	o << "I AM BRAIN ! BOW BEFORE MY GREAT IDEAS !" << std::endl;
	return (o);
}

static void	__copy_fluffy_trademarked_ideas(Brain& dst, Brain const& src)
{
	for (int i=0; i < 100; ++i)
		dst.setIdea(i, src.getIdea(i));
}

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;}

Brain::Brain(Brain const& other) {
	std::cout << "Brain copy constructor called." << std::endl;
	__copy_fluffy_trademarked_ideas(*this, other);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called." << std::endl;}

Brain&	Brain::operator=(Brain const& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Brain assignment operator called." << std::endl;
	__copy_fluffy_trademarked_ideas(*this, other);
	return (*this);
}

void			Brain::setIdea(uint32_t i, std::string const& idea) {ideas[i] = idea;}
std::string const&	Brain::getIdea(uint32_t i) const {return(ideas[i]);}
void			Brain::printIdea(uint32_t i) const {std::cout << ideas[i] << std::endl;}

