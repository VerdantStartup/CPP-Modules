/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:58:47 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 11:08:48 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

// # include <cstdlib>
// # include <ctime>
// # include <stdexcept>
# include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
		virtual ~RobotomyRequestForm(void);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif