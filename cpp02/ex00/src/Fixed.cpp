/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:04:56 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 14:41:47 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void ) {
	std::cout << "Destructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed (const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	_value = src._value;
} 

Fixed& Fixed::operator=( const Fixed& src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	_value = src._value;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (_value);
}	

void Fixed::setRawBits( int const raw)
{
	_value = raw;
}

