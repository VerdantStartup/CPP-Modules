/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:54:41 by verdant           #+#    #+#             */
/*   Updated: 2023/05/10 16:54:06 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
	private:
		int								_value;
		static const int	_bits = 8; // Scaling factor (2^8 = 256)
	public:
		Fixed	( void );
		Fixed	( const int n );
		Fixed	( const float n );
		Fixed	( const Fixed& src );
		Fixed& operator=( const Fixed & rhs );
		~Fixed ( void );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		bool	operator> ( const Fixed& rhs ) const;
		bool	operator< ( const Fixed& rhs ) const;
		bool	operator>=( const Fixed& rhs ) const;
		bool	operator<=( const Fixed& rhs ) const;
		bool	operator==( const Fixed& rhs ) const;
		bool	operator!=( const Fixed& rhs ) const;
		Fixed	operator+ ( const Fixed& rhs ) const;
		Fixed	operator- ( const Fixed& rhs ) const;
		Fixed	operator* ( const Fixed& rhs ) const;
		Fixed	operator/ ( const Fixed& rhs ) const; 
		Fixed&	operator++( void );
		Fixed		operator++( int );
		Fixed&	operator--( void );
		Fixed		operator--( int );
		static Fixed&  min( Fixed& a, Fixed& b );
		static const Fixed&  min( const Fixed& a, const Fixed& b );
		static Fixed&  max( Fixed& a, Fixed& b );
		static const Fixed&  max( const Fixed& a, const Fixed& b );
};

#endif