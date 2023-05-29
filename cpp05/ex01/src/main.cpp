/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:16:15 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 10:27:42 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::ostream& operator<<(std::ostream& os, const Form& src)
{
	os << src.getName() << " is signed: " << std::boolalpha << src.getSigned() << std::endl;
	return os;
}

int main(void)
{
	// Bureaucrat b("Bob", 2);
	// Form f("Form", 1, 1);
	// f.signForm(f);
	// try {
		
	// 	f.beSigned(b);
	// 	std::cout << f;
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat a("Ada", 2);
	// 	Form 			f("Form", 20, 1);
	// 	f.signForm(f);
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	
	try {
		Bureaucrat c("Claud", 2);
		Form 			f("Form", 20, 1);
		f.beSigned(c);
		f.signForm(f);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return (EXIT_SUCCESS);
}