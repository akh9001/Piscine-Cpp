/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:51:27 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 20:20:45 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.class.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called!" << std::endl;
	std::cout << "this->a1 :" << this->a1 << std::endl;
	std::cout << "this->a2 :" << this->a2 << std::endl;
	std::cout << "this->a3 :" << this->a3 << std::endl;
	this->bar();
	return;
}

Sample2::~Sample2(void)
{
	std::cout << "Destuctor called!" << std::endl;
	return;
}

void	Sample2::bar(void)
{
	std::cout << "Member function bar called!" << std::endl;
	return;
}
