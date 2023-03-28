/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 03:59:57 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/27 23:35:18 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materiaStock[MAX_MATERIA_STOCK];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& other);
		~MateriaSource(void);
		MateriaSource&	operator=(MateriaSource const& other);

		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const& type);
};

#endif
