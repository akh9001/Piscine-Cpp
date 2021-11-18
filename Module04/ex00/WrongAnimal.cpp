/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:18:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/18 17:24:10 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("undefined_Animal")
{
	cout << "WrongAnimal::Default constructor called." << endl;
}

WrongAnimal::WrongAnimal(string type) : type(type)
{
	cout << "WrongAnimal::Parameterized constructor called." << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	cout << "WrongAnimal::Copy constructor called." << endl;
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	cout << "WrongAnimal::Assignement operator called." << endl;
	this->type = rhs.type;
	return(*this);
}

void	WrongAnimal::makeSound(void) const
{
	cout << "[ " << this->type << " ] says [ undefined sound ]!" << endl;
}

string	WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::setType(string const &type)
{
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal::Destructor called." << endl;
}
