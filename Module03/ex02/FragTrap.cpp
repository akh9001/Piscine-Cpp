/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:04:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 17:16:19 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	cout << "FragTrap::Default contructor called" << endl;
	_name = "Anonymous";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(string const & name)
{
	cout << "FragTrap::Parameterized contructor called" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
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
