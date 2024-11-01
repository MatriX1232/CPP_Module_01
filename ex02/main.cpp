/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:58:18 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 18:16:52 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable:\t" << &str << std::endl;
	std::cout << "The memory address held by stringPTR:\t\t" << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:\t\t" << &stringREF << std::endl << std::endl;

	std::cout << "The value of str:\t" << str << std::endl;
	std::cout << "The value of stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "The value of stringREF:\t" << stringREF << std::endl;

	return (0);
}
