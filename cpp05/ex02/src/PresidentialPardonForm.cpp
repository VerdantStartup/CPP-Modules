/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:59:15 by verdant           #+#    #+#             */
/*   Updated: 2023/05/31 16:18:51 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ------------------------------- Orthodox Canonical Form --------------------------------*/

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Default", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src) {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
		if (this == &rhs)
				return *this;
		AForm::operator=(rhs);
		return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "--- PresidentialPardonForm destructor called ---" << endl;
	return ;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	checkBureaucrat(executor);
	cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << endl;
}
