/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 00:10:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 06:29:58 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "ICharacter.hpp"

class AMateria
{
	protected:
		string	type;
	public:
		AMateria(void);
		AMateria(string const & type);
		// AMateria(AMateria const &src);
		// AMateria &operator=(AMateria const &rhs);
		string const &getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
		~AMateria(void);
};