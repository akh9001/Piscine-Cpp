/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:19:15 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/19 18:10:53 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	cout << "Cat::Default constructor called." << endl;
	this->_brain = new Brain();
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
	delete this->_brain;
	this->_brain = new Brain();
	this->_brain[0] = rhs._brain[0];
	return(*this);
}

void	Cat::makeSound(void) const
{
	cout << "A " << this->type << " says Meow !!" << endl;
}

Brain	*Cat::getBrain(void) const
{
	return(this->_brain);
}

Cat::~Cat(void)
{
	cout << "Cat::Destructor called." << endl;
	delete this->_brain;
}
