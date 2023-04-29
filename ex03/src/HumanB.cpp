/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:35:36 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 09:18:15 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::~HumanB() {};

HumanB::HumanB(std::string name) : m_name(name) {
	this->m_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->m_weapon = &weapon;
}

void HumanB::attack(void) {
	if (this->m_weapon != NULL)
		std::cout << m_name << " attacks with thier " << this->m_weapon->getType() << std::endl;
	else
		std:: cout << m_name << " has no weapon to attack." << std::endl;
}

