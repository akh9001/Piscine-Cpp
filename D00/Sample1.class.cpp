/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:35:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 19:47:28 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called!" << std::endl;
	this->a1 = p1;
	std::cout << "this->a1 :" << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "this->a2 :" << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "this->a3 :" << this->a3 << std::endl;
	this->bar();
	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destuctor called!" << std::endl;
	return;
}

void	Sample1::bar(void)
{
	std::cout << "Member function bar called!" << std::endl;
	return;
}