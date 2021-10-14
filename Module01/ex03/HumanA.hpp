/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:42:02 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 16:37:47 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"
# define string std::string
# define cout	std::cout
# define endl	std::endl

class HumanA
{
	private:
		Weapon	_wp;
		string	_name;
	public:
		HumanA(string name, Weapon& wp);
		~HumanA(void);
		string	getName(void) const;
		Weapon	getWpType(void) const;
		void	setName(string name, Weapon wp);
		void	setWpType(string name, Weapon wp);
		void	setType(string weapon);
		void	attack(void) const;
};
