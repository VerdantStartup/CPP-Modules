/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:13:31 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 18:35:51 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name = "Undefined";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ScavTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap: " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: " << _name << " has enterred in Gate keeper mode" << std::endl;
}