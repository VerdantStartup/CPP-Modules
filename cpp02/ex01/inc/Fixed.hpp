/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:43:08 by verdant           #+#    #+#             */
/*   Updated: 2023/05/10 12:56:41 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed 
{
	private:
		int	_raw;
		static const int _bits = 8;
	public:
		Fixed ( void );
		Fixed( const int n );
		Fixed( const float f );
		Fixed ( const Fixed & src );
		Fixed & operator=( const Fixed &src );
		~Fixed ( void );
		float toFloat( void ) const;
		int toInt( void ) const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

};

#endif