/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:18:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 01:19:33 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("undefined_Animal")
{
	cout << "Animal::Default constructor called." << endl;
}

Animal::Animal(string type) : type(type)
{
	cout << "Animal::Parameterized constructor called." << endl;
}

Animal::Animal(Animal const &src)
{
	cout << "Animal::Copy constructor called." << endl;
	*this = src;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	cout << "Animal::Assignement operator called." << endl;
	this->type = rhs.type;
	return(*this);
}

void	Animal::makeSound(void) const
{
	cout << "[ " << this->type << " ] says [ undefined sound ]!" << endl;
}

string	Animal::getType(void) const
{
	return(this->type);
}

void	Animal::setType(string const &type)
{
	this->type = type;
}

Animal::~Animal()
{
	cout << "Animal::Destructor called." << endl;
}
