/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ocarina.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 05:51:10 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 05:51:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __OCARINA_HPP__
# define __OCARINA_HPP__

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ocarina : public AMateria
{
	public:
		Ocarina(void);
		Ocarina(Ocarina const& other);
		~Ocarina(void);

		Ocarina&	operator=(Ocarina const& other);

		Ocarina*	clone(void) const;
		void	use(ICharacter& target);
};

#endif
