/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:11:28 by mwilsch           #+#    #+#             */
/*   Updated: 2023/07/13 10:21:49 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cmath>
#include <limits>

class ScalarConversion
{
private:
	std::string _str;
	//char				_char;
	//int					_int;
	//float				_float;
	//double			_double;
public:
	ScalarConversion(void);
	ScalarConversion(std::string str);
	ScalarConversion(ScalarConversion const &copy);
	~ScalarConversion();
	ScalarConversion &operator=(ScalarConversion const &copy);

	static void convert(std::string str);
};