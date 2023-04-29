/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:02:21 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 18:00:26 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type) {};

const std::string& Weapon::getType()
{
	return (m_type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}