/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:04:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 20:39:29 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Anonymous", 100, 100, 30)
{
	cout << "FragTrap::Default contructor called" << endl;
}

FragTrap::FragTrap(string const & name) : ClapTrap(name, 100, 100, 30)
{
	cout << "FragTrap::Parameterized contructor called" << endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	cout << "FragTrap::Copy contructor called" << endl;
	*this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return(*this);
}

void	FragTrap::attack(string const & target)
{
	cout << "FragTrap " << _name << " attack " << target << ", causing ";
	cout << _attackDamage << " points of damage!" << endl;
}

void	FragTrap::highFivesGuys(void)
{
	cout << "FragTrap : high fives guys !!!" << endl;
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap::Destructor called" << endl; 
}

