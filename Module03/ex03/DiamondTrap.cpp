/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:42:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 17:03:24 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	cout << "DiamondTrap::Default contructor called" << endl;
	// _name = "Anonymous";
	// _hitPoints = 100;
	// _energyPoints = 50;
	// _attackDamage = 20;
}

DiamondTrap::DiamondTrap(string const & name)
{
	cout << "DiamondTrap::Parameterized contructor called" << endl;
	// _name = name;
	// _hitPoints = 100;
	// _energyPoints = 50;
	// _attackDamage = 20;
}

void	DiamondTrap::whoAmI(void)
{
	// cout << "DiamondTrap have enterred in Gate keeper mode" << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap::Destructor called" << endl; 
}
