/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:16:40 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 17:54:08 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	int		N = -2;

	Zombie *zombies = zombieHorde(N, "Mr. Brain");

	if (zombies == NULL)
	{
		std::cout << "Memory allocation failed." << std::endl;
		return (1);
	}

	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);
}
