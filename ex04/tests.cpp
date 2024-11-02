/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:45:38 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 18:02:34 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "main.hpp"

void	ft_tets_arguments()
{
	std::cout << "Test 1: ";
	if (ft_check_arguments(4))
		std::cout << "OK" << std::endl;
	else
		std::cout << "FAIL" << std::endl;

	std::cout << "Test 2: ";
	if (!ft_check_arguments(3))
		std::cout << "OK" << std::endl;
	else
		std::cout << "FAIL" << std::endl;
}

void	ft_test_files()
{
	std::ifstream	input("file.txt");
	std::ofstream	output("file.replace");

	std::cout << "Test 3: ";
	if (!ft_check_file(input, output))
		std::cout << "OK" << std::endl;
	else
		std::cout << "FAIL" << std::endl;

	input.close();
	output.close();


	std::fstream	input2("file.txt", std::ios::in | std::ios::out | std::ios::trunc);
	std::fstream	output2("file.replace", std::ios::out);

	input2 << "Welcome to programming HELL!" << std::endl;
	input2 << "This is a test file for the program." << std::endl;

	if (!input2.fail() && !output2.fail())
		std::cout << "Test 4: OK" << std::endl;
	else
		std::cout << "Test 4: FAIL" << std::endl;

	input2.close();
	output2.close();


	std::ifstream	input3("file.txt");
	std::ofstream	output3("file.replace");

	if (ft_check_file(input3, output3))
		std::cout << "Test 5: OK" << std::endl;
	else
		std::cout << "Test 5: FAIL" << std::endl;

	std::remove("file.txt");
	std::remove("file.replace");
}

int	main()
{
	ft_tets_arguments();
	ft_test_files();
	return (0);
}
