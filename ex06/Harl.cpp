/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:10:30 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 18:41:30 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <map>

Harl::Harl()
{
	Harl::levels["debug"] = &Harl::debug;
	Harl::levels["info"] = &Harl::info;
	Harl::levels["warning"] = &Harl::warning;
	Harl::levels["error"] = &Harl::error;
	std::cout << "Harl has arrived. Take cover!" << std::endl << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is gone! Everybody is safe now :)" << std::endl;
}

void	Harl::complain( std::string level )
{
	int		level_int = 0;

	if (level == "DEBUG")
		level_int = 1;
	else if (level == "INFO")
		level_int = 2;
	else if (level == "WARNING")
		level_int = 3;
	else if (level == "ERROR")
		level_int = 4;
	else
		level_int = -1;

	switch (level_int)
	{
		case 1:
			(this->*levels["debug"])();
			(this->*levels["info"])();
			(this->*levels["warning"])();
			(this->*levels["error"])();
			break;

		case 2:
			(this->*levels["info"])();
			(this->*levels["warning"])();
			(this->*levels["error"])();
			break;

		case 3:
			(this->*levels["warning"])();
			(this->*levels["error"])();
			break;

		case 4:
			(this->*levels["error"])();
			break;

		default:
			std::cout << "Invalid level" << std::endl;
			break;
	}
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"	<< std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager!" << std::endl << std::endl;
}
