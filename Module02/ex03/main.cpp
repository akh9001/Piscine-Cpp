/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:37:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/02 12:17:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	A(0, 0);
	Point	B(4, 1);
	Point	C(2, 3);
	Point	X(2, 2);
	Point	Y(2, 0.5);
	Point	Z(5, 0);

	cout << "The triangle defined by : A(" << A.get_x() << ","<< A.get_y() <<  "), ";
	cout << "B(" << B.get_x() << ","<< B.get_y() <<  ") ";
	cout << "C(" << C.get_x() << ","<< C.get_y() <<  ") " << endl;
	if (bsp(A, B, C, X))
		cout << "  The point X (2, 2)  is inside the triangle !" << endl;
	else
		cout << "  The point X (2, 2)  isn't inside the triangle !" << endl;
	if (bsp(A, B, C, Y))
		cout << "  The point Y(2, 0.5) is inside the triangle !" << endl;
	else
		cout << "  The point Y(2, 0.5) isn't inside the triangle !" << endl;
	if (bsp(A, B, C, Z))
		cout << "  The point Z(5, 0)   is inside the triangle !" << endl;
	else
		cout << "  The point Z(5, 0)   isn't inside the triangle !" << endl;
	return 0;
}
