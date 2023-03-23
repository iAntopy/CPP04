/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:46:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 02:54:43 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <string>
# include <fstream>
# include <iostream>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(Animal const& other);
		virtual ~Animal(void);

		Animal&	operator=(Animal const& other);

		std::string const&	getType(void) const;
		void			setType(std::string const& newType);
		virtual void		makeSound(void) const;
};

#endif
