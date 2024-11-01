/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:28:25 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/01 17:55:06 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies." << std::endl;
		return (NULL);
	}

	Zombie *zombies = new Zombie[N];

	if (!zombies)
		return (NULL);

	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}

	return (zombies);
}
