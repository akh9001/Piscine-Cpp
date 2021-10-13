/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:42:37 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/13 19:51:01 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor : A constructor that takes no parameters 
// (or has parameters that all have default values)
// is called a default constructor.
Zombie::Zombie(void) : _name("Anonymous")
{
	return ;
}

Zombie::~Zombie(void)
{
	cout << "<" << this->_name << "> died :'(!" << endl;
}

Zombie::Zombie(string name)
{
	_name = name;
	return ;
}

string	Zombie::get_name(void) const
{
	return (this->_name);
}

void	Zombie::set_name(string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << endl;
}
