/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:54:56 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 10:19:19 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool							_signed;
		const int					_gradeSign;
		const int					_gradeExec;
	public:
		Form(void);
		Form(const std::string name, int gradeSign, int gradeExec);
		Form(const Form& src);
		Form& operator=(const Form& src);
		~Form(void);
		std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		void				beSigned(const Bureaucrat& src);
		void				signForm(const Form& src);
};

#endif