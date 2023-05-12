/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalBrain.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:20:55 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 18:41:51 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalBrain.hpp"

Brain::Brain(void)
{
	cout << "Brain Default constructor called" << endl;
}

Brain::Brain(const Brain &src)
{
	cout << "Brain Copy constructor called" << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain(void)
{
	cout << "Brain deleted" << endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	cout << "Brain Assignation operator called" << endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}