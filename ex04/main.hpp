/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:11:47 by msolinsk          #+#    #+#             */
/*   Updated: 2024/11/02 17:46:11 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>
# include <string>

bool	ft_check_arguments(int argc);
bool	ft_check_file(std::ifstream &input, std::ofstream &output);

#endif // MAIN_HPP
