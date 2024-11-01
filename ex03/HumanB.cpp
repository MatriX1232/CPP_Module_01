/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:40 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 19:34:35 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (!this->weapon)
		std::cout << this->_name << " has no weapon to attack with" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
