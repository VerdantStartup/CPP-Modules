/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:04:03 by verdant           #+#    #+#             */
/*   Updated: 2023/05/31 16:24:42 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150) {
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm ( const std::string name, int gradeSign, int gradeExec ) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw GradeTooHighException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw GradeTooLowException();
	std::cout << "Parametric constructor called" << std::endl;
}

AForm::AForm( const AForm & src ) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec) {
	std::cout << "Copy constructor called" << std::endl;
}

AForm &	AForm::operator=( const AForm & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs ) {
		this->_signed = rhs._signed;
	}
	return *this;
}

AForm::~AForm( void ) {
	std::cout << "Destructor called" << std::endl;
}

std::string AForm::getName(void) const {
	return this->_name;
}

bool AForm::getSigned(void) const {
	return this->_signed;
}

int AForm::getGradeSign(void) const {
	return this->_gradeSign;
}

int AForm::getGradeExec(void) const {
	return this->_gradeExec;
}

void	AForm::beSigned(const Bureaucrat& src)
{
	if (src.getGrade() <= getGradeSign())
		_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::signForm(const AForm& src)
{	
	if (src.getSigned())
		std::cout << getName() << ": signed succesfully" << std::endl;
	else
	{
		cout << "Form was not signed. ";
		cout << "The Bureaucrat's score needs to be lower than " << src.getGradeSign() << endl;
	}
}

void	AForm::checkBureaucrat(const Bureaucrat& src) const
{
	if (this->getSigned() == false)
		throw GradeNotSigned();
	if (!(src.getGrade() <= this->getGradeExec()))
		throw GradeTooLowException();
}
