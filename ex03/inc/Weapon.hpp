/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:00:53 by verdant           #+#    #+#             */
/*   Updated: 2023/04/28 17:34:21 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

# include "HumanA.hpp"

class Weapon
{
	public:
		// Weapon(std::string type);  // Constructor
		// ~Weapon(void);              // Destructor
		const	std::string& getType();
		void	setType(std::string type);
	private:
		std::string type;
};

#endif