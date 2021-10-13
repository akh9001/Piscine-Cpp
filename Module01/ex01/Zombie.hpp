/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:48:35 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/13 21:05:23 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define string		std::string

class	Zombie
{
		string	_name;
	public :
		Zombie(void);
		~Zombie(void);
		Zombie(string name);
		void	announce(void) const;
		void	set_name(string name);
		string	get_name(void) const;
		
};

Zombie*	zombieHorde(int N, string name);