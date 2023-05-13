/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:02:21 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 13:54:31 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(void) {};

Weapon::Weapon(std::string type) : m_type(type) {};

Weapon::~Weapon(void) {};

const std::string& Weapon::getType()
{
	return (m_type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}