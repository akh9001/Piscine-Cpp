/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:39:37 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 01:47:53 by akhalidy         ###   ########.fr       */
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

int		return_lvl(t_enumToString *tab, string level)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (level == tab[i].str)
			return(tab[i].lvl);
		i++;
	}
	return(-1);
}

Form	*Intern::makeForm(const string &name, const string &target)
{
	t_enumToString tab[]= {
		{PresidentialPardonForm, "PresidentialPardonForm"},
		{RobotomyRequestForm, "RobotomyRequestForm"},
		{ShrubberyCreationForm, "ShrubberyCreationForm"},
	};
	Form	*form;
	
	form = nullptr;
	switch(return_lvl(tab, name))
	{
		case PresidentialPardonForm : form = new PresidentialPardonForm::PresidentialPardonForm(target);
					break;
		case RobotomyRequestForm : form = new RobotomyRequestForm::RobotomyRequestForm(target);
					break;
		case ShrubberyCreationForm : form = new ShrubberyCreationForm::ShrubberyCreationForm(target);
					break;
		default :
			cout << "[ The requested form is invalid ]" << endl;
	}
	return (form);
}

Intern::~Intern(void)
{
	cout << "Intern::Destructor called." << endl;
}