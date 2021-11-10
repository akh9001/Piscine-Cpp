/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:08:56 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/01 21:28:58 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Ititialization of a static var
int const	Fixed::_nBit = 8;

Fixed::Fixed(void) : _value(0)
{
	// cout << "Default constructor called" << endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	// cout << "Copy constructor called" << endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int _int)
{
	// cout << "Int constructor called" << endl;
	this->_value = _int * (1 << this->_nBit);
	return ;
}

Fixed::Fixed(const float _float)
{
	// cout << "Float constructor called" << endl;
	this->_value = roundf(_float * (1 << this->_nBit));
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	// cout << "Assignation operator called" << endl;
	this->_value = rhs.getRawBits();
	return (*this);
}
int 	Fixed::getRawBits(void) const
{
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	// cout << "setRawBits member function called" << endl;
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

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->_value != rhs._value);
}

Fixed Fixed::operator++(void)
{
	++_value;
	return(*this);
}

Fixed Fixed::operator--(void)
{
	--_value;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	_value++;
	return(tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	_value--;
	return(tmp);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs._value < rhs._value)
		return(lhs);
	return(rhs);
}

Fixed	&Fixed::max(Fixed &lhs,Fixed &rhs)
{
	if (lhs._value > rhs._value)
		return(lhs);
	return(rhs);
}

Fixed const	&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs._value < rhs._value)
		return(lhs);
	return(rhs);
}

Fixed const	&Fixed::max(Fixed const &lhs,Fixed const &rhs)
{
	if (lhs._value > rhs._value)
		return(lhs);
	return(rhs);
}

Fixed::~Fixed(void)
{
	// cout << "Destructor called" << endl;
}
