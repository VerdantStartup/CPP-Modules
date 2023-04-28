/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:58:43 by verdant           #+#    #+#             */
/*   Updated: 2023/04/28 17:35:41 by verdant          ###   ########.fr       */
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

int main(void)
{
	Weapon w1, w2;
	w1.setType("AK-47");
	w2.setType("M4A1");

	// a.attack();

	return (0);
}