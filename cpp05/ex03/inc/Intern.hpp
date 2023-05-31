/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:21:02 by mwilsch           #+#    #+#             */
/*   Updated: 2023/05/31 17:35:51 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <exception>
# include <iostream>

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern {
public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		AForm *makeForm(std::string formName, std::string formTarget);
};

#endif
