/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:23:20 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 03:20:03 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include <string>
# include <fstream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongCat(void);
		WrongCat(WrongCat const& other);
		~WrongCat(void);
		WrongCat&	operator=(WrongCat const& other);

		void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& o, WrongCat const& d);

#endif
