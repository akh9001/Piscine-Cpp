/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:50:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/15 19:42:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define WHITE   "\033[37m"      /* White */
#define CYAN    "\033[36m"      /* Cyan */

class NotFound : public std::exception
{
	public:
		const char *what() const throw();
};

const char *NotFound::what() const throw()
{
	return ("\033[31mElement Not Found!\033[0m");
}

template <typename T>
int	easyfind(T v, int value)
{
	unsigned long	dst;
	// Declaring an iterator
    typename T::iterator it;

	it = find (v.begin(), v.end(), value);
	dst = it - v.begin();
	if (dst < v.size())
		return (dst);
	throw(NotFound());
}
