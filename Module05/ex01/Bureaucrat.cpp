/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:10:43 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/27 06:20:24 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::HighException::what(void) const throw()
{
	return ("Bureaucrat::GradeTooHighException.");
}

const char *Bureaucrat::LowException::what(void) const throw()
{
	return ("Bureaucrat::GradeTooLowException.");
}

Bureaucrat::Bureaucrat(void) : _name("Anonymous")
{
	cout << "Bureauctrat::Default constructor called." << endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(string const name, int grade) : _name(name)
{
	cout << "Bureaucrat::Parametrized constructor called." << endl;
	if (grade < 1)
		throw (HighException());
	else if (grade > 150)
		throw (LowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	cout << "Bureaucrat::Copy constructor called." << endl;
	*this = src;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	cout << "Bureauctrat::Assignment operator called." << endl;
	_grade = rhs._grade;
	return (*this);
}

string const	Bureaucrat::getName(void) const
{
	return(_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade < 2)
		throw (HighException());
	_grade -= 1; 
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade > 149)
		throw (LowException());
	_grade += 1; 
}

void	Bureaucrat::signForm(Form const &form)
{
	if (_grade <= form.get_signGrade())
		cout << _name << " signs " << form.get_name() << endl;
	else
	{
		cout << _name << " cannot sign " << form.get_name();
		cout << " because too low grade." << endl;
	}	
}

Bureaucrat::~Bureaucrat()
{
	cout << "Bureauctrat::Destructor called." << endl;
}

ostream &operator << (ostream &out, const Bureaucrat &src)
{
	out << "<"<< src.getName() << ">, bureaucrat grade <";
	out << src.getGrade()  << ">" << endl;
	return (out);
}
