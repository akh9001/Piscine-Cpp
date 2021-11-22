/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 00:41:01 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/22 04:40:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	cout << "AMateria::Default constructor called." << endl;
}

AMateria::AMateria(string const &type)
{
	// cout << "AMateria::Parameterized constructor called." << endl;
	this->type = type;
}

AMateria::AMateria(AMateria const &src)
{
	// cout << "AMateria::Copy constructor called." << endl;
	this->type = src.type;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	// cout << "AMateria::Assignement operator called" << endl;
	(void)rhs;
	return(*this);
}

string const &AMateria::getType(void) const
{
	return(this->type);
}

void AMateria::use(ICharacter &target)
{
	cout << "* "<< target.getName() << " 's behavior is undefined*" << endl;
}

AMateria::~AMateria(void)
{
	// cout << "AMateria::Destructor called." << endl;
}
