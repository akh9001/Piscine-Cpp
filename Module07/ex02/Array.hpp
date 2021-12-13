/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:18:25 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/13 03:45:02 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#define	cout		std::cout
#define	cin			std::cin
#define	cerr		std::cerr
#define	string		std::string
#define	endl		std::endl
#define	exception	std::exception
#define RESET   "\033[0m"
#define WHITE   "\033[37m"      /* White */
#define CYAN    "\033[36m"      /* Cyan */
#define RED     "\033[31m"      /* Red */

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_n;
	public:
		class OutOfRange : public exception
		{
			public:
				const char *what() const throw();
		};
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		// Operator Overloading :
		Array			&operator=(Array const &rhs);
		T				&operator[](const size_t i);
		T const			&operator[](const size_t i) const;
		unsigned int	size(void) const;
		~Array(void);
};

template <typename T>
Array<T>::Array(void): _n(0)
{
	_arr = nullptr;
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	_arr = new T[_n];
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this == &rhs)
		return (*this);
	if (!_n)
		delete [] _arr;
	if (!rhs._arr)
		_arr = rhs._arr;
	else
	{
		_n = rhs._n;
		_arr = new T[_n];
		for (int i = 0; i < static_cast <int>(_n); i++)
			_arr[i] = rhs._n;
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](const size_t i)
{
	if (i >= _n)
		throw OutOfRange();
	return (_arr[i]);
}

template <typename T>
T const & Array<T>::operator[](const size_t i) const
{
	if (i >= _n)
		throw OutOfRange();
	return (_arr[i]);
}

template <typename T>
const char *Array<T>::OutOfRange::what() const throw()
{
	return ("Index out of range");
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return(_n);
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _arr;
}