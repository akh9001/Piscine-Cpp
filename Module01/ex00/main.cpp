/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:45:18 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 11:27:33 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*zombie;

	// Create a zombie on the heap 
		zombie = newZombie("Ghoul");
		zombie->announce();
	// Createzombie on the stack
		randomChump("Headless");
	// Delete Ghoul zombie :
	delete zombie;
	return (0);
}