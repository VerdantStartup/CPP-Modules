/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 11:20:34 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 14:10:05 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
using std::string;
using std::cout;
using std::endl;

// In my complain function I can use a stack array with the 4 strings inside
// When I call complain I can compare the input string to the strings
	// Inside of the array
// When a number has been found then I pass the function pointer


void::Harl::debug ( void ) 
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << endl;
	return ;
}

void::Harl::info ( void ) 
{
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
	return ;
}

void::Harl::warning ( void ) 
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
	return ;
}

void::Harl::error ( void ) 
{
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
	return ;
}

void Harl::complain( string level )
{
	string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func		funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
}