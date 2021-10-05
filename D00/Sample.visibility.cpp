/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.visibility.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:43:08 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 14:01:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.visibility.hpp"

Visibility::Visibility()
{
	std::cout << "Constructor called!" << std::endl;
	this->publicfoo =0;
	std::cout << "this->publicfoo :" << this->publicfoo  << std::endl;
	this->_privateFoo = -1;
	std::cout << "this->_privateFoo :" << this->_privateFoo << std::endl;
	this->publicBar();
	this->_privateBar();
	return;
}

Visibility::~Visibility(void)
{
	std::cout << "Destuctor called!" << std::endl;
	return;
}

void	Visibility::publicBar(void)
{
	std::cout << "Member function publicBar called!" << std::endl;
	return;
}

void	Visibility::_privateBar(void) const
{
	std::cout << "Member function _privateBar called!" << std::endl;
	return;
}

int	Visibility::getPrivateFoo(void) const
{
	return(this->_privateFoo);
}

void	Visibility::setPrivateFoo(int v)
{
	if (v >= 0)
		this->_privateFoo = v;
	return;
}

int	Visibility::compare(Visibility * other) const
{
	if (this->publicfoo == other->publicfoo)
		return (0);
	if (this->publicfoo > other->publicfoo)
		return (1);
	return (-1);
}