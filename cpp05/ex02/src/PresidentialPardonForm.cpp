/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:59:15 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 11:14:56 by verdant          ###   ########.fr       */
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

PresidentialPardonForm::~PresidentialPardonForm() {}
