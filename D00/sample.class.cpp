/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:34:16 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 17:55:09 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

//Definition des fonctions:
//this : est un pointeur sur l instance courant.
		Autrement dit c'est une refference sur l instance courant.
Sample::Sample(void)
{
	std::cout << "Constructor called!" << std::endl;
	this->foo = 42;
	std::cout << "this->foo :" << this->foo << std::endl;
	this->bar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destuctor called!" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called!" << std::endl;
	return;
}