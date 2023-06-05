/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:02:21 by verdant           #+#    #+#             */
/*   Updated: 2023/06/05 15:12:33 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(void) {};

Weapon::Weapon(std::string type) {
	if (type.empty())
		this->m_type = "default";
	else
		this->m_type = type;
};

Weapon::~Weapon(void) {};

const std::string& Weapon::getType()
{
	return (m_type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}