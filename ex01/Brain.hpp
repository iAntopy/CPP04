/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:19:37 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/24 20:24:50 by iamongeo         ###   ########.fr       */
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
		virtual ~Brain(void);

		Brain&	operator=(Brain const& other);
};

#endif
