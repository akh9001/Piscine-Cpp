/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:19:15 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/17 22:08:04 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	cout << "Cat::Default constructor called." << endl;
}

Cat::Cat(Cat const &src)
{
	cout << "Cat::Copy constructor called." << endl;
	*this = src;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	cout << "Cat::Assignation operator called" << endl;
	Animal::operator=(rhs);
	return(*this);
}

void	Cat::makeSound(void) const
{
	cout << "A " << this->type << " says Meow !!" << endl;
}

Cat::~Cat(void)
{
	cout << "Cat::Destructor called." << endl;
}
