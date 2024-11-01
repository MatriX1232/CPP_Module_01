/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:40:47 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 17:52:14 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string		_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void			announce( void );
		void			setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif // __ZOMBIE_H__
