/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:34:16 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 10:32:55 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

//Definition des fonctions:
//this : est un pointeur sur l instance courant.
//		Autrement dit c'est une refference sur l instance courant.
Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called!" << std::endl;
	// this->qd = 42;
	// this->pi = f;

	this->bar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destuctor called!" << std::endl;
	return;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called!" << std::endl;
	std::cout << "this->pi :" << this->pi << std::endl;
	std::cout << "this->qd :" << this->qd << std::endl;	
	return;
}
