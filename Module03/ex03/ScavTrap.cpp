/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 18:46:46 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Anonymous", 100, 50, 20)
{
	cout << "ScavTrap::Default contructor called" << endl;
}

ScavTrap::ScavTrap(string const & name) : ClapTrap(name, 100, 50, 20)
{
	cout << "ScavTrap::Parameterized contructor called" << endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	cout << "ScavTrap::Copy contructor called" << endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return(*this);
}

void	ScavTrap::attack(string const & target)
{
	cout << "ScavTrap " << _name << " attack " << target << ", causing ";
	cout << _attackDamage << " points of damage!" << endl;
}

void	ScavTrap::guardGate(void)
{
	cout << "ScavTrap have enterred in Gate keeper mode" << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << "ScavTrap::Destructor called" << endl; 
}
