/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:41:05 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 12:50:48 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap f1("Albert");
	f1.attack("Bert");
	f1.highFivesGuys();
	ScavTrap s1("Albert");
	s1.guardGate();
}