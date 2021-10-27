/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:08:56 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/27 21:53:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Ititialization of a static var
int const	Fixed::_nBit = 8;

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

Fixed::Fixed(const int _int)
{
	cout << "Int constructor called" << endl;
	this->_value = _int * (1 << this->_nBit);
	return ;
}

Fixed::Fixed(const float _float)
{
	cout << "Float constructor called" << endl;
	this->_value = roundf(_float * (1 << this->_nBit));
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
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return(_value / (float)(1 << this->_nBit));
}

int		Fixed::toInt( void ) const
{
	return(roundf(_value / (1 << this->_nBit)));
}

ostream & operator << (ostream & out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed	& Fixed::operator=(Fixed const & rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_nBit > rhs._nBit);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->_nBit < rhs._nBit);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->_nBit >= rhs._nBit);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->_nBit <= rhs._nBit);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->_nBit == rhs._nBit);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->_nBit != rhs._nBit);
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}
