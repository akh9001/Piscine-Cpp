/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:37:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/01 20:56:40 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed c(1);
	Fixed d(5.4f);
	Fixed e(0.5f);
	Fixed  b( Fixed( 5.05f ) * Fixed( 2 ) );

	cout << b << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << b << endl;
	a = e * c + d / e - d;
	cout << "a = "<< a << endl;
	cout << "b = "<< b << endl;
	cout << Fixed::max( a, b ) << endl;
	cout << Fixed::min( a, b ) << endl;
	
	return 0;
}
