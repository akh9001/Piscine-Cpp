/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:44:28 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/16 19:09:06 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
	Span	sp = Span(10000);
	
	srand (time(NULL));
	for(int i = 0; i < 10000; i++)
		sp.addNumber(rand() % (i + 1) + i);
	std::cout << WHITE << "ShortestSpan : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;
	//Print the vector sorted :
 		// std::cout << CYAN << "Print The vector sorted:" << RESET << std::endl;
		// std::vector<int> v = sp.get_v();
		//
		// std::sort(v.begin(), v.end());
 		// for (unsigned i=0; i< v.size(); i++)
    	// std::cout << ' ' << v[i];
		// std::cout << '\n';
}
