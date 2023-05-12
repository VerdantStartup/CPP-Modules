/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:18:18 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 16:25:19 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

/*			Wrong Animal Implementation			*/

wrongAnimal::wrongAnimal(void) : _type("wrongAnimal")
{
	cout << "wrongAnimal Default constructor called" << endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal &src)
{
	cout << "wrongAnimal Copy constructor called" << endl;
	*this = src;
}

wrongAnimal::~wrongAnimal(void)
{
	cout << "wrongAnimal Destructor called" << endl;
}

wrongAnimal&	wrongAnimal::operator=(const wrongAnimal &rhs)
{
	cout << "wrongAnimal Assignation operator called" << endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

void	wrongAnimal::makeSound(void) const
{
	cout << "something wen't wrong" << endl;
}

string	wrongAnimal::getType(void) const
{
	return this->_type;
}


/*			Wrong Cat Implementation			*/

wrongCat::wrongCat(void) : wrongAnimal()
{
	cout << "wrongCat Default constructor called" << endl;
	this->_type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat &src)
{
	cout << "wrongCat Copy constructor called" << endl;
	*this = src;
}

wrongCat::~wrongCat(void)
{
	cout << "wrongCat Destructor called" << endl;
}

wrongCat&	wrongCat::operator=(const wrongCat &rhs)
{
	cout << "wrongCat Assignation operator called" << endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

void	wrongCat::makeSound(void) const
{
	cout << "miau" << endl;
}
