/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:02:25 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 11:10:24 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ------------------------------- Orthodox Canonical Form  --------------------------------*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
		if (this == &rhs)
				return *this;
		AForm::operator=(rhs);
		return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
		std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
