/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 00:41:01 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 00:50:55 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	cout << "AMateria::Default constructor called." << endl;
}

AMateria::AMateria(string const &type)
{
	cout << "AMateria::Parameterized constructor called." << endl;
	this->type = type;
}

string const &AMateria::getType(void) const
{
	return(this->type);
}

void AMateria::use(ICharacter &target)
{
	
}

AMateria::~AMateria(void)
{
	cout << "AMateria::Destructor called." << endl;
}
