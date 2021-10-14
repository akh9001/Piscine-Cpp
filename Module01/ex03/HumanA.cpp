/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:07:57 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 19:26:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& type) :  _wp(type), _name(name)
{
	cout << "HumanA : "<< this->getName() <<" was created !" << endl;
	return ;
}

HumanA::~HumanA(void)
{
	cout << "HumanA : "<< this->getName() <<" died !" << endl;
	return ;
}

string		HumanA::getName(void) const
{
	return (_name);
}

void		HumanA::setName(string name)
{
	_name = name;
}

Weapon&		HumanA::getWeapon(void) const
{
	return (_wp);
}

void		HumanA::attack(void) const
{
	cout << _name << " attacks with his " << _wp.getType() << endl;
}
