/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:00:53 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 13:54:12 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);	// Constructor
		~Weapon(void);              // Destructor
		const	std::string& getType();
		void	setType(std::string type);
	private:
		std::string m_type;
};

#endif