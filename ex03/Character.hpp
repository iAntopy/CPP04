/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:46:36 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 16:17:30 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <iostream>
# include <fstream>
# include <string>
# include "AMateria.hpp"

struct MateriaDump
{
	AMateria*	m;
	MateriaDump*	next;
};

class Character : public ICharacter
{
	private:
		static MateriaDump*	mdump;
		static int		nbCharacters;
		std::string const	name;
		AMateria*		materiaBag[4] = {0};

	public:
		Character(void);
		Character(std::string const& fullname);
		Character(Character const& other);
		~Character(void);
	
		Character&	operator=(Character const& other);

		std::string const & getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		AMateria const*	getMateria(int i) const;
};

std::ostream&	operator<<(std::ostream& o, Character const& inst);

#endif
