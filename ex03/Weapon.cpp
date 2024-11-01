/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:26:02 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 18:38:03 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
