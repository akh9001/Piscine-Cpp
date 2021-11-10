/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/10 16:04:13 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{

	public :
		ScavTrap(void);
		ScavTrap(string const & name);
		void	guardGate(void);
		~ScavTrap(void);
};
