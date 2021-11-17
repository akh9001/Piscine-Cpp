/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:22:25 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 18:49:08 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	cout << "Default contructor called" << endl;
	_name = "Anonymous";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(string const & name) : _name(name)
{
	cout << "Parameterized contructor called" << endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(string const & name, int hitPoints, int energyPoints, int attackDamage)
{
	cout << "Parameterized contructor 2 called" << endl;
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return(*this);
}

void	ClapTrap::attack(string const & target)
{
	cout << "ClapTrap " << _name << " attack " << target << ", causing ";
	cout << _attackDamage << " points of damage!" << endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << "ClapTrap " << _name << " take " << amount << " damage, causing ";
	cout << _attackDamage << " points of damage!" << endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout << "ClapTrap " << _name << " is repaired by " << amount << endl;
}

string		ClapTrap::get_name(void) const
{
	return(_name);
}

int			ClapTrap::get_hitPoints(void) const
{
	return (_hitPoints);
}

int			ClapTrap::get_energyPoints(void) const
{
	return (_energyPoints);
}

int			ClapTrap::get_attackDamage(void) const
{
	return (_attackDamage);
}

void		ClapTrap::set_name(string const & name)
{
	_name = name;
}

void		ClapTrap::set_hitPoints(const int amount)
{
	_hitPoints = amount;
}

void		ClapTrap::set_energyPoints(const int amount)
{
	_energyPoints = amount;
}

void		ClapTrap::set_attackDamage(const int amount)
{
	_attackDamage = amount;
}


ClapTrap::~ClapTrap(void)
{
	cout << "Destructor called" << endl; 
}