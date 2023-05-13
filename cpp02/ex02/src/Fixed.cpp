/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:01:44 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 15:02:06 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int n ) 
{
		_value = n * 256;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f )
{
	_value = roundf(f * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src )
{
	_value = src._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& src)
{
	if (this == &src)
		return (*this);
	this->_value = src._value;
	return (*this);
}

int Fixed::toInt( void ) const
{
	std::cout << "toInt member function called" << std::endl;
	return (this->_value / 256);
}

float Fixed::toFloat( void ) const
{
	std::cout << "toFloat member function called" << std::endl;
	return ((float)_value / 256);
}

bool Fixed::operator>(const Fixed& rhs) const 
{
	return (this->_value > rhs._value);
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (this->_value < rhs._value);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (this->_value >= rhs._value);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (this->_value <= rhs._value);
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (this->_value == rhs._value);
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return (this->_value != rhs._value);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed temp(*this);
	this->_value++;
	return (temp);
}

Fixed& Fixed::operator--( void )
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed temp(*this);
	this->_value--;
	return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

