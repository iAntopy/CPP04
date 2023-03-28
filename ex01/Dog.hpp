/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:46:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 22:31:08 by iamongeo         ###   ########.fr       */
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

//		Brain const*	getBrain(void) const;

		Dog*	clone(void) const;
		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, Dog const& d);

#endif
