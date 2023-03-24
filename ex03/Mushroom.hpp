/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mushroom.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:45:35 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 05:45:59 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUSHROOM_HPP__
# define __MUSHROOM_HPP__

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Mushroom : public AMateria
{
	public:
		Mushroom(void);
		Mushroom(Mushroom const& other);
		~Mushroom(void);

		Mushroom&	operator=(Mushroom const& other);

		Mushroom*	clone(void) const;
		void	use(ICharacter& target);
};

#endif
