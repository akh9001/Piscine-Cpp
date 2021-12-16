/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:08:16 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/16 19:08:19 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;

//   // set some content in the vector:
//   for (int i=0; i<5; i++) myvector.push_back(i);

//   std::cout << "size: " << (int) myvector.size() << '\n';
//   std::cout << "capacity: " << (int) myvector.capacity() << '\n';
//   std::cout << "max_size: " << myvector.max_size() << '\n';
//   return 0;
// }

// clearing vectors
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;
//   std::vector<int> _vector;
  
//   std::cout << "capacity: " << (int) myvector.size() << '\n';
//   myvector.push_back (100);
//   myvector.push_back (200);
//   myvector.push_back (300);
//   _vector.push_back (15);
//   _vector.push_back (25);
//   _vector.push_back (35);

//   myvector.clear();
	
//   std::cout << "vector contains:";
//   for (unsigned i=0; i<_vector.size(); i++)
//     std::cout << ' ' << _vector[i];
// 	std::cout << '\n';
// 	std::cout << "capacity: " << (int) _vector.size() << '\n';
  
// //   _vector.clear();
//   std::cout << "capacity of cleared vector: " << (int) _vector.size() << '\n';
  
//   myvector.push_back (1101);
//   myvector.push_back (2202);
//   _vector = myvector;
  
// 	std::cout << "capacity: " << (int) _vector.size() << '\n';
// 	std::cout << "vector contains:";
//   for (unsigned i=0; i<_vector.size(); i++)
//     std::cout << ' ' << _vector[i];
//   std::cout << '\n';

//   return 0;
// }
#include "Span.hpp"
int main()
{
	// Span sp = Span(5);
	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << WHITE << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
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