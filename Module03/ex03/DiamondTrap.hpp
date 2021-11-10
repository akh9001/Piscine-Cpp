/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:42:29 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 20:02:37 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public Fragtrap
{
	private:
		string		_name;
	public:
		DiamondTrap(void);
		DiamondTrap(string const & name);
		void whoAmI();
		~DiamondTrap();
};
