/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:51:05 by verdant           #+#    #+#             */
/*   Updated: 2023/05/30 15:21:33 by mwilsch          ###   ########.fr       */
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
	
	string		ascii_tree;
	uint32_t	lines;
	uint32_t	spacesIteration = 7;
	uint32_t	spacesIterInside = 2;

	for (lines = 4; lines != 0; lines--)
	{
		for (uint32_t spaces = spacesIteration; spaces != 0; spaces--)
		{
			ascii_tree += ' ';
			if (spaces == 1)
			{
				if (lines == 4)
					ascii_tree += "/\\";
				else
				{
					ascii_tree += '/';
					for (uint32_t i = 0; i < spacesIterInside; i++)
					{
						if (spacesIterInside <= 4)
							ascii_tree += ' ';
						else
						{
							ascii_tree += "______";
							break ;
						}
					}
					spacesIterInside += 2;
					ascii_tree += '\\';
				}
			}
		}
		ascii_tree += '\n';
		spacesIteration--;
	}
	ascii_tree += "      ||||";
	ofs << ascii_tree;
}



