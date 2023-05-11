/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:09:09 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 10:49:51 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
	public: 
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap& operator=(ClapTrap const & rhs);
		~ClapTrap(void);
		void attack(const std::string &target); 
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setAttackDamage(unsigned int amount);
};

#endif