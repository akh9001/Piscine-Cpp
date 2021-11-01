/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:06:02 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/01 22:02:07 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Area of triangle with vertices P(x1, y1), Q(x2, y2) and R(x3, y3) :
// A = (1/2) [x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2)]

Fixed Area(Point const a, Point const b, Point const c)
{
	return (
		Fixed(0.5f) * (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()))
	);
}

bool bsp( Point const a, Point const b, Point const c, Point const x)
{
	Fixed	A = Area(a, b, c);
	Fixed	B = Area(a, b, x);
	Fixed	C = Area(a, x,c);
	Fixed	D = Area(x, b,c);
	
	return (((B + C + D) <= A));
	// A = (1/2) * (x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2));
}