/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 03:08:51 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 03:09:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <string>
# include <fstream>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& other);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(WrongAnimal const& other);

		std::string const&	getType(void) const;
		void			setType(std::string const& newType);
		virtual void		makeSound(void) const;
};

#endif
