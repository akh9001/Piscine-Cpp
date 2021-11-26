/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:03:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/03 14:42:12 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cmath>
#include <iostream>
#include <string>
#define cin		std::cin
#define cout	std::cout
#define endl	std::endl
#define string	std::string
#define ostream	std::ostream

class Fixed
{
private:
	int					_value;
	static const int	_nBit;
public:
	Fixed(void);
	Fixed(const int _int);
	Fixed(const float _float);
	Fixed(Fixed const & src);
	~Fixed();
	Fixed	& operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	bool	operator>(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw); 
	float	toFloat( void ) const;
	int		toInt( void ) const;
	static Fixed	&min(Fixed &lhs, Fixed &rhs);
	static Fixed	&max(Fixed &lhs, Fixed &rhs);
	static Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
	static Fixed const	&max(Fixed const &lhs, Fixed const &rhs);
};

ostream & operator << (ostream & out, const Fixed &obj);
