/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:47:01 by verdant           #+#    #+#             */
/*   Updated: 2023/05/31 15:05:36 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 10);
	RobotomyRequestForm robo("Robi");
	cout << "-------------------" << endl;
	cout << "Bob's Score: " << bob.getGrade() << " < Robo's Score: " << robo.getGradeSign() << endl;
	try {
		robo.beSigned(bob);
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
	try {
		robo.execute(bob);
	} catch (std::exception &e) {
		cout << e.what() << endl;	
	}
}

/*			ShurbberyCreationForm Test			*/

// int main(void)
// {
// 	Bureaucrat bob("Bob", 10);
// 	ShurbberyCreationForm a("Tree");
// 	cout << "Bob's score: " <<  bob.getGrade() << endl;
// 	cout << "Necessary score: " <<  a.getGradeSign() << endl;
// 	try {
// 		a.beSigned(bob);
// 	} catch (std::exception &e) {
// 		cout << e.what() << endl;
// 	}
// 	a.signForm(a);
// 	try {
// 		a.execute(bob);
// 	} catch (std::exception &e) {
// 		cout << e.what() << endl;
// 	}
// }
