/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:48:14 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/13 21:22:51 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	int		N;
	string	name;
	Zombie	*zombies;

	N = 5;
	name = "ZOOMBIE";
	zombies = zombieHorde(N, name);
	// Let s the zombies annouce their selves.
	for (int i = 0; i < N; i++)
	{
		cout << i << " - ";
		zombies[i].announce();
	}
	// Delete zombies :
	delete [] zombies;
	return (0);
}
