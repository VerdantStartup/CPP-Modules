/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:44:14 by verdant           #+#    #+#             */
/*   Updated: 2023/05/12 16:41:43 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
// # include "animalBrain.hpp"

/*			Animal Implementation			*/

Animal::Animal(void) : _type("Animal")
{
	cout << "--- Constructing using Base Class ---" << endl;
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
	cout << "--- Finished Deconstruction ---" << endl << endl;
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

/*			Dog Implementation			*/

Dog::Dog(void) : Animal() , _brain(new Brain())
{
	cout << "Dog Default constructor called" << endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain))
{
	cout << "Dog Copy constructor called" << endl;
}

Dog::~Dog(void)
{
	cout << "--- Deconstructing Dog ---" << endl;
	cout << "Dog Destructor called" << endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog &rhs)
{
	cout << "Dog Assignation operator called" << endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Dog::makeSound(void) const
{
	cout << "Bark" << endl;
}

/*			Cat Implementation			*/

Cat::Cat(void) : Animal() , _brain(new Brain())
{
	cout << "Cat Default constructor called" << endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src), _brain(new Brain(*src._brain))
{
	cout << "Cat Copy constructor called" << endl;
}

Cat::~Cat(void)
{
	cout << "--- Deconstructing Cat ---" << endl;
	cout << "Cat Destructor called" << endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat &rhs)
{
	cout << "Cat Assignation operator called" << endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Cat::makeSound(void) const
{
	cout << "Miau" << endl;
}