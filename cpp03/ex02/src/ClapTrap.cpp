/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:10:07 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 18:34:52 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "ClapTrap";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
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
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap: " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap: " << _name << " is repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << _name << " is damaged for " << amount << " points!" << std::endl;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}