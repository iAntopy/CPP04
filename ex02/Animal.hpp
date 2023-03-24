/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:46:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 10:50:14 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <string>
# include <fstream>
# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string const& typeName);
		Animal(Animal const& other);
		virtual ~Animal(void);

		virtual Animal&	operator=(Animal const& other);

		std::string const&	getType(void) const;
		void				setType(std::string const& newType);

		virtual Animal*		clone(void) const = 0;
		virtual void		makeSound(void) const = 0;
		virtual void		setIdea(uint32_t i, std::string const& idea) = 0;
		virtual std::string const&	getIdea(uint32_t i) const = 0;
		virtual void		printIdea(uint32_t i) const = 0;
};

//std::ostream&	operator<<(std::ostream& o, Animal const& inst);

#endif
