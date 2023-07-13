/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:22:49 by mwilsch           #+#    #+#             */
/*   Updated: 2023/07/13 10:27:00 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

/*			Ortohodox Canoical Form			*/

ScalarConversion::ScalarConversion(void) {};

ScalarConversion::ScalarConversion(std::string str) : _str(str) {
	if (_str.length() == 0)
		throw std::exception();
	convert(_str);
}

ScalarConversion::ScalarConversion(ScalarConversion const &copy) {
	_str = copy._str;
}

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &copy) {
	if (this == &copy)
		return *this;
	_str = copy._str;
	return *this;
}
ScalarConversion::~ScalarConversion() {};

/*			Other Functions					*/

void ScalarConversion::convert(std::string str) {
	
	char		charValue = 0;
	int			intValue = 0;
	float		floatValue = 0;
	double	doubleValue = 0;
	

	if (str.length() == 1 && isprint(str[0]))
		charValue = static_cast<char>(str[0]);
	else
		std::cout << "char: Non displayable" << std::endl;
	try {
		intValue = std::stoi(str);
	} catch ( std::) {
		std::cout << "int: conversion impossible. reason: " << e.what() << std::endl;
	}

	try {
		floatValue = std::stof(str);
	} catch ( std::exception & e ) {
		std::cout << "float: conversion impossible. reason: " << e.what() << std::endl;
	}

	try {
		doubleValue = std::stod(str);
	} catch ( std::exception & e ) {
		std::cout << "double: conversion impossible. reason: " << e.what() << std::endl;
	}





	//std::cout << "char: " << charValue << std::endl;

	
	
}