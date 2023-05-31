/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:02:25 by verdant           #+#    #+#             */
/*   Updated: 2023/05/31 16:17:31 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <random>

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
	cout << "--- RobotomyRequestForm destructor called ---" << endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    double ranVal;

    checkBureaucrat(executor);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    cout << "Drilling noise: drillllllllllllllllllxrxrxr" << endl;

    ranVal = dis(gen);

    if (ranVal < 0.5)
        cout << getName() << " Robotomy is successful" << endl;
    else
        cout << getName() << " Robotomy is unsuccessful" << endl;
}



