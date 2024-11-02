/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:39:11 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 18:03:12 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (!ft_check_arguments(argc))
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	std::ifstream	input(filename.c_str());
	std::ofstream	output((filename + ".replace").c_str());

	if (!ft_check_file(input, output))
	{
		std::cout << "Error: File could not be opened" << std::endl;
		return (1);
	}

	std::string		line;
	while (std::getline(input, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}

	input.close();
	output.close();

	return (0);
}
