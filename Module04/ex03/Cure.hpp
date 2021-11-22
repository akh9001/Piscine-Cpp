/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:17:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 22:12:09 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		/* data */
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure &operator=(Cure const &rhs);
		AMateria* clone(void) const;
		void use(ICharacter& target);
		~Cure(void);
};
