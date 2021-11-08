/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:59:30 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/08 15:39:27 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	p1("player_1");
	ClapTrap	p2("player_2");
	
	p1.attack(p2.get_name());
	p2.takeDamage(120);
	p2.beRepaired(200);
	return (0);
}