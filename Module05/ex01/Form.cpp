/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:32:21 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/26 23:45:29 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Bureaucrat::HighException::what(void) const throw()
{
	return ("Form::GradeTooHighException.");
}

const char *Bureaucrat::LowException::what(void) const throw()
{
	return ("Form::GradeTooLowException.");
}

Form::Form(void) : _name("imposter"), _signed(false), _signGrade(150), _execGrade(150)
{
	cout << "Form::Default constructor called." << endl;
}

Form::Form(string name, bool sign, int signGrade, int execGrade) : _name(name),
		_signed(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	cout << "Form::Parameterized constructor called." << endl;
	if (signGrade < 1 || execGrade < 1)
		throw(HighException());
	else if (signGrade > 150 || execGrade > 150)
		throw(LowException());
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed),
		_signGrade(src._signGrade), _execGrade(src._execGrade)
{
	cout << "Form::Copy Constructor called." << endl;
}

Form	&Form::operator=(const Form &rhs)
{
	cout << "Form::Assignement called." << endl;
	_signed = rhs._signed;
	return (*this);
}

const string	Form::get_name(void) const
{
	return (_name);	
}

bool			Form::get_signed(void) const
{
	return (_signed);	
}

const int		Form::get_signGrade(void) const
{
	return (_signGrade);	
}

const int		Form::get_execGrade(void) const
{
	return (_execGrade);	
}	

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw(LowException());
}

ostream		&operator<<(ostream &out, const Form &rhs)
{
	out << "Form_name : " << rhs.get_name() << rhs.get_signed() ? " is" : " isn't";
	out << " signed. " << rhs.get_signGrade() << " is the grade required to sign it.";
	out << rhs.get_execGrade() << " is the grade required to execute it." << endl;
	return (out);
}

Form::~Form(void)
{
	cout << "Form::Destructor called." << endl;
}