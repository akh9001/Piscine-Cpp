/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:04:06 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/01 22:05:31 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constuctor :

Point::Point(void) : x(0), y(0)
{
	cout << "Default constructor called" << endl;
	return;
}

// Copy constructor :

Point::Point(Point const & src): x(src.x), y(src.y)
{
	cout << "Copy constructor called" << endl;
	return;
}

// Parameterized constructor :

Point::Point(const float x, const float y) : x(x), y(y)
{
	return ;
}

Fixed Point::get_x(void) const
{
	return(x);
}

Fixed Point::get_y(void) const
{
	return(y);
}

Point::~Point()
{
	cout << "Destructor called" << endl;
}