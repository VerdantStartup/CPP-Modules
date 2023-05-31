/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:22:08 by mwilsch           #+#    #+#             */
/*   Updated: 2023/05/31 17:59:07 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& src)
{
	if (this == &src)
		return *this;
	return *this;
}

AForm *makeShrubberyCreationForm(std::string target)
{
	return new ShurbberyCreationForm(target);
}

AForm *makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *(*formFuncs[3])(std::string) = {makeShrubberyCreationForm, makeRobotomyRequestForm, makePresidentialPardonForm};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << endl << "Intern creates " << formName << std::endl;
			return formFuncs[i](formTarget);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return NULL;
}
