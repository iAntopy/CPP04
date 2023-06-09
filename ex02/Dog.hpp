/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:46:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:00:58 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <string>
# include <fstream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;

	public:
		Dog(void);
		Dog(Dog const& other);
		~Dog(void);
		Dog&	operator=(Dog const& other);

//		Brain const*			getBrain(void) const;
		void				setIdea(uint32_t i, std::string const& idea);
		std::string const&		getIdea(uint32_t i) const;
		void				printIdea(uint32_t i) const;
		
		Dog*	clone(void) const;
		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, Dog const& d);

#endif
