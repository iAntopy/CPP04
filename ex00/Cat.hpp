/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:20 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 02:44:22 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include <string>
# include <fstream>
# include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string	type;
	
	public:
		Cat(void);
		Cat(Cat const& other);
		~Cat(void);
		Cat&	operator=(Cat const& other);

		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, Cat const& d);

#endif
