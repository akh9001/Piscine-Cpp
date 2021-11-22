/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:15:55 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/22 04:39:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void) : AMateria("cure")
{
	// cout << "Cure::Default constructor called." << endl;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	// cout << "Cure::Copy constructor called." << endl;
	*this = src;
}

Cure  &Cure::operator=(Cure const &rhs)
{
	// cout << "Cure::Assignement operator called." << endl;
	(void)rhs;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return(new Cure());
}

void	Cure::use(ICharacter &target)
{
	cout << "* heals "<< target.getName() << "’s wounds *" << endl;
}

Cure::~Cure(void)
{
	// cout << "Cure::Destructor called." << endl;
}
