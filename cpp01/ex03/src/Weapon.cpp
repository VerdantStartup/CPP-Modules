/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:02:21 by verdant           #+#    #+#             */
/*   Updated: 2023/04/28 17:20:27 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

// Weapon::Weapon(std::string type) : type(type) {};

const std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}