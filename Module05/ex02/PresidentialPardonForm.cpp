/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 06:29:55 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/28 07:50:27 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const char *PPF::Unsigned::what(void) const throw()
{
	return ("PPF::UnsignedException.");
}

PPF::PPF(void) :
Form("PresidentialPardonForm", "undefined", 25, 5)
{
	cout << "PPF::Default constructor called." << endl;
}

PPF::PPF(string target) :
Form("PresidentialPardonForm", target, 25, 5)
{
	cout << "PPF::Default constructor called." << endl;
}

PPF::PPF(PPF const &src) : Form("PresidentialPardonForm", "undefined", 25, 5)
{
	cout << "PPF::Copy destructor called." << endl;
	*this = src;
}

PPF		&PPF::operator=(PPF const &src)
{
	cout << "PPF::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
}

void	PPF::pardon(void) const
{
	cout << get_target() << " has been pardoned by Zafod Beeblebrox." << endl;
}

void	PPF::execute(Bureaucrat const & executor) const
{
	if (!get_signed())
		throw(Unsigned());
}

PPF::~PPF(void)
{
	cout << "PPF::Destructor called." << endl;
}
