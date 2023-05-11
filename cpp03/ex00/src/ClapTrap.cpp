/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:11:42 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 10:56:42 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "ClapTrap";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ClapTrap: " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_energy_points--;
	_hit_points += amount;
	std::cout << "ClapTrap: " << _name << " is repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	if (_hit_points <= 0 || _energy_points <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << _name << " is damaged for " << amount << " points!" << std::endl;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	_attack_damage = amount;
}