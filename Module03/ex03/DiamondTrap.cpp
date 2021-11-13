/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:42:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/13 18:58:56 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	cout << "DiamondTrap::Default contructor called" << endl;
	_name = "Anonymous";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(string const & name)
{
	cout << "DiamondTrap::Parameterized contructor called" << endl;
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

void	DiamondTrap::whoAmI(void)
{
	cout << "My DiamondTrap name is : " << _name << " My  clapTrap name is : " << ClapTrap::_name << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	cout << "DiamondTrap::Copy contructor called" << endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	_name = rhs._name;
	return(*this);
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap::Destructor called" << endl; 
}
