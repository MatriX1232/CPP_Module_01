/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:06:57 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 18:15:12 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
#include <map>

class Harl
{
	public:
		Harl();
		~Harl();
		void											complain( std::string level );
		std::map< std::string, void (Harl::*)(void) >	levels;							// This is the same as DICT in Python

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif // HARL_HPP
