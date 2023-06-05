/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:58:43 by verdant           #+#    #+#             */
/*   Updated: 2023/06/05 15:38:44 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concepts needed
// 	Classes and objects in C++
// 	Access specifiers (public and private)
// 	Member functions in C++
// 	Passing arguments to member functions
// 	Constructor in C++
// 	Differences between constructors with and without arguments
// 	References and pointers in C++
// 	const keyword in C++

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();

	return (0);
}