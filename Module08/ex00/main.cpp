/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:29:01 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/15 19:45:41 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
 
int main()
{
    // Create a vector containing integers
    std::vector<int> v;
	std::vector<int>::iterator it;
	int	element;
 
    // Add two more integers to vector
	
    v.push_back(7);
    v.push_back(5);
    v.push_back(0);
    v.push_back(8);
    v.push_back(25);
    v.push_back(13);
 
    // Print out the vector
    std::cout << CYAN << "v = { ";
    for (it = v.begin(); it != v.end(); it++)
	{
        std::cout << *it;
		if ((it + 1) != v.end())
		std::cout << ", ";
    }
    std::cout << "}" << std::endl;
	try
	{
		element = easyfind(v, 0);
		std::cout << WHITE << "Index of the first occurrence is : ";
		std::cout << element << std::endl;
		element = easyfind(v, 50);
		std::cout << WHITE << "Index of the first occurrence is : ";
		std::cout << element << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}