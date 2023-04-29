/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:11:00 by verdant           #+#    #+#             */
/*   Updated: 2023/04/28 16:41:07 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() : name("Foo") {}; // Default Constructor

void Zombie::announce(void)
{
	std::cout << name << ": I'm alive!!!" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie (void)
{
	std::cout << name << ": I'm dead again..." << std::endl;
}