/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:53:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 16:04:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class Fragtrap : public ClapTrap
{
	public:
		Fragtrap(void);
		Fragtrap(string const &name);
		void	highFivesGuys(void);	
		~Fragtrap(void);
};