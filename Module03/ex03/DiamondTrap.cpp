/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:42:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 20:39:10 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Anonymous", 100, 50, 30)
{
	cout << "DiamondTrap::Default contructor called" << endl;
}

DiamondTrap::DiamondTrap(string const & name) : ClapTrap(name + "_clap_name", 100, 50, 30)
{
	cout << "DiamondTrap::Parameterized contructor called" << endl;
	_name = name;
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

string	DiamondTrap::get_name_diamond(void) const
{
	return (_name);
}

void		DiamondTrap::set_name_diamond(string const & name)
{
	_name = name;
}

void	DiamondTrap::attack(string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap::Destructor called" << endl; 
}
