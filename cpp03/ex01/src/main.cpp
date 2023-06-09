/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:17:25 by verdant           #+#    #+#             */
/*   Updated: 2023/06/09 09:18:06 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

int main(void)
{
	ScavTrap a("Albert");
	ScavTrap b("Bert");
	a.attack("Bert"); // Testing overwritten attack
	a.guardGate(); // Testing guardGate
	
	// Checking Energy points Depletion
	for (int i = 0; i < 50; i++)
		b.beRepaired(1);
	b.attack("Albert"); // Should not attack because energy points are depleted
	return (0);
}