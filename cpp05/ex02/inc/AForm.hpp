/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:42:09 by verdant           #+#    #+#             */
/*   Updated: 2023/05/29 10:47:27 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool							_signed;
		const int					_gradeSign;
		const int					_gradeExec;
	public:
		AForm(void);
		AForm(const std::string name, int gradeSign, int gradeExec);
		AForm(const AForm& src);
		AForm& operator=(const AForm& src);
		virtual ~AForm(void) = 0;
		virtual void		execute(const Bureaucrat& executor) const = 0;
		std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		void				beSigned(const Bureaucrat& src);
		void				signAForm(const AForm& src);
};

#endif 