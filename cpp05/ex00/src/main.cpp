/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:25:36 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 09:49:30 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src) {
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return os;
}

int main(void)
{
	// try {
	// 	Bureaucrat a("Dirk", 1);
	// 	std::cout << a;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat b("Dirk", 200);
	// 	std::cout << b;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	try {
		Bureaucrat c("Dirk", 150);
		std::cout << c;
		c.decGrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// try {
	// 	Bureaucrat d("Dirk", 1);
	// 	std::cout << d;
	// 	d.incGrade();
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
}