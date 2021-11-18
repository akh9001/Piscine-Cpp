/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:26:41 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/17 21:33:07 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat	&operator=(Cat const &rhs);
		void	makeSound(void) const;
		~Cat(void);
};
