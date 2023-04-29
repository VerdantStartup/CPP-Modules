/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:24:49 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 09:09:51 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon &weapon) : m_name(name) , m_weapon(weapon) {};

HumanA::~HumanA() {};

void HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}