/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:24:29 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 18:48:27 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType();
		void setType(std::string type);

	private:
		std::string _type;
};

#endif // WEAPON_HPP
