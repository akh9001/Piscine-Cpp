/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 06:29:55 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 20:32:38 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// const char *PresidentialPardonForm::Unsigned::what(void) const throw()
// {
// 	return ("PresidentialPardonForm::UnsignedException.");
// }

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", "undefined", 25, 5)
{
	cout << "PresidentialPardonForm::Default constructor called." << endl;
}

PresidentialPardonForm::PresidentialPardonForm(string const &target) :
Form("PresidentialPardonForm", target, 25, 5)
{
	cout << "PresidentialPardonForm::Default constructor called." << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", "undefined", 25, 5)
{
	cout << "PresidentialPardonForm::Copy destructor called." << endl;
	*this = src;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	cout << "PresidentialPardonForm::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
}

void	PresidentialPardonForm::pardon(void) const
{
	cout << get_target() << " has been pardoned by Zafod Beeblebrox." << endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!get_signed())
		throw Form::Unsigned(get_name());
	if (executor.getGrade() > this->get_execGrade())
		throw Form::Illegal(get_name());
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	cout << "PresidentialPardonForm::Destructor called." << endl;
}
