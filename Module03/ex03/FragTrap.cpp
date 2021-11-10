/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:04:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 16:13:34 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap(void)
{
	cout << "Fragtrap::Default contructor called" << endl;
	_name = "Anonymous";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

Fragtrap::Fragtrap(string const & name)
{
	cout << "Fragtrap::Parameterized contructor called" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

void	Fragtrap::highFivesGuys(void)
{
	cout << "Fragtrap : high fives guys !!!" << endl;
}

Fragtrap::~Fragtrap(void)
{
	cout << "Fragtrap::Destructor called" << endl; 
}
