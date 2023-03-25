/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:46:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 18:05:45 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <string>
# include <fstream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const& other);
		~Dog(void);
		Dog&	operator=(Dog const& other);

		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, Dog const& d);

#endif
