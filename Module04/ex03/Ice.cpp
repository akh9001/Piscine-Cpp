/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:15:55 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/22 04:40:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice(void) : AMateria("ice")
{
	// cout << "Ice::Default constructor called." << endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	// cout << "Ice::Copy constructor called." << endl;
	*this = src;
}

Ice  &Ice::operator=(Ice const &rhs)
{
	// cout << "Ice::Assignement operator called." << endl;
	(void)rhs;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return(new Ice());
}

void	Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at "<< target.getName() << " *" << endl;
}

Ice::~Ice(void)
{
	// cout << "Ice::Destructor called." << endl;
}
