/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:30 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 15:29:20 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap	p1("player_1");
	ClapTrap	p2;
	
	cout << "\n######Testing a player from ClapTrap class :#######\n" << endl;
	p2 = p1;
	p2.set_name("player_2");
	p1.attack(p2.get_name());
	p2.takeDamage(120);
	p2.beRepaired(200);
	cout << "\nName : " << p2.get_name() << endl;
	cout << "Hit points : " << p2.get_hitPoints() << endl;
	cout << "Energy points : " << p2.get_energyPoints() << endl;
	cout << "Attack damage : " << p2.get_attackDamage() << endl << endl;
	
	cout << "\n######Testing a player from ScavTrap class :#######\n" << endl;
	
	ScavTrap	p3("player_3");
	p3.attack(p1.get_name());
	p3.takeDamage(12);
	p3.beRepaired(25);
	p3.guardGate();
	cout << "\nName : " << p3.get_name() << endl;
	cout << "Hit points : " << p3.get_hitPoints() << endl;
	cout << "Energy points : " << p3.get_energyPoints() << endl;
	cout << "Attack damage : " << p3.get_attackDamage() << endl << endl;
	p3.set_name("player_003");
	p3.set_hitPoints(200);
	p3.set_energyPoints(100);
	p3.set_attackDamage(40);
	
	cout << "######Print the player after setting its informations :#######" << endl;
	
	cout << "\nName : " << p3.get_name() << endl;
	cout << "Hit points : " << p3.get_hitPoints() << endl;
	cout << "Energy points : " << p3.get_energyPoints() << endl;
	cout << "Attack damage : " << p3.get_attackDamage() << endl << endl;
	return (0);
}