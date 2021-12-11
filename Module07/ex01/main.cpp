/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 07:36:06 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/11 12:03:35 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];
// iter( tab, 5, print );
// iter( tab2, 5, print );
// return 0;
// }

// class Point
// {
// 	private:
// 		float _x;
// 		float _y;
// 	public:
// 		Point(void) : _x(0.5), _y(-2.4) {}
// 		float	getX() const {return _x;}
// 		float	getY() const {return _y;}
// };
// std::ostream & operator<<( std::ostream & o, Point const & rhs )
// {
// 	o << rhs.getX();
// 	o << " ";
// 	o << rhs.getY();
// 	return o;
// }
// #include <sstream>
// #include <string>
// void	initialize(std::string tab[], size_t n)
// {
// 	std::ostringstream ss;

// 	for(size_t i = 0; i < n; i++)
// 	{
// 		ss << 'A' + i;
// 		tab[i] = static_cast <std::string> (std::string(ss.str()));
// 	}
// }

// int main(void)
// {
// 	// int			i_tab[] = {1, 2, 3, 4};
// 	std::string	s_tab[3];
// 	// Point		pt_tab[4];
	
// 	// iter(i_tab, 4, printElement);
// 	// iter(pt_tab, 4, printElement);
// 	initialize(s_tab, 3);
// 	iter(s_tab, 4, printElement);
// }
