/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:51:05 by verdant           #+#    #+#             */
/*   Updated: 2023/05/31 14:46:29 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ------------------------------- Orthodox Canonical Form --------------------------------*/


ShurbberyCreationForm::ShurbberyCreationForm(void) : AForm("Default", 145, 137) {};

ShurbberyCreationForm::ShurbberyCreationForm(const std::string target) : AForm(target, 145, 137) {};

ShurbberyCreationForm::ShurbberyCreationForm(const ShurbberyCreationForm& src) : AForm(src) {};

ShurbberyCreationForm& ShurbberyCreationForm::operator=(const ShurbberyCreationForm& src)
{
	if (this == &src)
		return *this;
	AForm::operator=(src);
	return *this;
}

ShurbberyCreationForm::~ShurbberyCreationForm(void)
{
	std::cout << endl <<  "ShurbberyCreationForm destructor called" << std::endl;
	return ;
}

void	ShurbberyCreationForm::execute(const Bureaucrat& executor) const
{
	checkBureaucrat(executor);
	std::ofstream ofs(this->getName() + "_shrubbery");	
	
	string ascii_tree;
	
	ascii_tree += "       /\\";
	ascii_tree += "\n";
	ascii_tree += "      /  \\";
	ascii_tree += "\n";
	ascii_tree += "     /    \\";
	ascii_tree += "\n";
	ascii_tree += "    /______\\";
	ascii_tree += "\n";
	ascii_tree += "      ||||";
	ascii_tree += "\n";
	ofs << ascii_tree;
}



