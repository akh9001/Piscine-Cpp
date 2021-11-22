/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:17:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 22:07:01 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice &operator=(Ice const &rhs);
		AMateria* clone(void) const;
		void use(ICharacter& target);
		~Ice(void);
};
