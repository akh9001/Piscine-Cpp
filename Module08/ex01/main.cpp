/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:44:28 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/18 08:11:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
	// Trying to add n elements which is greater than the size of the array :
	try
	{
		Span	sp(2);
		
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << '\n';
	}
	// Apply shortestSpan/longestSpan on an empty array/ with size = 1 
	try
	{
		Span	sp(0);
		// Span	sp(1);
		
		// sp.addNumber(0);
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << '\n';
	}

	Span	sp = Span(10000);
	int		arr[10000];
	
	srand (time(NULL));
	for(int i = 0; i < 10000; i++)
		arr[i] = rand() % 10000 + i;
	sp.set_vect(arr, 10000);
	std::cout << WHITE << "ShortestSpan : " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;
	// Print the vector sorted :
 		// std::cout << CYAN << "Print The vector sorted:" << RESET << std::endl;
		// std::vector<int> v = sp.get_v();
		// std::sort(v.begin(), v.end());
 		// for (unsigned i=0; i< v.size(); i++)
		// 	std::cout << ' ' << v[i];
		// std::cout << '\n';
}
  