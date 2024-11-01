/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:39:35 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 19:35:12 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		Weapon		*weapon;

		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon& weapon);

	private:
		std::string _name;
};

#endif // HUMANA_HPP
