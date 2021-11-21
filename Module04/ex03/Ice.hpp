/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:17:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 07:20:38 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &rhs);
		AMateria* clone(void) const;
		void use(ICharacter& target);
		~Ice(void);
};

Ice::Ice(void) : AMateria("ice")
{
	cout << "Ice::Default constructor called." << endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	cout << "Ice::Copy constructor called." << endl;
	*this = src;
}

Ice  &Ice::operator=(Ice const &rhs)
{
	cout << "Ice::Assignement operator called." << endl;
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
	cout << "Ice::Destructor called." << endl;
}
