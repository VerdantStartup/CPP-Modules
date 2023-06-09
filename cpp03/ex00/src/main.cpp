/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 09:14:42 by verdant           #+#    #+#             */
/*   Updated: 2023/06/07 17:17:35 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap c1("ClapTrap1");
	ClapTrap c2("ClapTrap2");
	ClapTrap c3("ClapTrap3");

	// Testing Attack
	c1.attack("ClapTrap2");
	// Testing Energy Points Depletion
	for (int i = 0; i < 10; i++)
		c1.beRepaired(1);
	// Testing Damage and Repair
	c2.takeDamage(5);
	c2.beRepaired(1);
	c2.takeDamage(5); // Should be dead but we repaird 1 point
	c2.takeDamage(10);

	// Testing Attack Damage Setter
	c3.setAttackDamage(15);
	c3.attack("ClapTrap1");
	return (0);
}