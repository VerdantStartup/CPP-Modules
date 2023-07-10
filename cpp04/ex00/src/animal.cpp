/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:44:14 by verdant           #+#    #+#             */
/*   Updated: 2023/06/09 13:08:23 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"

/*			Animal Functions			*/

Animal::Animal(void) : _type("Animal")
{
	cout << "Animal Default constructor called" << endl;
}

Animal::Animal(const Animal &src)
{
	cout << "Animal Copy constructor called" << endl;
	_type = src._type;
}

Animal::~Animal(void)
{
	cout << "Animal Destructor called" << endl;
}

Animal& Animal::operator=(const Animal &rhs)
{
	cout << "Animal Assignation operator called" << endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Animal::makeSound(void) const
{
	cout << "Animal Sound" << endl;
}

string Animal::getType(void) const
{
	return this->_type;
}

/*			Dog Functions			*/

Dog::Dog(void) : Animal()
{
	cout << "Dog Default constructor called" << endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	cout << "Dog Copy constructor called" << endl;
}

Dog::~Dog(void)
{
	cout << "Dog Destructor called" << endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	cout << "Dog Assignation operator called" << endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Dog::makeSound(void) const
{
	cout << "Bark" << endl;
}

/*			Cat Functions			*/

Cat::Cat(void) : Animal()
{
	cout << "Cat Default constructor called" << endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	cout << "Cat Copy constructor called" << endl;

}

Cat::~Cat(void)
{
	cout << "Cat Destructor called" << endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	cout << "Cat Assignation operator called" << endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Cat::makeSound(void) const
{
	cout << "Miau" << endl;
}