/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:56:14 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/18 08:12:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(unsigned int N) : _N(N)
{
	_v.reserve(_N);
}

Span::Span(Span const &src)
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	if (this == &rhs)
		return(*this);
	_N = rhs._N;
	_v = rhs._v;
	return(*this);
}

void Span::addNumber(int number)
{
	if (_v.size() > _N)
		throw (LimitExceeded());
	_v.push_back(number);
}

const char	*Span::NoSpan::what(void) const throw()
{
	return ("No Span !");
}

const char	*Span::LimitExceeded::what(void) const throw()
{
	return ("Limit Exceeded !");
}

int	 Span::shortestSpan(void)
{
	int							span;
	int							shortSpan;
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;

	if (_v.size() <= 1)
		throw(NoSpan());
	tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	shortSpan = -1;
	for(it = tmp.begin(); it != tmp.end() - 1; it++)
	{
		span = *(it + 1) - *it;
		if (span < shortSpan || shortSpan == -1)
			shortSpan = span;
	}
	return (shortSpan);
}
int  Span::longestSpan(void)
{
	int							longestSpan;
	std::vector<int>			tmp;

	if (_v.size() <= 1)
		throw(NoSpan());
	tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	longestSpan = *(tmp.end() - 1) - *tmp.begin();
	return (longestSpan);
}

vect	Span::get_v() const
{
	return (_v);
}

void	Span::set_vect(int arr[], int N)
{
	std::vector<int>	v(arr, arr + N);
	_v = v;
}

void	Span::print_vect(void)
{
	vect::iterator	it;
	
	for(it = _v.begin(); it != _v.end(); it++)
		std::cout << *it << std::endl;
}

Span::~Span(){}
