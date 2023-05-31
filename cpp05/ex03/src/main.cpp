/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:20:32 by mwilsch           #+#    #+#             */
/*   Updated: 2023/05/31 17:36:38 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return os;
}

std::ostream& operator<<(std::ostream& os, const ShurbberyCreationForm& rhs)
{
	os << rhs.getName() << ", form gradeSign " << rhs.getGradeSign() <<", form gradeExce" << rhs.getGradeExec() << ".";
	return os;
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& rhs)
{
	os << rhs.getName() << ", form gradeSign " << rhs.getGradeSign() <<", form gradeExce" << rhs.getGradeExec() << ".";
	return os;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& rhs)
{
	os << rhs.getName() << ", form gradeSign " << rhs.getGradeSign() <<", form gradeExce" << rhs.getGradeExec() << ".";
	return os;
}


int main() {
		Intern someRandomIntern;

		AForm *form1 = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
		AForm *form2 = someRandomIntern.makeForm("RobotomyRequestForm", "Alice");
		AForm *form3 = someRandomIntern.makeForm("PresidentialPardonForm", "Charlie");
		AForm *form4 = someRandomIntern.makeForm("NonExistentForm", "Bob");

		delete form1;
		delete form2;
		delete form3;
		std::cout << form4 << std::endl;
		return 0;
}
