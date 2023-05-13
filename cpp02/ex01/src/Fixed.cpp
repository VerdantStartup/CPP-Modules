/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:55:18 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 14:57:13 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int n ) 
{
	_raw = n * 256;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f )
{
	_raw = roundf(f * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& src )
{
	std::cout << "Copy constructor called" << std::endl;
	_raw = src._raw;
}

Fixed& Fixed::operator=( const Fixed &src )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	_raw = src._raw;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (_raw);
}	

void Fixed::setRawBits( int const raw)
{
	_raw = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_raw/256);
}

int Fixed::toInt( void ) const
{
	return (_raw/256);
}





