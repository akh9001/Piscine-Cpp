/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:53:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/14 18:30:32 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(string const &name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &rhs);
		void	attack(string const & target);
		void	highFivesGuys(void);	
		~FragTrap(void);
};
