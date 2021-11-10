/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 16:04:46 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	cout << "ScavTrap::Default contructor called" << endl;
	_name = "Anonymous";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(string const & name)
{
	cout << "ScavTrap::Parameterized contructor called" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

void	ScavTrap::guardGate(void)
{
	cout << "ScavTrap have enterred in Gate keeper mode" << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << "ScavTrap::Destructor called" << endl; 
}
