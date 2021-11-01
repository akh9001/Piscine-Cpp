/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:03:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/01 22:04:01 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(Point const & src);
		Point &operator=(Point const &rhs);
		Fixed get_x(void) const;
		Fixed get_y(void) const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
