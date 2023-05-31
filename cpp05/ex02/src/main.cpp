/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:47:01 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 17:28:20 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 2);
	ShurbberyCreationForm a;
	cout << "Bob's score: " <<  bob.getGrade() << endl;
	cout << "Necessary score: " <<  a.getGradeSign() << endl;
	try {
		a.beSigned(bob);
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
	a.signForm(a);
	// cout << std::boolalpha << a.getSigned() << endl;
	try
	{
		a.execute(bob);
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
}