/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:20 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:00:51 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include <string>
# include <fstream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;

	public:
		Cat(void);
		Cat(Cat const& other);
		~Cat(void);
		Cat&	operator=(Cat const& other);

//		Brain const*	getBrain(void) const;
		void				setIdea(uint32_t i, std::string const& idea);
		std::string const&		getIdea(uint32_t i) const;
		void				printIdea(uint32_t i) const;
		Cat*	clone(void) const;
		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, Cat const& d);

#endif
