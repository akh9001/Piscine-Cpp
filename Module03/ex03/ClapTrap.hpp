/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:47:48 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 18:43:07 by akhalidy         ###   ########.fr       */
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
	protected:
		string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(string const & name);
		ClapTrap(string const & name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(ClapTrap const & src);
		ClapTrap	&operator=(ClapTrap const &rhs);
		void		attack(string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		string		get_name(void) const;
		int			get_hitPoints(void) const;
		int			get_energyPoints(void) const;
		int			get_attackDamage(void) const;
		void		set_name(string const & name);
		void		set_hitPoints(const int amount);
		void		set_energyPoints(const int amount);
		void		set_attackDamage(const int amount);
		~ClapTrap(void);
};
