/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:21:43 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/13 21:21:54 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int N, string name)
{
	Zombie*	zombies = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}
