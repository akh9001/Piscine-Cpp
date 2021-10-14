/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:15:22 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 17:12:26 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	_weapon = type;
	cout << "The weapon <"<< type <<"> was created !" << endl;
	return ;
}

Weapon::~Weapon()
{
	cout << "The weapon <"<< this->getType() <<"> was destroyed !" << endl;
}

const string&	Weapon::getType(void) const
{
	return (_weapon);
}

void	Weapon::setType(string weapon)
{
	_weapon = weapon;
}