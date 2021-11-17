/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 18:48:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap :  virtual public  ClapTrap
{
	private :
		
	public :
		ScavTrap(void);
		ScavTrap(string const & name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &rhs);
		void	attack(string const & target);
		void	guardGate(void);
		~ScavTrap(void);
};
