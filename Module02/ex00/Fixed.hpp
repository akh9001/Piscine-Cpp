/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:03:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/24 19:35:44 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cmath>
#include <iostream>
#include <string>
#define cin std::cin
#define cout std::cout
#define endl std::endl
#define string std::string

class Fixed
{
private:
	int					_value;
	static const int	_nBit;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed();
	Fixed & operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw); 
};
