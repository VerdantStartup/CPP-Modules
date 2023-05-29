/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:47:01 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 17:16:27 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 2);
	ShurbberyCreationForm a;
	cout << std::boolalpha << a.getSigned() << endl;
	try 
	{
		a.execute(bob);
	} catch (std::exception &e) {
		
	}
	
	
}
