/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:58:43 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 09:21:02 by verdant          ###   ########.fr       */
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
	Weapon w1, w2;
	w1.setType("AK-47");
	w2.setType("M4A1");
	HumanA Joe = HumanA("Joe", w1);
	Joe.attack();
	HumanB Jay = HumanB("Jay");
	Jay.attack();
	Jay.setWeapon(w2);
	Jay.attack();

	return (0);
}