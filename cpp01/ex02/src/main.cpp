/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:45:21 by verdant           #+#    #+#             */
/*   Updated: 2023/04/28 16:51:57 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN"; // A string variable initialized to "HI THIS IS BRAIN"
	std::string *stringPTR = &str; // A pointer to str
	std::string &stringREF = str; // A reference to str

	std::cout << "Mem address of str: " << &str << std::endl;
	std::cout << "Mem address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Mem address of stringREF: " << &stringREF << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	
	return (0);
}