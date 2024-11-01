/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:28:40 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 19:33:54 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(&weapon), _name( name )
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << weapon->getType() << std::endl;
}
