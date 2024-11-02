/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:49:27 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 17:52:59 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <fstream>
#include <string>

bool	ft_check_arguments(int argc)
{
	if (argc != 4)
	{
		return (false);
	}
	return (true);
}

bool	ft_check_file(std::ifstream &input, std::ofstream &output)
{
	if (input.fail() || output.fail())
	{
		return (false);
	}
	return (true);
}
