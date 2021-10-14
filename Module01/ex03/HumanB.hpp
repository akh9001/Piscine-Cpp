/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:17:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 19:38:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"
# define string std::string
# define cout	std::cout
# define endl	std::endl

class HumanB
{
	private:
		Weapon*	_wp;
		string	_name;
	public:
		HumanB(string name);
		~HumanB(void);
		string	getName(void) const;
		Weapon*	getWeapon(void);
		void	setName(string name);
		void	setWeapon(Weapon &wp);
		void	attack(void) const;
};
