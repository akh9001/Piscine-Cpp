/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:37:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/03 16:13:45 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed c(4.2f);
	Fixed d(13.37f);
	// Fixed c(5);
	// Fixed d(15);

	cout << "Increment/Decrement Operators\n";
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;
	
	cout << "\nArithmetic Operators\n";
	cout << "nbr1: " << c << endl;
	cout << "nbr2: " << d << endl;
	cout << "nbr1 + nbr2 :" << c + d << endl;
	cout << "nbr2 - nbr1 :" << d - c << endl;
	cout << "nbr1 * nbr2 :" << c * d << endl;
	cout << "nbr2 / nbr1 :" << d / c << endl;
	
	cout << "\nComparison Operators\n";
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	cout << "nbr1 = " << c << "  nbr2 = " << d << endl;
	cout << "nbr1 > nbr2 :" << (c > d) << endl;
	cout << "nbr1 < nbr2 :" << (c < d) << endl;
	cout << "nbr1 >= nbr2 :" << (c >= d) << endl;
	cout << "nbr1 <= nbr2 :" << (c <= d) << endl;
	cout << "nbr1 == nbr2 :" << (c == d) << endl;
	cout << "nbr1 != nbr2 :" << (c != d) << endl;

	cout << "\nMin & Max functions\n";
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	const Fixed cc = c, cd = d;
	cout << "max of nbr1 and nbr2 is :" << Fixed::max(c, d) << endl;
	cout << "min of nbr1 and nbr2 is :" << Fixed::min(c, d) << endl;
	cout << "const max of nbr1 and nbr2 is :" << Fixed::max(cc, cd) << endl;
	cout << "const min of nbr1 and nbr2 is :" << Fixed::min(cc, cd) << endl;

	return (0);
}