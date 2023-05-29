/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:50:01 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 11:07:31 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class AForm;

class ShurbberyCreationForm : public AForm
{
	public:
		ShurbberyCreationForm(void);
		ShurbberyCreationForm(const std::string target);
		ShurbberyCreationForm(const ShurbberyCreationForm& src);
		ShurbberyCreationForm& operator=(const ShurbberyCreationForm& src);
		virtual ~ShurbberyCreationForm(void);

		virtual void	execute(const Bureaucrat& executor) const;
};

#endif