/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:13:46 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 19:39:40 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) :  _name(name)
{
	_wp = NULL;
	cout << "HumanB : "<< this->getName() <<" was created !" << endl;
	return ;
}

HumanB::~HumanB(void)
{
	cout << "HumanB : "<< this->getName() <<" died !" << endl;
	return ;
}

string		HumanB::getName(void) const
{
	return (_name);
}

void		HumanB::setName(string name)
{
	_name = name;
}

Weapon*		HumanB::getWeapon(void)
{
	return (_wp);
}

void		HumanB::setWeapon(Weapon &wp)
{
	_wp = &wp;
}

void		HumanB::attack(void) const
{
	cout << _name << " attacks with his " << _wp->getType() << endl;
}
