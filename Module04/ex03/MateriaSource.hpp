/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:23:53 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/23 05:53:15 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_source[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &rhs);
		void learnMateria(AMateria *m);
		AMateria* createMateria(string const & type);
		~MateriaSource(void);
};
