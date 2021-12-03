/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:39:37 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 03:05:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	cout << "Intern::Default constructor called." << endl;
}

Intern::Intern(Intern const &src)
{
	cout << "Intern::Copy constructor called." << endl;
	(void)src;
}

Intern &Intern::operator=(Intern const &rhs)
{
	cout << "Intern::Assignement operator called." << endl;
	(void) rhs;
	return (*this);
}


Form	*Intern::clone_PPF(const string &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::clone_RRF(const string &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::clone_SCF(const string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const string &name, const string &target)
{
	string test[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};
	Form* (Intern::*ptr[3]) (const string &) = {
		&Intern::clone_PPF,
		&Intern::clone_RRF,
		&Intern::clone_SCF
	};

	for (int i = 0; i < 3; i++)
	{
		if (test[i] == name)
			return((this->*ptr[i])(target));
	}
	cerr << RED << "[ The requested form is invalid ]" << RESET << endl;
	return (nullptr);
}

Intern::~Intern(void)
{
	cout << "Intern::Destructor called." << endl;
}
