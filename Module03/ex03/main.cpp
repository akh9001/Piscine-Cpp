/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:30 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 20:57:43 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	obj("Diamond");

	cout << "\nClaptrap Name : " << obj.get_name() << endl;
	cout << "Diamond Name : " << obj.get_name_diamond() << endl;
	cout << "Hit points : " << obj.get_hitPoints() << endl;
	cout << "Energy points : " << obj.get_energyPoints() << endl;
	cout << "Attack damage : " << obj.get_attackDamage() << endl << endl;
	obj.attack("Asmaa");
	obj.FragTrap::highFivesGuys();
	obj.ScavTrap::guardGate();
	obj.whoAmI();
	return (0);
}