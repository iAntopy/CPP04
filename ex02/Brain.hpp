/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:19:37 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 10:49:47 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <string>
# include <fstream>
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	
	public:
		Brain(void);
		Brain(Brain const& other);
		~Brain(void);

		Brain&	operator=(Brain const& other);

		void			setIdea(uint32_t i, std::string const& idea);
		std::string const&	getIdea(uint32_t i) const;
		void			printIdea(uint32_t i) const;
};

std::ostream&	operator<<(std::ostream& o, Brain const& inst);

#endif
