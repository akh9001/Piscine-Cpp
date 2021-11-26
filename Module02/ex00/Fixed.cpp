/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:08:56 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/03 13:13:52 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Ititialization of a static var
int	_nBit = 8;

Fixed::Fixed(void) : _value(0)
{
	cout << "Default constructor called" << endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	cout << "Assignation operator called" << endl;
	this->_value = rhs.getRawBits();
	return (*this);
}
int 	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->_value = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}
