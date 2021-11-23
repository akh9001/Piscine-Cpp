/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:26:48 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/23 06:56:36 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(void)
{
	// cout << "Character::Default constructor called." << endl;
	this->_name = "anonymous";
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(string const &name)
{
	// cout << "Character::Parameterized constructor called." << endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(Character const &src)
{
	// cout << "Character::Copy constracter called." << endl;
	*this = src;
}

Character &Character::operator=(Character const &rhs)
{
	// cout << "Character::Assignement operator called." << endl;
	if (this == &rhs)
		return (*this);
	this->_name =  rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = nullptr;
	}
	return (*this);
}

string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character(void)
{
	// cout << "Character::Destructor called." << endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}
