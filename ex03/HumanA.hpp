/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:43 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 19:35:13 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		Weapon		*weapon;

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();

	private:
		std::string		_name;
};

#endif // HUMANA_HPP
