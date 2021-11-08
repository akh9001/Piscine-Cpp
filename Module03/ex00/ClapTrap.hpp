/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:47:48 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/08 15:38:55 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#define cin		std::cin
#define cout	std::cout
#define endl	std::endl
#define string	std::string
#define ostream	std::ostream

class	ClapTrap
{
	private:
		string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(string const & target);
		ClapTrap(ClapTrap const & src);
		ClapTrap	& operator=(ClapTrap const &rhs);
		void		attack(string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		string		&get_name(void);
		~ClapTrap(void);
};