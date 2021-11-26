/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:37:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/03 13:09:35 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	A(20, 30);
	Point	B(30, 40);
	Point	C(45, 25);
	Point	X(25, 30);  //inside
	Point	Y(40, 32); //outside
	Point	Z(25, 35);   //outside : on the edge.

	if (bsp(A, B, C, X))
		cout << "  The point X is inside the triangle !" << endl;
	else
		cout << "  The point X is outside the triangle !" << endl;
	if (bsp(A, B, C, Y))
		cout << "  The point Y is inside the triangle !" << endl;
	else
		cout << "  The point Y is outside the triangle !" << endl;
	if (bsp(A, B, C, Z))
		cout << "  The point Z is inside the triangle !" << endl;
	else
		cout << "  The point Z is outside the triangle !" << endl;
	return 0;
}
