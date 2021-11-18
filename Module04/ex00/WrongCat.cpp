/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:19:15 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/18 17:21:43 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	cout << "WrongCat::Default constructor called." << endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	cout << "WrongCat::Copy constructor called." << endl;
	*this = src;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	cout << "WrongCat::Assignation operator called" << endl;
	WrongAnimal::operator=(rhs);
	return(*this);
}

void	WrongCat::makeSound(void) const
{
	cout << "A " << this->type << " says Meow !!" << endl;
}

WrongCat::~WrongCat(void)
{
	cout << "WrongCat::Destructor called." << endl;
}
